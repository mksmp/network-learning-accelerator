#include "mytcpserver.h"
#include "database.h"
#include "algorithms.h"

MyTcpServer::~MyTcpServer()
{
    foreach(int i, SClients.keys())
    {
        QTextStream os(SClients[i]);
        SClients[i]->close();
        SClients.remove(i);
    }
    server_status=0;
    mTcpServer->close();
}
MyTcpServer::MyTcpServer(QObject *parent) : QObject(parent){
    mTcpServer = new QTcpServer(this);
    connect(mTcpServer, &QTcpServer::newConnection,this, &MyTcpServer::slotNewConnection);

    if(!mTcpServer->listen(QHostAddress::Any, 33333)){
        qDebug() << "server is not started";
    } else {
        server_status=1;
        qDebug() << "server is started";
    }
}

void MyTcpServer::slotNewConnection()
{
    if(server_status==1)
    {
        QTcpSocket* clientSocket=mTcpServer->nextPendingConnection();
        int idusersocs=(int)clientSocket->socketDescriptor();
        SClients[idusersocs]=clientSocket;

        connect(SClients[idusersocs],&QTcpSocket::readyRead,this,&MyTcpServer::slotServerRead);
        connect(SClients[idusersocs],&QTcpSocket::disconnected,this,&MyTcpServer::slotClientDisconnected);

        qDebug()<<QString::fromUtf8("Client is connected \n");
    }
}

void MyTcpServer::slotServerRead()
{
    QTcpSocket *clientSocket = (QTcpSocket*)sender();
    int id = (int)clientSocket->socketDescriptor();
    while(clientSocket->bytesAvailable()>0)
    {
        QByteArray array = clientSocket->readAll();
        array = parsing(array);
        clientSocket->write(array);

    }
}

void MyTcpServer::slotClientDisconnected()
{
    QTcpSocket *clientSocket = (QTcpSocket*)sender();
    int id = (int)clientSocket->socketDescriptor();
    clientSocket->close();
    SClients.remove(id);
    qDebug()<<QString::fromUtf8("Client is disconnected \n");
}


 QByteArray MyTcpServer::parsing(QByteArray array)
 {
     std::string login;
     std::string pass;
     std::string message;
     std::string flag;
     std::string email;
     QString result = "";
     message = array.toStdString();
     qDebug()<<QString::fromStdString(message);

     int pos = message.find("&");
     flag = message.substr(0,pos);
     message.erase(0,pos+1);

     pos = message.find("&");
     login = message.substr(0,pos);
     message.erase(0,pos+1);

     if (flag == "alg1") result = alg1pars(message);
     if (flag == "alg2") result = alg2pars(message);

     if (flag =="auth")
     {
         pass = message;
         result = authorize(login, pass);
     }
     else if (flag == "reg")
     {
         pos = message.find("&");
         pass = message.substr(0,pos);
         message.erase(0,pos+1);

         email = message;
         result = registration(login, pass, email);
     }
     qDebug()<<"login = "<<QString::fromStdString(login)
             <<"password = "<< QString::fromStdString(pass)
             << "email = " <<  QString::fromStdString(email)
             << "result = " << result;

     array.clear();
     array.append(result);
     return array;
 }

  QString MyTcpServer::alg1pars(std::string message)
  {
      vector<int> colneurallayers;

      int pos = message.find("&");
      int collayers = std::stoi(message.substr(0,pos));
      message.erase(0,pos+1);
      while (message != "")
      {
          pos = message.find("&");
          colneurallayers.push_back(std::stoi(message.substr(0,pos)));
          message.erase(0,pos+1);
      }


      vector<vector<std::string>> report = alg1(collayers, colneurallayers);
      QString result = "";
      for (int i = 0; i<=15; i++)
      {
          result +=  QString::fromStdString(report[i][0] + ". " + report[i][1] + " " + report[i][2] + "\n");
      }
      return result;
  }

  QString MyTcpServer::alg2pars(std::string message)
  {
      int colneurals = std::stoi(message);

      QString result = "";
      vector<vector<std::string>> report = alg2(colneurals);

      for (int i = 0; i<=15; i++)
      {
          result +=  QString::fromStdString(report[i][0] + ". " + report[i][1] + " " + report[i][2] + "\n");
      }
      return result;
  }


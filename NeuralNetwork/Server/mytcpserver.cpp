#include "mytcpserver.h"
#include <QDebug>
#include <QCoreApplication>
#include <QString>
#include "database.h"
#include "Neuro_Network_vector(variety).cpp"
#include "Neuro_Network_vector_2nd_algorithm.cpp"

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
       // SClients[idusersocs]->write("Hello!\n");
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

     if (flag == "alg1") alg1pars(message);
     if (flag == "alg2") alg1pars(message);

     pos = message.find("&");
     login = message.substr(0,pos);
     message.erase(0,pos+1);

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

  void MyTcpServer::alg1pars(std::string message)
  {
      std::string colneurallayers;

      int pos = message.find("&");
      int colneurals = std::stoi(message.substr(0,pos));
      message.erase(0,pos+1);

      pos = message.find("&");
      int collayers = std::stoi(message.substr(0,pos));
      message.erase(0,pos+1);

      alg1(colneurals, collayers);
  }

  void MyTcpServer::alg2pars(std::string message)
  {
      int colneurals = std::stoi(message);


      alg2(colneurals);
  }


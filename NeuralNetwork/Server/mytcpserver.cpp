#include "mytcpserver.h"
#include <QDebug>
#include <QCoreApplication>
#include <QString>
#include "database.h"
#include "Neuro_Network_vector(variety).cpp"


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
     if (flag == "neural") neuralpars(message);
     pos = message.find("&");
     login = message.substr(0,pos);
     message.erase(0,pos+1);

     pos = message.find("&");
     pass = message.substr(0,pos);
     message.erase(0,pos+1);
     if (flag =="auth")
     {
         result = authorize(login, pass);
     }
     else if (flag == "reg")
     {
         pos = message.find("&");
         email = message.substr(0,pos);
         message.erase(0,pos+1);
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

  void MyTcpServer::neuralpars(std::string message)
  {
      int colneurals;
      int collayers;
      std::string colneurallayers;

      int pos = message.find("&");
      colneurals = std::stoi(message.substr(0,pos));
      message.erase(0,pos+1);

      pos = message.find("&");
      collayers = std::stoi(message.substr(0,pos));
      message.erase(0,pos+1);

      algoritm(colneurals, collayers);


  }

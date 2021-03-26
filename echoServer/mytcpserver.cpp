#include "mytcpserver.h"
#include <QDebug>
#include <QCoreApplication>
#include <QString>
#include "functions.h"


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
    connect(mTcpServer, &QTcpServer::newConnection,
            this, &MyTcpServer::slotNewConnection);

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
        SClients[idusersocs]->write("Hello!\n");
        connect(SClients[idusersocs],&QTcpSocket::readyRead,this,&MyTcpServer::slotServerRead);
        connect(SClients[idusersocs],&QTcpSocket::disconnected,this,&MyTcpServer::slotClientDisconnected);
    }
}

void MyTcpServer::slotServerRead()
{
    QTcpSocket *clientSocket = (QTcpSocket*)sender();
    int id = (int)clientSocket->socketDescriptor();
    while(clientSocket->bytesAvailable()>0)
    {
        QByteArray array =clientSocket->readAll();
        std::string login = "";
        std::string pass = "";
        std::string message;
        message = array.toStdString();
        qDebug()<<QString::fromStdString(message);

        // <name_of_function>&<log>&<pass>

        //find name_of_function
        int pos = message.find("&");
        message.erase(0,pos+1);

        // find login
        pos = message.find("&");
        login = message.substr(0,pos);
        message.erase(0,pos+1);

        // find pass
        // find login
        pos = message.find("&");
        pass = message.substr(0,pos);
        message.erase(0,pos+1);

        qDebug()<<"login = "<<QString::fromStdString(login)
               <<"password = "<< QString::fromStdString(pass)
              << "result = " << authorize(login,pass);

        array.clear();
        array.append(authorize(login,pass));

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

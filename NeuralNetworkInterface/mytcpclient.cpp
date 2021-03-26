#include "mytcpclient.h"
#include <QDebug>
#include <QString>

MyTcpClient::MyTcpClient(QObject *parent) : QObject(parent)
{
    clientSocket = new QTcpSocket(this);
    clientSocket->connectToHost("172.17.102.213", 33333);
    connect(clientSocket,SIGNAL(connected()),SLOT(slot_connected()));
    connect(clientSocket,SIGNAL(readyRead()),SLOT(slot_readyRead()));

}

    MyTcpClient::~MyTcpClient()
    {
        clientSocket->close();
    }


    void MyTcpClient::slot_connected()
    {
        qDebug("Connected!!!");
    }

    void MyTcpClient::slot_readyRead()
    {
        QByteArray array;
        std::string message = "";

        while(clientSocket->bytesAvailable()>0)
        {
            array = clientSocket->readAll();
            message += array.toStdString();
        }
        qDebug("message");
    }

    void MyTcpClient::slot_send_to_server(QString message)
    {
        QByteArray array;
        array.append(message);
        clientSocket->write(array);
    }
    void MyTcpClient::slot_disconnected()
    {
        clientSocket->close();
    }

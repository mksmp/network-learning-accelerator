#include "mytcpclient.h"
#include <QDebug>

MyTcpClient::MyTcpClient(QObject *parent) : QObject(parent)
{
    clientSocket = new QTcpSocket(this);
    clientSocket->connectToHost("127.0.0.1", 33333);
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


        if (message == "auth&1")
        {
            emit Auth();
        }
        else if (message == "auth&0")
        {
            emit FailAuth();
            qDebug() << "fail auth";

        }
        else if (message == "reg&1")
        {
            emit Reg();
        }

        else if (message == "reg&0")
        {
            qDebug() << "fail reg";
            emit FailReg();
        }
        else qDebug() << "fail";

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



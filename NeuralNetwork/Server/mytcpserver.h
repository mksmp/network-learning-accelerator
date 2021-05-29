#ifndef MYTCPSERVER_H
#define MYTCPSERVER_H
#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>

#include <QtNetwork>
#include <QByteArray>
#include <QDebug>
/*!
\brief Класс, который отвечает за взаимодействие сервера и пользователем.
*/
class MyTcpServer : public QObject
{
    Q_OBJECT
public:
    explicit MyTcpServer(QObject *parent = nullptr);
    ~MyTcpServer();
public slots:
/*!
\brief Пользователь установил новое соединение.

Данная функция реализует действия сервера после устаноки ного соединения пользователем.

Код функции выглядит следующим образом:
\code
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
\endcode
*/
    void slotNewConnection();
/*!
\brief Пользователь разорвал соединение.

Данная функция реализует действия сервера после того, как соединение было разорвано.

Код функции выглядит следующим образом:
\code
void MyTcpServer::slotClientDisconnected()
{
    QTcpSocket *clientSocket = (QTcpSocket*)sender();
    int id = (int)clientSocket->socketDescriptor();
    clientSocket->close();
    SClients.remove(id);
    qDebug()<<QString::fromUtf8("Client is disconnected \n");
}
\endcode
*/
    void slotClientDisconnected();
/*!
\brief Чтение сервером.

Код функции выглядит следующим образом:
\code
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
\endcode
*/
    void slotServerRead();

private:
    QTcpServer * mTcpServer;
    int server_status;
    QMap<int,QTcpSocket *> SClients;
    QByteArray parsing(QByteArray array);
    void neuralpars(std::string message);
};
#endif // MYTCPSERVER_H

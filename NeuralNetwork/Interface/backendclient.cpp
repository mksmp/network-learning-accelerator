#include "backendclient.h"
#include <QString>
#include "mytcpclient.h"

QString authorize(QString login,QString pass )
{
    MyTcpClient *clientAuth = new MyTcpClient;
    QString message = "auth&"+login+"&"+pass;
    clientAuth->slot_send_to_server(message);

    return "1";
}


QString registration(QString login, QString pass, QString email)
{
    MyTcpClient *clientAuth = new MyTcpClient;
    QString message = "reg&"+login+"&"+pass+"&"+email;
    clientAuth->slot_send_to_server(message);

    return "1";
}

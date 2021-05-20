#include "backendclient.h"
#include <QString>

QString authorize(QString login,QString pass, MyTcpClient *clientAuth )
{
    QString message = "auth&"+login+"&"+pass;
    clientAuth->slot_send_to_server(message);

    return "1";
}


QString registration(QString login, QString pass, QString email, MyTcpClient *clientAuth)
{
    QString message = "reg&"+login+"&"+pass+"&"+email;
    clientAuth->slot_send_to_server(message);

    return "1";
}

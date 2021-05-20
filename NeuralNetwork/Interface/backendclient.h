#ifndef BACKENDCLIENT_H
#define BACKENDCLIENT_H
#include "mytcpclient.h"
#include <QString>

QString authorize(QString login, QString pass, MyTcpClient *clientAuth);

QString registration(QString login, QString pass, QString email, MyTcpClient *clientAuth);


#endif // BACKENDCLIENT_H



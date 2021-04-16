#ifndef BACKENDCLIENT_H
#define BACKENDCLIENT_H
#include "mytcpclient.h"
#include <QString>

QString authorize(QString login, QString pass);

QString registration(QString login, QString pass, QString email);


#endif // BACKENDCLIENT_H



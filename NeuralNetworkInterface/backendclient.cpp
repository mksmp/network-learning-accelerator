#include "backendclient.h"
#include "mytcpclient.h"
#include <string>

BackEndClient::BackEndClient()
{

}

bool authorize(QString login,QString pass )
{
    MyTcpClient *clientAuth;
    QString message = "auth&"+login+"&"+pass;
    clientAuth->slot_send_to_server(message);

    return true;
}

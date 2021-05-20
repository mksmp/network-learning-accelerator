#include "backendclient.h"
#include "mytcpclient.h"

BackEndClient::BackEndClient()
{

}
QString authorize(QString login,QString pass )
{
    MyTcpClient *clientAuth = new MyTcpClient;
    QString message = "auth&"+login+"&"+pass;
    clientAuth->slot_send_to_server(message);

    return "1";
}


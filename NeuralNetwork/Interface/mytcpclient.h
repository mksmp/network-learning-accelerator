#ifndef MYTCPCLIENT_H
#define MYTCPCLIENT_H

#include <QObject>
#include <QTcpSocket>


class MyTcpClient : public QObject
{
    Q_OBJECT
public:
    explicit MyTcpClient(QObject *parent = nullptr);
    ~MyTcpClient();


signals:
    void Auth();
    void FailAuth();
    void Reg();
    void FailReg();

private:
    QTcpSocket *clientSocket;
    void proverca(QString message);




public slots:
    void slot_connected();
    void slot_readyRead();
    void slot_send_to_server(QString message);
    void slot_disconnected();

};
#endif // MYTCPCLIENT_H

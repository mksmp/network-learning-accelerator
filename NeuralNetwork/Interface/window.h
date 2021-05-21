#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include <QFrame>
#include <QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class Window; }
QT_END_NAMESPACE

class Window : public QMainWindow
{
    Q_OBJECT

public:
    Window(QWidget *parent = nullptr);
    ~Window();

    void Auth();
    void FailAuth();
    void Reg();
    void FailReg();

private slots:
    void on_Authorization_clicked();
    void on_Cancel_clicked();
    void on_OK_clicked();
    void on_Registretion_clicked();
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();
    bool check(std::string pass);


    void on_education_clicked();

    void on_buttonBox_2_accepted();

public slots:
    void MyTcpClient();
    void disMyTcpClient();
    void slot_connected();
    void slot_readyRead();
    void slot_send_to_server(QString message);
    void slot_disconnected();


private:
    Ui::Window *ui;
   // MyTcpClient *clientAuth;

    QTcpSocket *clientSocket;
    void proverca(QString message);

};
#endif // WINDOW_H

#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include <QFrame>
#include <QTcpSocket>
#include <string>

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
    void Report(QString data);

private slots:
    void on_Authorization_clicked();
    void on_Cancel_clicked();
    void on_OK_clicked();
    void on_Registretion_clicked();
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();
    void on_education_clicked();
    void on_buttonBox_2_accepted();

    void on_algoritm1_clicked();

    void on_algoritm2_clicked();

    void on_buttonBox_2_rejected();

    void on_buttonBox_3_rejected();

    void on_buttonBox_3_accepted();

    void on_cansel_clicked();

public slots:
    void MyTcpClient();
    void slot_connected();
    void slot_readyRead();
    void slot_send_to_server(QString message);
    void slot_disconnected();
    bool check(std::string pass, std::string email);


private:
    Ui::Window *ui;
    QTcpSocket *clientSocket;
    void proverca(QString message);
    QString log;
};
#endif // WINDOW_H

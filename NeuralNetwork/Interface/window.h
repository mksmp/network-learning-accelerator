#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include <QFrame>
#include "mytcpclient.h"

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

private:
    Ui::Window *ui;
    MyTcpClient *clientAuth;

};
#endif // WINDOW_H

#include "window.h"
#include "ui_window.h"
#include "backendclient.h"

#include <QMessageBox>

Window::Window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Window)
{
    ui->setupUi(this);
    ui->label->setVisible(true);
    ui->winauth->setVisible(false);
    ui->winreg->setVisible(false);
    ui->winsecond->setVisible(false);
    ui->wineducation->setVisible(false);

/*
    connect(clientAuth,SIGNAL(Auth()),this,SLOT(Auth()));
    connect(clientAuth,SIGNAL(FailAuth()),this,SLOT(FailAuth()));
    connect(clientAuth,SIGNAL(Reg()),this,SLOT(Reg()));
    connect(clientAuth,SIGNAL(FailReg()),this,SLOT(FailReg()));
*/



}

Window::~Window()
{
    delete ui;
}


void Window::on_Authorization_clicked()
{
    ui->winfirst->setVisible(false);
    ui->winauth->setVisible(true);
}

void Window::on_Cancel_clicked()
{
    ui->winauth->setVisible(false);
    ui->winfirst->setVisible(true);
}

void Window::on_OK_clicked()
{
    QString login = ui->auth_login->text();
    QString password = ui->auth_password->text();
    MyTcpClient *clientAuth = new MyTcpClient;
    if (login !="" and password !="")
    {
        QString message = "auth&"+login+"&"+password;
        clientAuth->slot_send_to_server(message);

    }
    else
    {
        QMessageBox::critical(this, "ERROR", "login or password not entered!!!");
    }
}

void Window::on_Registretion_clicked()
{
    ui->winfirst->setVisible(false);
    ui->winreg->setVisible(true);
}

void Window::on_buttonBox_accepted()
{
    QString login = ui->login->text();
    QString email = ui->email->text();
    QString pass = ui->pass->text();
    QString conpass = ui->conpass->text();
    MyTcpClient *clientAuth = new MyTcpClient;
    if (login !="" and pass !="" and conpass !="" and email !="" )
    {
        if (pass == conpass)
        {

            QString message = "reg&"+login+"&"+pass+"&"+email;
            clientAuth->slot_send_to_server(message);
        }
        else
            QMessageBox::critical(this, "ERROR", "Password and Conpassword  unequal!!!");
    }
    else
        QMessageBox::critical(this, "ERROR", "login, password, conpassword or email not entered!!!");
}


void Window::on_buttonBox_rejected()
{
    ui->winreg->setVisible(false);
    ui->winfirst->setVisible(true);
}

void Window::Auth()
{
    ui->winauth->setVisible(false);
    ui->winsecond->setVisible(true);
}

void Window::FailAuth()
{
    QMessageBox::critical(this, "ERROR", "Incorrect login or password!!!");
}

void Window::Reg()
{
    ui->winauth->setVisible(false);
    ui->winfirst->setVisible(true);
}
void Window::FailReg()
{
     QMessageBox::critical(this, "ERROR", "ERROR");
}

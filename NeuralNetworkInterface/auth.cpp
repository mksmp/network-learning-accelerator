#include "auth.h"
#include "ui_auth.h"
#include <QMessageBox>
#include "neuralnetwork.h"
#include "backendclient.h"
#include "mytcpclient.h"

auth::auth(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::auth)
{
    ui->setupUi(this);

     w_neural = new NeuralNetwork();
}

auth::~auth()
{
    delete ui;
}


void auth::on_OK_clicked()
{

       QString login = ui->auth_login->text();
       QString password = ui->auth_password->text();
       if (login !="" or password !="")
       {
           MyTcpClient *clientAuth = new MyTcpClient;
           QString message = "auth&"+login+"&"+password;
           clientAuth->slot_send_to_server(message);
           QMessageBox::information(this, "Test", message);

           if (message == "1")
            {
               w_neural->show();
               this->close();
            }
            else
            {
               QMessageBox::critical(this, "ERROR", "Incorrect login or password!!!");
            }
       }
       else
       {
           QMessageBox::critical(this, "ERROR", "login or password not entered!!!");
       }

}

void auth::on_Cancel_clicked()
{
    this->close();      // Закрываем окно
    emit mainWindow();
}


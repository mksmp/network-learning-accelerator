#include "auth.h"
#include "ui_auth.h"
#include <QMessageBox>
#include "neuralnetwork.h"
#include "backendclient.h"

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
  /*     if (authorize(ui->auth_login->text(), ui->auth_password->text()))
        {
           w_neural->show();
            this->close();
        }
        else
        {
           QMessageBox::critical(this, "ERROR", "Incorrect login or password!!!");
        }
*/
    QString login = ui->auth_login->text();
    QString password = ui->auth_password->text();

    if (login == "admin" && password == "admin")
    {
        w_neural->show();
        this->close();
    }
    else
    {
        QMessageBox::critical(this, "ERROR", "Incorrect login or password!!!");
    }

}

void auth::on_Cancel_clicked()
{
    this->close();      // Закрываем окно
    emit mainWindow();
}


#include "auth.h"
#include "ui_auth.h"

auth::auth(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::auth)
{
    ui->setupUi(this);
    //ui->auth->label_error->setVisible(false);
}

auth::~auth()
{
    delete ui;
}

bool authorize(QString login,QString password)
{
    return true;
}

void auth::on_buttonBox_accepted()
{
    if(authorize("admin","admin"))
    {
        this->close();      // Закрываем окно
        emit mainWindow(); // И вызываем сигнал на открытие главного окна       //возврат в предыдущее окно
    }
    //else
      //  ui->auth->label_error->setVisible(true);
}

void auth::qwerty() //удалить
{
    qDebug("qwerty"); //удалить
}

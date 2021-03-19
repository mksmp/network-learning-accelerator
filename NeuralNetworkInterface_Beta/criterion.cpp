#include "criterion.h"
#include "ui_criterion.h"

criterion::criterion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::criterion)
{
    ui->setupUi(this);
}

criterion::~criterion()
{
    delete ui;
}

void criterion::on_buttonBox_accepted()
{
    this->close();      // Закрываем окно
    emit mainWindow(); // И вызываем сигнал на открытие главного окна
}

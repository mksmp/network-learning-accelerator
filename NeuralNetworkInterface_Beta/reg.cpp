#include "reg.h"
#include "ui_reg.h"

Reg::Reg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Reg)
{
    ui->setupUi(this);
}

Reg::~Reg()
{
    delete ui;
}

void Reg::on_buttonBox_accepted()
{
    this->close();      // Закрываем окно
    emit mainWindow(); // И вызываем сигнал на открытие главного окна
}

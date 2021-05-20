#include "reg.h"
#include "ui_reg.h"

reg::reg(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reg)
{
    ui->setupUi(this);
}

reg::~reg()
{
    delete ui;
}

void reg::on_buttonBox_rejected()
{
    this->close();      // Закрываем окно
    emit mainWindow();
}

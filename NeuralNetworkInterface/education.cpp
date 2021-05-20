#include "education.h"
#include "ui_education.h"

education::education(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::education)
{
    ui->setupUi(this);
}

education::~education()
{
    delete ui;
}

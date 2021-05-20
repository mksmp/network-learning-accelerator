#include "neuralnetwork.h"
#include "ui_neuralnetwork.h"
#include "education.h"

NeuralNetwork::NeuralNetwork(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NeuralNetwork)
{
    ui->setupUi(this);
    w_education = new education();
}

NeuralNetwork::~NeuralNetwork()
{
    delete ui;
}

void NeuralNetwork::on_education_clicked()
{
    w_education->show();
    this->close();
}

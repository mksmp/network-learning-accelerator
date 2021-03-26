#ifndef NEURALNETWORK_H
#define NEURALNETWORK_H

#include <QWidget>
#include "education.h"


namespace Ui {
class NeuralNetwork;
}

class NeuralNetwork : public QWidget
{
    Q_OBJECT

public:
    explicit NeuralNetwork(QWidget *parent = nullptr);
    ~NeuralNetwork();

private slots:
    void on_education_clicked();

private:
    Ui::NeuralNetwork *ui;
     education *w_education;
};

#endif // NEURALNETWORK_H

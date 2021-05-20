#ifndef AUTH_H
#define AUTH_H

#include <QWidget>
#include "neuralnetwork.h"
#include "backendclient.h"

namespace Ui {
class auth;
}

class auth : public QWidget
{
    Q_OBJECT

public:
    explicit auth(QWidget *parent = nullptr);
    ~auth();


signals:
    void mainWindow();  // Сигнал для основного окна на открытие

private slots:

    void on_OK_clicked();

    void on_Cancel_clicked();

private:
    Ui::auth *ui;
    NeuralNetwork *w_neural;
};

#endif // AUTH_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "auth.h"//для переключения на окно авторизации
#include "reg.h"
#include "criterion.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_Authorization_clicked();

    void on_Registretion_clicked();

    void on_Train_clicked();

private:
    Ui::MainWindow *ui;
    auth *w_auth; //для переключения на окно авторизации создаем указатель
    Reg *w_reg; // для переключения на окно регистрации
    criterion *w_crit; // для переключения на окно обучения нейронной сети
};

#endif // MAINWINDOW_H

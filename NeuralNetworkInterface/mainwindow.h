#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "auth.h"//для переключения на окно авторизации
#include "reg.h"
//#include "criterion.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Authorization_clicked();

    void on_Registretion_clicked();

private:
    Ui::MainWindow *ui;
    auth *w_auth; //для переключения на окно авторизации создаем указатель
    reg *w_reg; // для переключения на окно регистрации
};
#endif // MAINWINDOW_H

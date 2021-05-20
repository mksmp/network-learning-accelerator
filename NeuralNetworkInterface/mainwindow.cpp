#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "auth.h"
#include "reg.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    w_auth = new auth(); //выделениие памяти для создания окна авторизации
    w_reg = new reg(); // выделение памяти для создания окна регистрации
    // подключаем к слоту запуска главного окна по кнопке во втором окне
   connect(w_auth, &auth::mainWindow, this, &MainWindow::show);
   connect(w_reg, &reg::mainWindow, this, &MainWindow::show);
   connect(w_reg, &reg::mainWindow, this, &MainWindow::show);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Authorization_clicked()
{
    w_auth->show();
    this->close();
}

void MainWindow::on_Registretion_clicked()
{
    w_reg->show();
    this->close();
}

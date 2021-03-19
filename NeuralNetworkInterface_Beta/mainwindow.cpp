#include "mainwindow.h"
#include "auth.h"
#include "ui_mainwindow.h"
#include "reg.h"
#include "criterion.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    w_auth = new auth(); //выделениие памяти для создания окна авторизации
    w_reg = new Reg(); // выделение памяти для создания окна регистрации
    w_crit = new criterion();// выделение памяти для создания окна критериев обучения
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(w_auth, &auth::mainWindow, this, &MainWindow::show);
    connect(w_auth, &auth::mainWindow, w_auth, &auth::qwerty);
    connect(w_reg, &Reg::mainWindow, this, &MainWindow::show);
    connect(w_crit, &criterion::mainWindow, this, &MainWindow::show);
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



void MainWindow::on_Train_clicked()
{
    w_crit->show();
    this->close();
}

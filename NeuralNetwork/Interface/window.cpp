#include "window.h"
#include "ui_window.h"
#include <QMessageBox>
#include <QTableView>
#include <cstring>

Window::Window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Window)
{
    ui->setupUi(this);
    ui->label->setVisible(true);
    ui->winauth->setVisible(false);
    ui->winreg->setVisible(false);
    ui->winsecond->setVisible(false);
    ui->winthird->setVisible(false);
    ui->winalgoritm1->setVisible(false);
    ui->winalgoritm2->setVisible(false);
    ui->winreport->setVisible(false);
}

Window::~Window()
{
    delete ui;
}

void Window::on_Authorization_clicked()
{
    ui->winfirst->setVisible(false);
    ui->winauth->setVisible(true);
}

void Window::on_Cancel_clicked()
{
    ui->winauth->setVisible(false);
    ui->winfirst->setVisible(true);
}

void Window::on_OK_clicked()
{
    log = ui->auth_login->text();
    QString password = ui->auth_password->text();
    Auth();
    /*MyTcpClient();
    if (login !="" and password !="")
    {
        QString message = "auth&"+login+"&"+password;
        slot_send_to_server(message);
    }
    else
    {
        QMessageBox::critical(this, "Ошибка", "Поле логина или пароля пустое!!!");
    }*/
}

void Window::on_Registretion_clicked()
{
    ui->winfirst->setVisible(false);
    ui->winreg->setVisible(true);
}

void Window::on_buttonBox_accepted()
{
    QString login = ui->login->text();
    QString email = ui->email->text();
    QString pass = ui->pass->text();
    QString conpass = ui->conpass->text();

    MyTcpClient();
    if (login !="" and pass !="" and conpass !="" and email !="" )
    {
        if (pass == conpass)
        {
            if (check(pass.toStdString(), email.toStdString()))
            {
                QString message = "reg&"+login+"&"+pass+"&"+email;
                slot_send_to_server(message);
            }
        }
        else
            QMessageBox::critical(this, "Ошибка", "Пароль и повторный ввод пароля разные!!!");
    }
    else
        QMessageBox::critical(this, "Ошибка", "Поля логин, пароль или почта пустые !!!");
}

void Window::on_buttonBox_rejected()
{
    ui->winreg->setVisible(false);
    ui->winfirst->setVisible(true);
}

void Window::Auth()
{
    ui->winauth->setVisible(false);
    ui->winsecond->setVisible(true);
}

void Window::FailAuth()
{
    QMessageBox::critical(this, "Ошибка", "Неправельный логин или пароль!!!");
}

void Window::Reg()
{
    ui->winreg->setVisible(false);
    ui->winfirst->setVisible(true);
}

void Window::FailReg()
{
     QMessageBox::critical(this, "Ошибка", "Регистрация не произошла, повторите попытку позднее или напишите в техническую поддержку!");
}

void Window::Report(QString data)
{
    ui->winalgoritm1->setVisible(false);
    ui->winreport->setVisible(true);

    QTableView *table;

    //ui->table
}

bool Window::check(std::string pass, std::string email)
{
    std::vector<std::string> truepass = {{"ABCDEFGHIKLMNOPQRSTVXYZ"}, {"abcdefghiklmnopqrstvxyz"}, {"1234567890"}, {"-_!@#$%^*<>?"}}; // разрешенные символы
    if(email.find("@") != std::string::npos)
    {
        if(pass.size() >= 8)
        {
            for (int i = 0; i < pass.size(); i++)
            {

                if ( (truepass[0].find(pass[i]) != std::string::npos) or (truepass[1].find(pass[i]) != std::string::npos) or (truepass[2].find(pass[i]) != std::string::npos) or (truepass[3].find(pass[i]) != std::string::npos) ) { }
                else
                {
                    QMessageBox::critical(this, "Ошибка", "Пароль недостаточной сложности для безопасности ваших данных или содержит запрещенные спец символы!\nМожно использовать только -_!@#$%^*<>? ");
                    return false;
                }
            }
            return true;
        }
        else
        {
            QMessageBox::critical(this, "Ошибка", "Слишком короткий пароль!!");
            return false;
        }
    }
    else
    {
        QMessageBox::critical(this, "Ошибка", "Некорректная почта!!");
        return false;
    }
}

void Window::on_education_clicked()
{
    ui->winsecond->setVisible(false);
    ui->winthird->setVisible(true);
}

void Window::on_algoritm1_clicked()
{
    ui->winthird->setVisible(false);
    ui->winalgoritm1->setVisible(true);
}

void Window::on_algoritm2_clicked()
{
    ui->winthird->setVisible(false);
    ui->winalgoritm2->setVisible(true);
}

void Window::on_buttonBox_2_accepted()
{
    QString collayers = ui->collayers->text();
    QString colneurallayers = ui->colneurallayers->text();
    MyTcpClient();
    if (collayers !="" and colneurallayers !="")
    {
        QString message = "alg1&"+log+"&"+collayers+"&"+colneurallayers+"&";
        slot_send_to_server(message);
    }
    else
        QMessageBox::critical(this, "ERROR", "Есть пустые поля!!!");
}

void Window::on_buttonBox_2_rejected()
{
    ui->winalgoritm1->setVisible(false);
    ui->winthird->setVisible(true);
}

void Window::on_buttonBox_3_rejected()
{
    ui->winalgoritm2->setVisible(false);
    ui->winthird->setVisible(true);
}

void Window::on_buttonBox_3_accepted()
{
      QString colneurals = ui->colneurals->text();
      MyTcpClient();
      if (colneurals !="")
      {
          QString message = "alg2&"+colneurals;
          slot_send_to_server(message);
      }
}


/*//////////////////////////\\|***|MYTCPCLIENT|***|\\//////////////////////////////////////*/

    void Window::MyTcpClient()
    {
        clientSocket = new QTcpSocket(this);
        clientSocket->connectToHost("127.0.0.1", 33333);
        connect(clientSocket,SIGNAL(connected()),SLOT(slot_connected()));
        connect(clientSocket,SIGNAL(readyRead()),SLOT(slot_readyRead()));
    }

    void Window::slot_connected()
    {
        qDebug("Connected!!!");
    }

    void Window::slot_readyRead()
    {
        QByteArray array;
        std::string message = "";

        while(clientSocket->bytesAvailable()>0)
        {
            array = clientSocket->readAll();
            message += array.toStdString();
        }

        if (message == "auth&1")
        {
            Auth();
        }
        else if (message == "auth&0")
        {
            FailAuth();
            qDebug() << "fail auth";

        }
        else if (message == "reg&1")
        {
            Reg();
        }

        else if (message == "reg&0")
        {
            qDebug() << "fail reg";
            FailReg();
        }
        else qDebug() << "fail";

        slot_disconnected();

    }

    void Window::slot_send_to_server(QString message)
    {
        QByteArray array;
        array.append(message);
        clientSocket->write(array);
    }

    void Window::slot_disconnected()
    {
        clientSocket->close();
    }

/*//////////////////////////\\|***|MYTCPCLIENT|***|\\//////////////////////////////////////*/

void Window::on_cansel_clicked()
{
    ui->winfirst->setVisible(true);
    ui->winauth->setVisible(false);
    ui->winreg->setVisible(false);
    ui->winsecond->setVisible(false);
    ui->winthird->setVisible(false);
    ui->winalgoritm1->setVisible(false);
    ui->winalgoritm2->setVisible(false);
    ui->winreport->setVisible(false);
}

#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include <QFrame>
#include <QTcpSocket>
#include <string>

QT_BEGIN_NAMESPACE
namespace Ui { class Window; }
QT_END_NAMESPACE
/*!
\brief Класс, который отвечает за взаимодействие с пользователем.
*/
class Window : public QMainWindow
{
    Q_OBJECT

public:
    Window(QWidget *parent = nullptr);
    ~Window();
/*!
\brief Функция успешного завершения авторизации.

Данная функция реализует действия, которые будут происходить после успешного прохождения авторизации.

Код функции выглядит следующим образом:
\code
void Window::Auth()
{
    ui->winauth->setVisible(false);
    ui->winsecond->setVisible(true);
}
\endcode
*/
    void Auth();
/*!
\brief Функция неудачного завершения авторизации.

Данная функция реализует действия, которые будут происходить после неудачного прохождения авторизации.

Код функции выглядит следующим образом:
\code
void Window::FailAuth()
{
    QMessageBox::critical(this, "Ошибка", "Неправельный логин или пароль!!!");
}
\endcode
*/
    void FailAuth();
/*!
\brief Функция успешного завершения регистрации.

Данная функция реализует действия, которые будут происходить после удачного прохождения регистрации.

Код функции выглядит следующим образом:
\code
void Window::Reg()
{
    ui->winreg->setVisible(false);
    ui->winfirst->setVisible(true);
}
\endcode
*/
    void Reg();
/*!
\brief Функция неудачного завершения регистрации.

Данная функция реализует действия, которые будут происходить после неудачного прохождения регистрации.

Код функции выглядит следующим образом:
\code
void Window::FailReg()
{
     QMessageBox::critical(this, "Ошибка", "Регистрация не произошла, повторите попытку позднее или напишите в техническую поддержку!");
}
\endcode
*/
    void FailReg();
/*!
\brief Функция показ отчета.

Данная функция реализует действия, которые нужны для предоставления отчета пользователю. Отчет предоставляется в виде таблицы.

\param data -  данные, из которых формируется отчет.

Код функции выглядит следующим образом:
\code
void Window::Report(QString data)
{
    ui->winalgoritm1->setVisible(false);
    ui->winreport->setVisible(true);

    QTableView *table;

    //ui->table
}
\endcode
*/
    void Report(QString data);

private slots:
    void on_Authorization_clicked();
    void on_Cancel_clicked();
    void on_OK_clicked();
    void on_Registretion_clicked();
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();
    void on_education_clicked();
    void on_buttonBox_2_accepted();

    void on_algoritm1_clicked();

    void on_algoritm2_clicked();

    void on_buttonBox_2_rejected();

    void on_buttonBox_3_rejected();

    void on_buttonBox_3_accepted();

    void on_cansel_clicked();

public slots:
/*!
\brief Создание нового подключения.

Данная функция реализует процесс создание нового подключения

Код функции выглядит следующим образом:
\code
    void Window::MyTcpClient()
    {
        clientSocket = new QTcpSocket(this);
        clientSocket->connectToHost("127.0.0.1", 33333);
        connect(clientSocket,SIGNAL(connected()),SLOT(slot_connected()));
        connect(clientSocket,SIGNAL(readyRead()),SLOT(slot_readyRead()));
    }
\endcode
*/
    void MyTcpClient();
/*!
\brief Соединение установлено.

Если соединение установлено, то будет выводиться сообщение.

Код функции выглядит следующим образом:
\code
    void Window::slot_connected()
    {
        qDebug("Connected!!!");
    }
\endcode
*/
    void slot_connected();
/*!
\brief Функция чтения сигналов сервера

\param array - массив данных, который формирует сообщение.
\param message - сообщение, сфорированное из массива.

Код функции выглядит следующим образом:
\code
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
\endcode
*/
    void slot_readyRead();
/*!
\brief Отправка сообщение на сервер.

\param message - сообщение, в котором содержатся данные.
\param array - массив, в который доюавляется сообщение.

Код функции выглядит следующим образом:
\code
    void Window::slot_send_to_server(QString message)
    {
        QByteArray array;
        array.append(message);
        clientSocket->write(array);
    }
\endcode
 */
    void slot_send_to_server(QString message);
/*!
\brief Соединение разорвано.

Код функции выглядит следующим образом:
\code
    void Window::slot_disconnected()
    {
        clientSocket->close();
    }
\endcode
*/
    void slot_disconnected();
/*!
\brief Проверка правильности введенных данных.

Данная функция проверяет почтовый адрес пользователь на наличие символа "@".
Также функция проверяет пароль на содержание заглавных и пропсных букв, специальных знаков и цифр, а также на соответствие
требуемой длине.

\param pass - пароль, который проходит проверку на соответствие требованиям.
\param email - почтовый адрес, который проходит проверку на содержание символа "@".
\param truepass - динамический массив, который содержит символы, которые должны обязательно использоваться при создании пароля.

\returns true, если все введенные данные соответсвует требованям.
\returns false, если данные не соответсвует требованям.

Код функции выглядит следующим образом:
\code
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
\endcode
*/
    bool check(std::string pass, std::string email);


private:
    Ui::Window *ui;
    QTcpSocket *clientSocket;
    void proverca(QString message);
    QString log;
};
#endif // WINDOW_H

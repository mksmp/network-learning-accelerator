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
    QMessageBox::critical(this, "ERROR", "Incorrect login or password!!!");
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
     QMessageBox::critical(this, "ERROR", "ERROR");
}
\endcode
*/
    void FailReg();

private slots:
    void on_Authorization_clicked();
    void on_Cancel_clicked();
    void on_OK_clicked();
    void on_Registretion_clicked();
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();
    void on_education_clicked();
    void on_buttonBox_2_accepted();

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
\brief Проверка пароля.

Данная функция проверяет пароль на содержание заглавных и пропсных букв, специальных знаков и цифр, а также на соответствие
требуемой длине. В случае не выполнения какого-то из этих требования выводится сообщение.

\param pass - пароль, который проходит проверку на соответствие требованиям.

\returns true, если пароль соответсвует требованям.
\returns false, если пароль не соответсвует требованям.

Код функции выглядит следующим образом:
\code
bool Window::check(std::string pass)
{
    if(pass.size() > 8)
    {
        for (int i = 0; i < pass.size(); i++)
        {

            if ( pass[i] < 48 or  pass[i] > 122)
            {
                QMessageBox::critical(this, "ERROR", "The password can contain only letters of the Latin alphabet and numbers!!!");
                return false;
            }
        }
        return true;
    }
    else
    {
        QMessageBox::critical(this, "ERROR", "Incorrect password!!! Password size is less than 8 characters!!!");
        return false;
    }
}
\endcode
*/
    bool check(std::string pass);


private:
    Ui::Window *ui;
    QTcpSocket *clientSocket;
    void proverca(QString message);

};
#endif // WINDOW_H

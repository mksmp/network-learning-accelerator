#ifndef AUTH_H
#define AUTH_H

#include <QDialog>

namespace Ui {
class auth;
}

class auth : public QDialog
{
    Q_OBJECT

public:
    explicit auth(QWidget *parent = nullptr);
    ~auth();
    void qwerty();//удалить

private slots:
    void on_buttonBox_accepted();

signals:
    void mainWindow();  // Сигнал для основного окна на открытие

private:
    Ui::auth *ui;
};

#endif // AUTH_H

#ifndef CRITERION_H
#define CRITERION_H

#include <QDialog>

namespace Ui {
class criterion;
}

class criterion : public QDialog
{
    Q_OBJECT

public:
    explicit criterion(QWidget *parent = nullptr);
    ~criterion();

signals:
    void mainWindow();  // Сигнал для основного окна на открытие

private slots:
    void on_buttonBox_accepted();

private:
    Ui::criterion *ui;
};

#endif // CRITERION_H

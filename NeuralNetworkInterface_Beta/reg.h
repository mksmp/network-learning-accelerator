#ifndef REG_H
#define REG_H

#include <QDialog>

namespace Ui {
class Reg;
}

class Reg : public QDialog
{
    Q_OBJECT

public:
    explicit Reg(QWidget *parent = nullptr);
    ~Reg();

signals:
    void mainWindow();  // Сигнал для основного окна на открытие

private slots:
    void on_buttonBox_accepted();

private:
    Ui::Reg *ui;
};

#endif // REG_H

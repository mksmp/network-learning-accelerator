#ifndef REG_H
#define REG_H

#include <QWidget>

namespace Ui {
class reg;
}

class reg : public QWidget
{
    Q_OBJECT

public:
    explicit reg(QWidget *parent = nullptr);
    ~reg();

signals:
    void mainWindow();  // Сигнал для основного окна на открытие


private slots:
    void on_buttonBox_rejected();

private:
    Ui::reg *ui;
};

#endif // REG_H

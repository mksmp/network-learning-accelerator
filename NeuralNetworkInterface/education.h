#ifndef EDUCATION_H
#define EDUCATION_H

#include <QWidget>

namespace Ui {
class education;
}

class education : public QWidget
{
    Q_OBJECT

public:
    explicit education(QWidget *parent = nullptr);
    ~education();

private slots:

signals:
    void mainWindow();

private:
    Ui::education *ui;
};

#endif // EDUCATION_H

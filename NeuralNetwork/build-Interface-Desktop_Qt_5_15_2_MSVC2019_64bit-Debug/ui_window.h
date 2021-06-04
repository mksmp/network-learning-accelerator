/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window
{
public:
    QWidget *centralwidget;
    QFrame *winfirst;
    QGridLayout *gridLayout_13;
    QGridLayout *gridLayout;
    QPushButton *Registretion;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *title_NN;
    QSpacerItem *verticalSpacer_2;
    QPushButton *Authorization;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_4;
    QFrame *winauth;
    QGridLayout *gridLayout_12;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *OK;
    QLabel *title_NN_2;
    QPushButton *Cancel;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_8;
    QLabel *title_Pas;
    QLabel *title_Log;
    QSpacerItem *verticalSpacer_9;
    QLineEdit *auth_password;
    QLineEdit *auth_login;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QFrame *winreg;
    QGridLayout *gridLayout_14;
    QGridLayout *gridLayout_3;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer_10;
    QLabel *title_NN_3;
    QSpacerItem *verticalSpacer_11;
    QCheckBox *consent;
    QLabel *title_Email;
    QLineEdit *email;
    QLineEdit *pass;
    QLabel *title_Log_2;
    QLabel *title_ConPas;
    QLineEdit *login;
    QLineEdit *conpass;
    QLabel *title_Pas_2;
    QSpacerItem *verticalSpacer_12;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label;
    QFrame *winsecond;
    QGridLayout *gridLayout_15;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_15;
    QSpacerItem *verticalSpacer_13;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *report;
    QPushButton *education;
    QSpacerItem *verticalSpacer_14;
    QLabel *title_NN_4;
    QSpacerItem *verticalSpacer_16;
    QFrame *winalgoritm1;
    QGridLayout *gridLayout_10;
    QGridLayout *gridLayout_5;
    QLabel *title_inform_3;
    QSpacerItem *verticalSpacer_19;
    QSpacerItem *verticalSpacer_18;
    QLineEdit *collayers;
    QDialogButtonBox *buttonBox_2;
    QLineEdit *colneurallayers;
    QSpacerItem *verticalSpacer_20;
    QSpacerItem *verticalSpacer_17;
    QSpacerItem *horizontalSpacer_10;
    QLabel *title_inform_1;
    QLabel *title_NN_5;
    QFrame *winthird;
    QGridLayout *gridLayout_16;
    QGridLayout *gridLayout_6;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *verticalSpacer_21;
    QSpacerItem *verticalSpacer_22;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *algoritm2;
    QPushButton *algoritm1;
    QSpacerItem *verticalSpacer_23;
    QLabel *title_NN_6;
    QSpacerItem *verticalSpacer_24;
    QFrame *winalgoritm2;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_7;
    QLabel *title_inform_6;
    QSpacerItem *verticalSpacer_26;
    QSpacerItem *verticalSpacer_27;
    QDialogButtonBox *buttonBox_3;
    QSpacerItem *verticalSpacer_25;
    QLineEdit *colneurals;
    QLabel *title_NN_7;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *verticalSpacer_28;
    QFrame *winreport;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_8;
    QLabel *title_NN_8;
    QSpacerItem *verticalSpacer_29;
    QSpacerItem *verticalSpacer_31;
    QSpacerItem *horizontalSpacer_14;
    QTableView *tableView;
    QSpacerItem *verticalSpacer_32;
    QSpacerItem *verticalSpacer_30;
    QPushButton *cansel;

    void setupUi(QMainWindow *Window)
    {
        if (Window->objectName().isEmpty())
            Window->setObjectName(QString::fromUtf8("Window"));
        Window->resize(800, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Window->sizePolicy().hasHeightForWidth());
        Window->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(Window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        winfirst = new QFrame(centralwidget);
        winfirst->setObjectName(QString::fromUtf8("winfirst"));
        winfirst->setGeometry(QRect(0, 0, 800, 500));
        winfirst->setFrameShape(QFrame::StyledPanel);
        winfirst->setFrameShadow(QFrame::Raised);
        gridLayout_13 = new QGridLayout(winfirst);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Registretion = new QPushButton(winfirst);
        Registretion->setObjectName(QString::fromUtf8("Registretion"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Registretion->sizePolicy().hasHeightForWidth());
        Registretion->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("Monospac821 BT"));
        font.setPointSize(32);
        Registretion->setFont(font);
        Registretion->setStyleSheet(QString::fromUtf8("color:white;"));
        Registretion->setFlat(true);

        gridLayout->addWidget(Registretion, 4, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 5, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 0, 0, 1, 3);

        title_NN = new QLabel(winfirst);
        title_NN->setObjectName(QString::fromUtf8("title_NN"));

        gridLayout->addWidget(title_NN, 1, 0, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        Authorization = new QPushButton(winfirst);
        Authorization->setObjectName(QString::fromUtf8("Authorization"));
        sizePolicy1.setHeightForWidth(Authorization->sizePolicy().hasHeightForWidth());
        Authorization->setSizePolicy(sizePolicy1);
        Authorization->setFont(font);
        Authorization->setStyleSheet(QString::fromUtf8("color:white;\n"
"box-shadow: 4px 4px 5px rgba(250, 50, 50, 0.4);\n"
""));
        Authorization->setFlat(true);

        gridLayout->addWidget(Authorization, 3, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 5, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 7, 0, 1, 3);


        gridLayout_13->addLayout(gridLayout, 0, 0, 1, 1);

        winauth = new QFrame(centralwidget);
        winauth->setObjectName(QString::fromUtf8("winauth"));
        winauth->setGeometry(QRect(0, 0, 800, 500));
        winauth->setFrameShape(QFrame::StyledPanel);
        winauth->setFrameShadow(QFrame::Raised);
        gridLayout_12 = new QGridLayout(winauth);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_5, 8, 0, 1, 7);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_6, 2, 0, 1, 7);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 3, 6, 5, 1);

        OK = new QPushButton(winauth);
        OK->setObjectName(QString::fromUtf8("OK"));
        QFont font1;
        font1.setPointSize(14);
        OK->setFont(font1);

        gridLayout_2->addWidget(OK, 5, 4, 3, 1);

        title_NN_2 = new QLabel(winauth);
        title_NN_2->setObjectName(QString::fromUtf8("title_NN_2"));

        gridLayout_2->addWidget(title_NN_2, 1, 0, 1, 7);

        Cancel = new QPushButton(winauth);
        Cancel->setObjectName(QString::fromUtf8("Cancel"));
        Cancel->setFont(font1);

        gridLayout_2->addWidget(Cancel, 5, 5, 3, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_7, 9, 0, 1, 7);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_8, 0, 0, 1, 7);

        title_Pas = new QLabel(winauth);
        title_Pas->setObjectName(QString::fromUtf8("title_Pas"));

        gridLayout_2->addWidget(title_Pas, 4, 1, 1, 2);

        title_Log = new QLabel(winauth);
        title_Log->setObjectName(QString::fromUtf8("title_Log"));
        QFont font2;
        font2.setPointSize(24);
        title_Log->setFont(font2);

        gridLayout_2->addWidget(title_Log, 3, 1, 1, 2);

        verticalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(verticalSpacer_9, 3, 0, 5, 1);

        auth_password = new QLineEdit(winauth);
        auth_password->setObjectName(QString::fromUtf8("auth_password"));
        QFont font3;
        font3.setPointSize(18);
        auth_password->setFont(font3);
        auth_password->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        auth_password->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(auth_password, 4, 3, 1, 3);

        auth_login = new QLineEdit(winauth);
        auth_login->setObjectName(QString::fromUtf8("auth_login"));
        auth_login->setFont(font3);

        gridLayout_2->addWidget(auth_login, 3, 3, 1, 3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 5, 3, 3, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 5, 1, 3, 2);


        gridLayout_12->addLayout(gridLayout_2, 0, 0, 1, 1);

        winreg = new QFrame(centralwidget);
        winreg->setObjectName(QString::fromUtf8("winreg"));
        winreg->setGeometry(QRect(0, 0, 800, 500));
        winreg->setFrameShape(QFrame::StyledPanel);
        winreg->setFrameShadow(QFrame::Raised);
        gridLayout_14 = new QGridLayout(winreg);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        buttonBox = new QDialogButtonBox(winreg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setEnabled(true);
        QFont font4;
        font4.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font4.setPointSize(14);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(9);
        buttonBox->setFont(font4);
        buttonBox->setCursor(QCursor(Qt::ArrowCursor));
        buttonBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 14pt \"MS Shell Dlg 2\";"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        gridLayout_3->addWidget(buttonBox, 8, 1, 1, 2);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_10, 0, 1, 1, 2);

        title_NN_3 = new QLabel(winreg);
        title_NN_3->setObjectName(QString::fromUtf8("title_NN_3"));

        gridLayout_3->addWidget(title_NN_3, 1, 1, 1, 2);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_11, 9, 1, 1, 2);

        consent = new QCheckBox(winreg);
        consent->setObjectName(QString::fromUtf8("consent"));
        consent->setStyleSheet(QString::fromUtf8("font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(239, 239, 239);"));

        gridLayout_3->addWidget(consent, 7, 1, 1, 2);

        title_Email = new QLabel(winreg);
        title_Email->setObjectName(QString::fromUtf8("title_Email"));
        title_Email->setFont(font2);

        gridLayout_3->addWidget(title_Email, 4, 1, 1, 1);

        email = new QLineEdit(winreg);
        email->setObjectName(QString::fromUtf8("email"));
        email->setFont(font3);

        gridLayout_3->addWidget(email, 4, 2, 1, 1);

        pass = new QLineEdit(winreg);
        pass->setObjectName(QString::fromUtf8("pass"));
        pass->setFont(font3);
        pass->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        pass->setEchoMode(QLineEdit::Password);

        gridLayout_3->addWidget(pass, 5, 2, 1, 1);

        title_Log_2 = new QLabel(winreg);
        title_Log_2->setObjectName(QString::fromUtf8("title_Log_2"));
        title_Log_2->setFont(font2);

        gridLayout_3->addWidget(title_Log_2, 3, 1, 1, 1);

        title_ConPas = new QLabel(winreg);
        title_ConPas->setObjectName(QString::fromUtf8("title_ConPas"));

        gridLayout_3->addWidget(title_ConPas, 6, 1, 1, 1);

        login = new QLineEdit(winreg);
        login->setObjectName(QString::fromUtf8("login"));
        login->setFont(font3);

        gridLayout_3->addWidget(login, 3, 2, 1, 1);

        conpass = new QLineEdit(winreg);
        conpass->setObjectName(QString::fromUtf8("conpass"));
        conpass->setFont(font3);
        conpass->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        conpass->setEchoMode(QLineEdit::Password);

        gridLayout_3->addWidget(conpass, 6, 2, 1, 1);

        title_Pas_2 = new QLabel(winreg);
        title_Pas_2->setObjectName(QString::fromUtf8("title_Pas_2"));

        gridLayout_3->addWidget(title_Pas_2, 5, 1, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_12, 2, 1, 1, 2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 0, 3, 10, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_7, 0, 0, 10, 1);


        gridLayout_14->addLayout(gridLayout_3, 0, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 800, 500));
        winsecond = new QFrame(centralwidget);
        winsecond->setObjectName(QString::fromUtf8("winsecond"));
        winsecond->setGeometry(QRect(0, 0, 800, 500));
        winsecond->setFrameShape(QFrame::StyledPanel);
        winsecond->setFrameShadow(QFrame::Raised);
        gridLayout_15 = new QGridLayout(winsecond);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_8, 3, 2, 3, 1);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_15, 0, 0, 1, 3);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_13, 2, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_9, 3, 0, 3, 1);

        report = new QPushButton(winsecond);
        report->setObjectName(QString::fromUtf8("report"));
        sizePolicy1.setHeightForWidth(report->sizePolicy().hasHeightForWidth());
        report->setSizePolicy(sizePolicy1);
        report->setFont(font);
        report->setStyleSheet(QString::fromUtf8("color:white;"));
        report->setFlat(true);

        gridLayout_4->addWidget(report, 4, 1, 1, 1);

        education = new QPushButton(winsecond);
        education->setObjectName(QString::fromUtf8("education"));
        sizePolicy1.setHeightForWidth(education->sizePolicy().hasHeightForWidth());
        education->setSizePolicy(sizePolicy1);
        education->setFont(font);
        education->setStyleSheet(QString::fromUtf8("color:white;\n"
"box-shadow: 4px 4px 5px rgba(250, 50, 50, 0.4);\n"
""));
        education->setFlat(true);

        gridLayout_4->addWidget(education, 3, 1, 1, 1);

        verticalSpacer_14 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_14, 6, 1, 1, 1);

        title_NN_4 = new QLabel(winsecond);
        title_NN_4->setObjectName(QString::fromUtf8("title_NN_4"));

        gridLayout_4->addWidget(title_NN_4, 1, 0, 1, 3);

        verticalSpacer_16 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_16, 7, 0, 1, 3);


        gridLayout_15->addLayout(gridLayout_4, 0, 0, 1, 1);

        winalgoritm1 = new QFrame(centralwidget);
        winalgoritm1->setObjectName(QString::fromUtf8("winalgoritm1"));
        winalgoritm1->setGeometry(QRect(0, 0, 800, 500));
        winalgoritm1->setFrameShape(QFrame::StyledPanel);
        winalgoritm1->setFrameShadow(QFrame::Raised);
        gridLayout_10 = new QGridLayout(winalgoritm1);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        title_inform_3 = new QLabel(winalgoritm1);
        title_inform_3->setObjectName(QString::fromUtf8("title_inform_3"));

        gridLayout_5->addWidget(title_inform_3, 4, 1, 1, 1);

        verticalSpacer_19 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_19, 0, 0, 1, 3);

        verticalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(verticalSpacer_18, 3, 2, 11, 1);

        collayers = new QLineEdit(winalgoritm1);
        collayers->setObjectName(QString::fromUtf8("collayers"));
        collayers->setFont(font3);
        collayers->setInputMethodHints(Qt::ImhNone);

        gridLayout_5->addWidget(collayers, 5, 1, 1, 1);

        buttonBox_2 = new QDialogButtonBox(winalgoritm1);
        buttonBox_2->setObjectName(QString::fromUtf8("buttonBox_2"));
        buttonBox_2->setEnabled(true);
        buttonBox_2->setFont(font4);
        buttonBox_2->setCursor(QCursor(Qt::ArrowCursor));
        buttonBox_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 14pt \"MS Shell Dlg 2\";"));
        buttonBox_2->setOrientation(Qt::Horizontal);
        buttonBox_2->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox_2->setCenterButtons(false);

        gridLayout_5->addWidget(buttonBox_2, 8, 1, 1, 1);

        colneurallayers = new QLineEdit(winalgoritm1);
        colneurallayers->setObjectName(QString::fromUtf8("colneurallayers"));
        colneurallayers->setFont(font3);
        colneurallayers->setInputMethodHints(Qt::ImhNone);

        gridLayout_5->addWidget(colneurallayers, 7, 1, 1, 1);

        verticalSpacer_20 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_20, 2, 0, 1, 3);

        verticalSpacer_17 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_17, 9, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_10, 3, 0, 10, 1);

        title_inform_1 = new QLabel(winalgoritm1);
        title_inform_1->setObjectName(QString::fromUtf8("title_inform_1"));

        gridLayout_5->addWidget(title_inform_1, 6, 1, 1, 1);

        title_NN_5 = new QLabel(winalgoritm1);
        title_NN_5->setObjectName(QString::fromUtf8("title_NN_5"));

        gridLayout_5->addWidget(title_NN_5, 1, 0, 1, 3);


        gridLayout_10->addLayout(gridLayout_5, 0, 0, 1, 1);

        winthird = new QFrame(centralwidget);
        winthird->setObjectName(QString::fromUtf8("winthird"));
        winthird->setGeometry(QRect(0, 0, 800, 500));
        winthird->setFrameShape(QFrame::StyledPanel);
        winthird->setFrameShadow(QFrame::Raised);
        gridLayout_16 = new QGridLayout(winthird);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_11, 3, 2, 3, 1);

        verticalSpacer_21 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_21, 0, 0, 1, 3);

        verticalSpacer_22 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_22, 2, 1, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_12, 3, 0, 3, 1);

        algoritm2 = new QPushButton(winthird);
        algoritm2->setObjectName(QString::fromUtf8("algoritm2"));
        sizePolicy1.setHeightForWidth(algoritm2->sizePolicy().hasHeightForWidth());
        algoritm2->setSizePolicy(sizePolicy1);
        algoritm2->setFont(font);
        algoritm2->setStyleSheet(QString::fromUtf8("color:white;"));
        algoritm2->setFlat(true);

        gridLayout_6->addWidget(algoritm2, 4, 1, 1, 1);

        algoritm1 = new QPushButton(winthird);
        algoritm1->setObjectName(QString::fromUtf8("algoritm1"));
        sizePolicy1.setHeightForWidth(algoritm1->sizePolicy().hasHeightForWidth());
        algoritm1->setSizePolicy(sizePolicy1);
        algoritm1->setFont(font);
        algoritm1->setStyleSheet(QString::fromUtf8("color:white;\n"
"box-shadow: 4px 4px 5px rgba(250, 50, 50, 0.4);\n"
""));
        algoritm1->setFlat(true);

        gridLayout_6->addWidget(algoritm1, 3, 1, 1, 1);

        verticalSpacer_23 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_23, 6, 1, 1, 1);

        title_NN_6 = new QLabel(winthird);
        title_NN_6->setObjectName(QString::fromUtf8("title_NN_6"));

        gridLayout_6->addWidget(title_NN_6, 1, 0, 1, 3);

        verticalSpacer_24 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_24, 7, 0, 1, 3);


        gridLayout_16->addLayout(gridLayout_6, 0, 0, 1, 1);

        winalgoritm2 = new QFrame(centralwidget);
        winalgoritm2->setObjectName(QString::fromUtf8("winalgoritm2"));
        winalgoritm2->setGeometry(QRect(0, 0, 800, 500));
        winalgoritm2->setFrameShape(QFrame::StyledPanel);
        winalgoritm2->setFrameShadow(QFrame::Raised);
        gridLayout_11 = new QGridLayout(winalgoritm2);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        title_inform_6 = new QLabel(winalgoritm2);
        title_inform_6->setObjectName(QString::fromUtf8("title_inform_6"));

        gridLayout_7->addWidget(title_inform_6, 4, 1, 1, 1);

        verticalSpacer_26 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_26, 0, 0, 1, 3);

        verticalSpacer_27 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_27, 7, 1, 1, 1);

        buttonBox_3 = new QDialogButtonBox(winalgoritm2);
        buttonBox_3->setObjectName(QString::fromUtf8("buttonBox_3"));
        buttonBox_3->setEnabled(true);
        buttonBox_3->setFont(font4);
        buttonBox_3->setCursor(QCursor(Qt::ArrowCursor));
        buttonBox_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 14pt \"MS Shell Dlg 2\";"));
        buttonBox_3->setOrientation(Qt::Horizontal);
        buttonBox_3->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox_3->setCenterButtons(false);

        gridLayout_7->addWidget(buttonBox_3, 6, 1, 1, 1);

        verticalSpacer_25 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_25, 2, 0, 1, 3);

        colneurals = new QLineEdit(winalgoritm2);
        colneurals->setObjectName(QString::fromUtf8("colneurals"));
        colneurals->setFont(font3);
        colneurals->setInputMethodHints(Qt::ImhNone);

        gridLayout_7->addWidget(colneurals, 5, 1, 1, 1);

        title_NN_7 = new QLabel(winalgoritm2);
        title_NN_7->setObjectName(QString::fromUtf8("title_NN_7"));

        gridLayout_7->addWidget(title_NN_7, 1, 0, 1, 3);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_13, 3, 0, 8, 1);

        verticalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(verticalSpacer_28, 3, 2, 9, 1);


        gridLayout_11->addLayout(gridLayout_7, 0, 0, 1, 1);

        winreport = new QFrame(centralwidget);
        winreport->setObjectName(QString::fromUtf8("winreport"));
        winreport->setGeometry(QRect(10, 0, 800, 500));
        winreport->setFrameShape(QFrame::StyledPanel);
        winreport->setFrameShadow(QFrame::Raised);
        gridLayout_9 = new QGridLayout(winreport);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        title_NN_8 = new QLabel(winreport);
        title_NN_8->setObjectName(QString::fromUtf8("title_NN_8"));

        gridLayout_8->addWidget(title_NN_8, 1, 0, 1, 3);

        verticalSpacer_29 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_29, 0, 0, 1, 3);

        verticalSpacer_31 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_31, 4, 1, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_14, 3, 0, 5, 1);

        tableView = new QTableView(winreport);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_8->addWidget(tableView, 3, 1, 1, 1);

        verticalSpacer_32 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(verticalSpacer_32, 3, 2, 6, 1);

        verticalSpacer_30 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_30, 2, 0, 1, 3);


        gridLayout_9->addLayout(gridLayout_8, 0, 0, 1, 1);

        cansel = new QPushButton(centralwidget);
        cansel->setObjectName(QString::fromUtf8("cansel"));
        cansel->setGeometry(QRect(0, 460, 81, 41));
        QFont font5;
        font5.setPointSize(13);
        font5.setBold(true);
        font5.setWeight(75);
        cansel->setFont(font5);
        cansel->setAcceptDrops(false);
        cansel->setAutoFillBackground(false);
        cansel->setCheckable(false);
        cansel->setAutoRepeat(true);
        cansel->setAutoExclusive(false);
        cansel->setAutoDefault(true);
        cansel->setFlat(true);
        Window->setCentralWidget(centralwidget);
        label->raise();
        winfirst->raise();
        winsecond->raise();
        winalgoritm1->raise();
        winreg->raise();
        winauth->raise();
        winthird->raise();
        winalgoritm2->raise();
        winreport->raise();
        cansel->raise();

        retranslateUi(Window);

        cansel->setDefault(true);


        QMetaObject::connectSlotsByName(Window);
    } // setupUi

    void retranslateUi(QMainWindow *Window)
    {
        Window->setWindowTitle(QCoreApplication::translate("Window", "Window", nullptr));
        Registretion->setText(QCoreApplication::translate("Window", "Registration", nullptr));
        title_NN->setText(QCoreApplication::translate("Window", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:600; color:#fafafa;\">Neural Network</span></p></body></html>", nullptr));
        Authorization->setText(QCoreApplication::translate("Window", "Authorization", nullptr));
        OK->setText(QCoreApplication::translate("Window", "OK", nullptr));
        title_NN_2->setText(QCoreApplication::translate("Window", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:600; color:#fafafa;\">Neural Network</span></p></body></html>", nullptr));
        Cancel->setText(QCoreApplication::translate("Window", "Cancel", nullptr));
        title_Pas->setText(QCoreApplication::translate("Window", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:600; color:#ffffff;\">Password</span></p></body></html>", nullptr));
        title_Log->setText(QCoreApplication::translate("Window", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:600; color:#ffffff;\">Login</span></p></body></html>", nullptr));
        auth_password->setInputMask(QString());
        auth_password->setText(QString());
        title_NN_3->setText(QCoreApplication::translate("Window", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:600; color:#fafafa;\">Neural Network</span></p></body></html>", nullptr));
        consent->setText(QCoreApplication::translate("Window", "\320\224\320\260\321\216 \321\201\320\276\320\263\320\273\320\260\321\201\320\270\320\265 \320\275\320\260 \320\276\320\261\321\200\320\260\320\261\320\276\321\202\320\272\321\203 \320\277\320\265\321\200\321\201\320\276\320\275\320\260\320\273\321\214\320\275\321\213\321\205 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        title_Email->setText(QCoreApplication::translate("Window", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600; color:#ffffff;\">Email</span></p></body></html>", nullptr));
        pass->setInputMask(QString());
        pass->setText(QString());
        title_Log_2->setText(QCoreApplication::translate("Window", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:600; color:#ffffff;\">Login</span></p></body></html>", nullptr));
        title_ConPas->setText(QCoreApplication::translate("Window", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:600; color:#ffffff;\">Password</span></p></body></html>", nullptr));
        conpass->setInputMask(QString());
        conpass->setText(QString());
        title_Pas_2->setText(QCoreApplication::translate("Window", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:600; color:#ffffff;\">Password</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("Window", "<html><head/><body><p><img src=\":/background.jpg\"/></p></body></html>", nullptr));
        report->setText(QCoreApplication::translate("Window", "Report", nullptr));
        education->setText(QCoreApplication::translate("Window", "Education", nullptr));
        title_NN_4->setText(QCoreApplication::translate("Window", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:600; color:#fafafa;\">Neural Network</span></p></body></html>", nullptr));
        title_inform_3->setText(QCoreApplication::translate("Window", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600; color:#ffffff;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\320\273\320\276\320\265\320\262</span></p></body></html>", nullptr));
        collayers->setInputMask(QString());
        collayers->setText(QString());
        colneurallayers->setInputMask(QString());
        colneurallayers->setText(QString());
        title_inform_1->setText(QCoreApplication::translate("Window", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600; color:#ffffff;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\275\320\265\320\271\321\200\320\276\320\275\320\276\320\262 \320\262 \320\272\320\260\320\266\320\264\320\276\320\274 \321\201\320\273\320\276\320\265 \321\207\320\265\321\200\320\265\320\267 &amp;</span></p></body></html>", nullptr));
        title_NN_5->setText(QCoreApplication::translate("Window", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:600; color:#fafafa;\">Neural Network</span></p></body></html>", nullptr));
        algoritm2->setText(QCoreApplication::translate("Window", "\320\220\320\273\320\263\320\276\321\200\320\270\321\202\320\274 2", nullptr));
        algoritm1->setText(QCoreApplication::translate("Window", "\320\220\320\273\320\263\320\276\321\200\320\270\321\202\320\274 1", nullptr));
        title_NN_6->setText(QCoreApplication::translate("Window", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:600; color:#fafafa;\">Neural Network</span></p></body></html>", nullptr));
        title_inform_6->setText(QCoreApplication::translate("Window", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600; color:#ffffff;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\275\320\265\320\271\321\200\320\276\320\275\320\276\320\272</span></p></body></html>", nullptr));
        colneurals->setInputMask(QString());
        colneurals->setText(QString());
        title_NN_7->setText(QCoreApplication::translate("Window", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:600; color:#fafafa;\">Neural Network</span></p></body></html>", nullptr));
        title_NN_8->setText(QCoreApplication::translate("Window", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:600; color:#fafafa;\">Neural Network</span></p></body></html>", nullptr));
        cansel->setText(QCoreApplication::translate("Window", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window: public Ui_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H

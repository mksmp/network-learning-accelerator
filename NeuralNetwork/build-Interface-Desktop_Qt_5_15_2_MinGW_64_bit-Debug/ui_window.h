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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window
{
public:
    QWidget *centralwidget;
    QFrame *winfirst;
    QWidget *layoutWidget;
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
    QWidget *layoutWidget_2;
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
    QWidget *layoutWidget_3;
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
    QWidget *layoutWidget_4;
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
    QFrame *wineducation;
    QWidget *layoutWidget_5;
    QGridLayout *gridLayout_5;
    QLineEdit *collayers;
    QLabel *title_inform_1;
    QLineEdit *colneurallayers;
    QLabel *title_inform_3;
    QLabel *title_NN_5;
    QSpacerItem *verticalSpacer_19;
    QLabel *title_inform_2;
    QSpacerItem *verticalSpacer_17;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_18;
    QDialogButtonBox *buttonBox_2;
    QSpacerItem *verticalSpacer_20;
    QLineEdit *colneural;

    void setupUi(QMainWindow *Window)
    {
        if (Window->objectName().isEmpty())
            Window->setObjectName(QString::fromUtf8("Window"));
        Window->resize(798, 501);
        centralwidget = new QWidget(Window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        winfirst = new QFrame(centralwidget);
        winfirst->setObjectName(QString::fromUtf8("winfirst"));
        winfirst->setGeometry(QRect(0, 0, 800, 531));
        winfirst->setFrameShape(QFrame::StyledPanel);
        winfirst->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(winfirst);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 801, 501));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Registretion = new QPushButton(layoutWidget);
        Registretion->setObjectName(QString::fromUtf8("Registretion"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Registretion->sizePolicy().hasHeightForWidth());
        Registretion->setSizePolicy(sizePolicy);
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

        title_NN = new QLabel(layoutWidget);
        title_NN->setObjectName(QString::fromUtf8("title_NN"));

        gridLayout->addWidget(title_NN, 1, 0, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        Authorization = new QPushButton(layoutWidget);
        Authorization->setObjectName(QString::fromUtf8("Authorization"));
        sizePolicy.setHeightForWidth(Authorization->sizePolicy().hasHeightForWidth());
        Authorization->setSizePolicy(sizePolicy);
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

        winauth = new QFrame(centralwidget);
        winauth->setObjectName(QString::fromUtf8("winauth"));
        winauth->setGeometry(QRect(0, 0, 800, 521));
        winauth->setFrameShape(QFrame::StyledPanel);
        winauth->setFrameShadow(QFrame::Raised);
        layoutWidget_2 = new QWidget(winauth);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 0, 801, 501));
        gridLayout_2 = new QGridLayout(layoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_5, 8, 0, 1, 7);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_6, 2, 0, 1, 7);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 3, 6, 5, 1);

        OK = new QPushButton(layoutWidget_2);
        OK->setObjectName(QString::fromUtf8("OK"));
        QFont font1;
        font1.setPointSize(14);
        OK->setFont(font1);

        gridLayout_2->addWidget(OK, 5, 4, 3, 1);

        title_NN_2 = new QLabel(layoutWidget_2);
        title_NN_2->setObjectName(QString::fromUtf8("title_NN_2"));

        gridLayout_2->addWidget(title_NN_2, 1, 0, 1, 7);

        Cancel = new QPushButton(layoutWidget_2);
        Cancel->setObjectName(QString::fromUtf8("Cancel"));
        Cancel->setFont(font1);

        gridLayout_2->addWidget(Cancel, 5, 5, 3, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_7, 9, 0, 1, 7);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_8, 0, 0, 1, 7);

        title_Pas = new QLabel(layoutWidget_2);
        title_Pas->setObjectName(QString::fromUtf8("title_Pas"));

        gridLayout_2->addWidget(title_Pas, 4, 1, 1, 2);

        title_Log = new QLabel(layoutWidget_2);
        title_Log->setObjectName(QString::fromUtf8("title_Log"));
        QFont font2;
        font2.setPointSize(24);
        title_Log->setFont(font2);

        gridLayout_2->addWidget(title_Log, 3, 1, 1, 2);

        verticalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(verticalSpacer_9, 3, 0, 5, 1);

        auth_password = new QLineEdit(layoutWidget_2);
        auth_password->setObjectName(QString::fromUtf8("auth_password"));
        QFont font3;
        font3.setPointSize(18);
        auth_password->setFont(font3);
        auth_password->setInputMethodHints(Qt::ImhNone);

        gridLayout_2->addWidget(auth_password, 4, 3, 1, 3);

        auth_login = new QLineEdit(layoutWidget_2);
        auth_login->setObjectName(QString::fromUtf8("auth_login"));
        auth_login->setFont(font3);

        gridLayout_2->addWidget(auth_login, 3, 3, 1, 3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 5, 3, 3, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 5, 1, 3, 2);

        winreg = new QFrame(centralwidget);
        winreg->setObjectName(QString::fromUtf8("winreg"));
        winreg->setGeometry(QRect(0, 0, 800, 511));
        winreg->setFrameShape(QFrame::StyledPanel);
        winreg->setFrameShadow(QFrame::Raised);
        layoutWidget_3 = new QWidget(winreg);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(0, 0, 801, 501));
        gridLayout_3 = new QGridLayout(layoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        buttonBox = new QDialogButtonBox(layoutWidget_3);
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

        title_NN_3 = new QLabel(layoutWidget_3);
        title_NN_3->setObjectName(QString::fromUtf8("title_NN_3"));

        gridLayout_3->addWidget(title_NN_3, 1, 1, 1, 2);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_11, 9, 1, 1, 2);

        consent = new QCheckBox(layoutWidget_3);
        consent->setObjectName(QString::fromUtf8("consent"));
        consent->setStyleSheet(QString::fromUtf8("font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(239, 239, 239);"));

        gridLayout_3->addWidget(consent, 7, 1, 1, 2);

        title_Email = new QLabel(layoutWidget_3);
        title_Email->setObjectName(QString::fromUtf8("title_Email"));
        title_Email->setFont(font2);

        gridLayout_3->addWidget(title_Email, 4, 1, 1, 1);

        email = new QLineEdit(layoutWidget_3);
        email->setObjectName(QString::fromUtf8("email"));
        email->setFont(font3);

        gridLayout_3->addWidget(email, 4, 2, 1, 1);

        pass = new QLineEdit(layoutWidget_3);
        pass->setObjectName(QString::fromUtf8("pass"));
        pass->setFont(font3);
        pass->setInputMethodHints(Qt::ImhNone);

        gridLayout_3->addWidget(pass, 5, 2, 1, 1);

        title_Log_2 = new QLabel(layoutWidget_3);
        title_Log_2->setObjectName(QString::fromUtf8("title_Log_2"));
        title_Log_2->setFont(font2);

        gridLayout_3->addWidget(title_Log_2, 3, 1, 1, 1);

        title_ConPas = new QLabel(layoutWidget_3);
        title_ConPas->setObjectName(QString::fromUtf8("title_ConPas"));

        gridLayout_3->addWidget(title_ConPas, 6, 1, 1, 1);

        login = new QLineEdit(layoutWidget_3);
        login->setObjectName(QString::fromUtf8("login"));
        login->setFont(font3);

        gridLayout_3->addWidget(login, 3, 2, 1, 1);

        conpass = new QLineEdit(layoutWidget_3);
        conpass->setObjectName(QString::fromUtf8("conpass"));
        conpass->setFont(font3);
        conpass->setInputMethodHints(Qt::ImhNone);

        gridLayout_3->addWidget(conpass, 6, 2, 1, 1);

        title_Pas_2 = new QLabel(layoutWidget_3);
        title_Pas_2->setObjectName(QString::fromUtf8("title_Pas_2"));

        gridLayout_3->addWidget(title_Pas_2, 5, 1, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_12, 2, 1, 1, 2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 0, 3, 10, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_7, 0, 0, 10, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 800, 500));
        winsecond = new QFrame(centralwidget);
        winsecond->setObjectName(QString::fromUtf8("winsecond"));
        winsecond->setGeometry(QRect(0, 0, 800, 541));
        winsecond->setFrameShape(QFrame::StyledPanel);
        winsecond->setFrameShadow(QFrame::Raised);
        layoutWidget_4 = new QWidget(winsecond);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(0, 0, 801, 501));
        gridLayout_4 = new QGridLayout(layoutWidget_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_8, 3, 2, 3, 1);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_15, 0, 0, 1, 3);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_13, 2, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_9, 3, 0, 3, 1);

        report = new QPushButton(layoutWidget_4);
        report->setObjectName(QString::fromUtf8("report"));
        sizePolicy.setHeightForWidth(report->sizePolicy().hasHeightForWidth());
        report->setSizePolicy(sizePolicy);
        report->setFont(font);
        report->setStyleSheet(QString::fromUtf8("color:white;"));
        report->setFlat(true);

        gridLayout_4->addWidget(report, 4, 1, 1, 1);

        education = new QPushButton(layoutWidget_4);
        education->setObjectName(QString::fromUtf8("education"));
        sizePolicy.setHeightForWidth(education->sizePolicy().hasHeightForWidth());
        education->setSizePolicy(sizePolicy);
        education->setFont(font);
        education->setStyleSheet(QString::fromUtf8("color:white;\n"
"box-shadow: 4px 4px 5px rgba(250, 50, 50, 0.4);\n"
""));
        education->setFlat(true);

        gridLayout_4->addWidget(education, 3, 1, 1, 1);

        verticalSpacer_14 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_14, 6, 1, 1, 1);

        title_NN_4 = new QLabel(layoutWidget_4);
        title_NN_4->setObjectName(QString::fromUtf8("title_NN_4"));

        gridLayout_4->addWidget(title_NN_4, 1, 0, 1, 3);

        verticalSpacer_16 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_16, 7, 0, 1, 3);

        wineducation = new QFrame(centralwidget);
        wineducation->setObjectName(QString::fromUtf8("wineducation"));
        wineducation->setGeometry(QRect(0, 0, 800, 551));
        wineducation->setFrameShape(QFrame::StyledPanel);
        wineducation->setFrameShadow(QFrame::Raised);
        layoutWidget_5 = new QWidget(wineducation);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(0, 0, 801, 501));
        gridLayout_5 = new QGridLayout(layoutWidget_5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        collayers = new QLineEdit(layoutWidget_5);
        collayers->setObjectName(QString::fromUtf8("collayers"));
        collayers->setFont(font3);
        collayers->setInputMethodHints(Qt::ImhNone);

        gridLayout_5->addWidget(collayers, 7, 1, 1, 1);

        title_inform_1 = new QLabel(layoutWidget_5);
        title_inform_1->setObjectName(QString::fromUtf8("title_inform_1"));

        gridLayout_5->addWidget(title_inform_1, 8, 1, 1, 1);

        colneurallayers = new QLineEdit(layoutWidget_5);
        colneurallayers->setObjectName(QString::fromUtf8("colneurallayers"));
        colneurallayers->setFont(font3);
        colneurallayers->setInputMethodHints(Qt::ImhNone);

        gridLayout_5->addWidget(colneurallayers, 9, 1, 1, 1);

        title_inform_3 = new QLabel(layoutWidget_5);
        title_inform_3->setObjectName(QString::fromUtf8("title_inform_3"));

        gridLayout_5->addWidget(title_inform_3, 6, 1, 1, 1);

        title_NN_5 = new QLabel(layoutWidget_5);
        title_NN_5->setObjectName(QString::fromUtf8("title_NN_5"));

        gridLayout_5->addWidget(title_NN_5, 1, 0, 1, 3);

        verticalSpacer_19 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_19, 0, 0, 1, 3);

        title_inform_2 = new QLabel(layoutWidget_5);
        title_inform_2->setObjectName(QString::fromUtf8("title_inform_2"));

        gridLayout_5->addWidget(title_inform_2, 3, 1, 2, 1);

        verticalSpacer_17 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_17, 11, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_10, 3, 0, 12, 1);

        verticalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(verticalSpacer_18, 3, 2, 13, 1);

        buttonBox_2 = new QDialogButtonBox(layoutWidget_5);
        buttonBox_2->setObjectName(QString::fromUtf8("buttonBox_2"));
        buttonBox_2->setEnabled(true);
        buttonBox_2->setFont(font4);
        buttonBox_2->setCursor(QCursor(Qt::ArrowCursor));
        buttonBox_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 14pt \"MS Shell Dlg 2\";"));
        buttonBox_2->setOrientation(Qt::Horizontal);
        buttonBox_2->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox_2->setCenterButtons(false);

        gridLayout_5->addWidget(buttonBox_2, 10, 1, 1, 1);

        verticalSpacer_20 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_20, 2, 0, 1, 3);

        colneural = new QLineEdit(layoutWidget_5);
        colneural->setObjectName(QString::fromUtf8("colneural"));
        colneural->setFont(font3);
        colneural->setInputMethodHints(Qt::ImhNone);

        gridLayout_5->addWidget(colneural, 5, 1, 1, 1);

        Window->setCentralWidget(centralwidget);
        label->raise();
        winfirst->raise();
        winsecond->raise();
        wineducation->raise();
        winreg->raise();
        winauth->raise();

        retranslateUi(Window);

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
        collayers->setInputMask(QString());
        collayers->setText(QString());
        title_inform_1->setText(QCoreApplication::translate("Window", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600; color:#ffffff;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\275\320\265\320\271\321\200\320\276\320\275\320\276\320\262 \320\262 \320\272\320\260\320\266\320\264\320\276\320\274 \321\201\320\273\320\276\320\265 \321\207\320\265\321\200\320\265\320\267 &amp;</span></p></body></html>", nullptr));
        colneurallayers->setInputMask(QString());
        colneurallayers->setText(QString());
        title_inform_3->setText(QCoreApplication::translate("Window", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600; color:#ffffff;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\320\273\320\276\320\265\320\262</span></p></body></html>", nullptr));
        title_NN_5->setText(QCoreApplication::translate("Window", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:600; color:#fafafa;\">Neural Network</span></p></body></html>", nullptr));
        title_inform_2->setText(QCoreApplication::translate("Window", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600; color:#ffffff;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\275\320\265\320\271\321\200\320\276\320\275\320\276\320\262 \320\262 1-\320\276\320\274 \321\201\320\273\320\276\320\265</span></p></body></html>", nullptr));
        colneural->setInputMask(QString());
        colneural->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Window: public Ui_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H

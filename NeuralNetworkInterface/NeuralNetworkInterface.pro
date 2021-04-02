QT       += core gui
QT       += network


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    auth.cpp \
    backendclient.cpp \
    education.cpp \
    main.cpp \
    mainwindow.cpp \
    mytcpclient.cpp \
    neuralnetwork.cpp \
    reg.cpp

HEADERS += \
    auth.h \
    backendclient.h \
    education.h \
    mainwindow.h \
    mytcpclient.h \
    neuralnetwork.h \
    reg.h

FORMS += \
    auth.ui \
    education.ui \
    mainwindow.ui \
    neuralnetwork.ui \
    reg.ui

TRANSLATIONS += \
    NeuralNetworkInterface_ru_RU.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc

DISTFILES += \
    classdiagram.qmodel


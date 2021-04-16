#ifndef DATABASE_H
#define DATABASE_H

#include <QSql>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDatabase>
#include <QFile>
#include <QDate>
#include <QDebug>



    QString authorize(std::string login, std::string password);
    QString registration(std::string login, std::string password, std::string email);
    QSqlDatabase openDataBase();

#endif // DATABASE_H

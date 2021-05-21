#include "database.h"



QSqlDatabase openDataBase()
{
    QSqlDatabase  db;
        db = QSqlDatabase::addDatabase("QPSQL");
        db.setHostName("localhost");
        db.setDatabaseName("neuralnetworcbd");
        db.setUserName("postgres");
        db.setPassword("123");
    if (db.open())
    {
        qDebug() << "db has opened";
        return db;
    }
    else
    {
        qDebug() << "db has not opened";
        return db;
    }
}



QString authorize(std::string login, std::string password)
{

    QSqlDatabase  db = openDataBase();
    QSqlQuery query = QSqlQuery(db);
    query.prepare("select * from users where login like :log and password like :password");
    query.bindValue(":log", QString::fromStdString(login));
    query.bindValue(":password", QString::fromStdString(password));
    query.exec();

    db.close();

    if ( query.size() == 1)
        return "auth&1";

    return "auth&0";
}

QString registration(std::string login, std::string password, std::string email)
{

    QSqlDatabase  db = openDataBase();
    QSqlQuery query = QSqlQuery(db);
    query.prepare("select * from users where login like :log");
    query.bindValue(":log", QString::fromStdString(login));
    query.exec();

    if (query.size()==0)
    {
        query.prepare("insert into users (login, password, email) values (?, ?, ?)");
        query.addBindValue(QString::fromStdString(login));
        query.addBindValue(QString::fromStdString(password));
        query.addBindValue(QString::fromStdString(email));
        query.exec();
        db.close();
        return "reg&1";
    }
    else
    {
        db.close();
        return "reg&0";
    }
}

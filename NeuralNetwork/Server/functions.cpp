#include "functions.h"


QString authorize(std::string login, std::string password)
{
    QString result;
    if (login =="admin" && password == "admin")
        result = "auth&1";
    else
        result = "auth&0";

    return result;
}

QString registration(std::string login, std::string pass, std::string email)
{
    QString resalt;
    return resalt;
}

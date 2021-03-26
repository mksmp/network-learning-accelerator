#include "functions.h"

QString authorize(std::string login, std::string password)
{
    QString result;
    if (login =="admin" && password == "admin")
        result = "admin";
    else
        result = "authorization error";

    return result;
}

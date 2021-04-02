#include "functions.h"

QString authorize(std::string login, std::string password)
{
    QString result;
    if (login =="admin" && password == "admin")
        result = "1";
    else
        result = "0";

    return result;
}

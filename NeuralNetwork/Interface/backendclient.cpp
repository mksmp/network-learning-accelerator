#include "backendclient.h"


bool check(std::string pass)
{
    if(pass.size() > 8)
    {
        for (int i = 0; i < pass.size(); i++)
        {

            if ( pass[i] < 48 or  pass[i] > 122)
            {
                return false;
            }
        }
        return true;
    }
    else
    {
        return false;
    }
}

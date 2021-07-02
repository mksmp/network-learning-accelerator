#include "backendclient.h"
#include "vector"

bool check(std::string pass)
{
    std::vector<std::string> truepass = {{"ABCDEFGHIKLMNOPQRSTVXYZ"}, {"abcdefghiklmnopqrstvxyz"}, {"1234567890"}, {"-_!@#$%^*<>?"}}; // разрешенные символы
    if(pass.size() >= 8)
        {
            for (int i = 0; i < pass.size(); i++)
            {

                if ( (truepass[0].find(pass[i]) != std::string::npos) or (truepass[1].find(pass[i]) != std::string::npos) or (truepass[2].find(pass[i]) != std::string::npos) or (truepass[3].find(pass[i]) != std::string::npos) ) { }
                else
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

bool check_of_length(std::string collayers, std::string colneurallayers)
{
    int layers = stoi(collayers);
    std::vector<int>neurons_on_layers;
    while(colneurallayers.size() > 0)
    {
        int pos = colneurallayers.find("&");
        neurons_on_layers.push_back(stoi(colneurallayers.substr(0,pos)));
        colneurallayers.erase(0,pos+1);
    }
    if (layers == neurons_on_layers.size())
    {
        for (int i = 0; i < layers; i++) // проверка на кол-во нейронов в слое, 2<layers<15
        {
            if (neurons_on_layers[i] < 2 or neurons_on_layers[i] > 15)
                return false;   
        }
        return true;
    }
    else return false;
}
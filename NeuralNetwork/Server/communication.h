#pragma once
#include <vector>
using namespace std;
class communication
{
public:
    communication();
    ~communication();
    void forWards(vector<vector<double>>& li, vector<vector<double>>& w, vector<vector<double>>& lo); // проход по слою
    void findError(vector<vector<double>>& li, vector<vector<double>>& w, vector<vector<double>>& lo); // нахождение ошибок слоя
    void backWards(vector<vector<double>>& li, vector<vector<double>>& w, vector<vector<double>>& lo, double k); // изменение весов
    void getTask(vector<vector<double>>& li, vector<vector<double>>& test_questionsdouble, vector<vector<double>>& test_answers, vector<vector<double>>& idl, int i); // новый пример для нейросети
    double fixOutError(vector<vector<double>>& idl, vector<vector<double>>& n3); // нахождение отклонений

    double GetRandomNumber(double minimum, double maximum); // рандом для fillW
    void fillW(vector<vector<double>>& w); // рандом весов
    void read(vector<vector<double>>& test_questionsdouble, vector<vector<double>>& test_answers, int i); // вести новые значения
    void write(vector<vector<double>>& n3); // вывод значения
};


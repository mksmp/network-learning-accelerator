#include <vector>
#include <iostream>
#include <random>

using std::vector;

class communication
{
public:
    communication();
    ~communication();
    void forWards(std::vector<std::vector<double>>& li, std::vector<std::vector<double>>& w, std::vector<std::vector<double>>& lo); // проход по слою
    void findError(std::vector<std::vector<double>>& li, std::vector<std::vector<double>>& w, std::vector<std::vector<double>>& lo); // нахождение ошибок слоя
    void backWards(std::vector<std::vector<double>>& li, std::vector<std::vector<double>>& w, std::vector<std::vector<double>>& lo, double k); // изменение весов
    void getTask(std::vector<std::vector<double>>& li, std::vector<std::vector<double>>& test_questionsdouble, std::vector<std::vector<double>>& test_answers, std::vector<std::vector<double>>& idl, int i); // новый пример для нейросети
    double fixOutError(std::vector<std::vector<double>>& idl, std::vector<std::vector<double>>& n3); // нахождение отклонений

    double GetRandomNumber(double minimum, double maximum); // рандом для fillW
    void fillW(std::vector<std::vector<double>>& w); // рандом весов
    void read(std::vector<std::vector<double>>& test_questionsdouble, std::vector<std::vector<double>>& test_answers, int i); // вести новые значения
    void write(std::vector<std::vector<double>>& n3); // вывод значения
};


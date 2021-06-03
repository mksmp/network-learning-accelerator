#include <vector>
#include <iostream>
#include <random>

using std::vector;

class communication
{
public:
    communication();
    ~communication();
    void forWards(std::vector<std::vector<double>>& li, std::vector<std::vector<double>>& w, std::vector<std::vector<double>>& lo); // ������ �� ����
    void findError(std::vector<std::vector<double>>& li, std::vector<std::vector<double>>& w, std::vector<std::vector<double>>& lo); // ���������� ������ ����
    void backWards(std::vector<std::vector<double>>& li, std::vector<std::vector<double>>& w, std::vector<std::vector<double>>& lo, double k); // ��������� �����
    void getTask(std::vector<std::vector<double>>& li, std::vector<std::vector<double>>& test_questionsdouble, std::vector<std::vector<double>>& test_answers, std::vector<std::vector<double>>& idl, int i); // ����� ������ ��� ���������
    double fixOutError(std::vector<std::vector<double>>& idl, std::vector<std::vector<double>>& n3); // ���������� ����������

    double GetRandomNumber(double minimum, double maximum); // ������ ��� fillW
    void fillW(std::vector<std::vector<double>>& w); // ������ �����
    void read(std::vector<std::vector<double>>& test_questionsdouble, std::vector<std::vector<double>>& test_answers, int i); // ����� ����� ��������
    void write(std::vector<std::vector<double>>& n3); // ����� ��������
};


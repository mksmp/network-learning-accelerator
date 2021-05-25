#pragma once
#include <vector>
using namespace std;
class communication
{
public:
    communication();
    ~communication();
    void forWards(vector<vector<double>>& li, vector<vector<double>>& w, vector<vector<double>>& lo); // ������ �� ����
    void findError(vector<vector<double>>& li, vector<vector<double>>& w, vector<vector<double>>& lo); // ���������� ������ ����
    void backWards(vector<vector<double>>& li, vector<vector<double>>& w, vector<vector<double>>& lo, double k); // ��������� �����
    void getTask(vector<vector<double>>& li, vector<vector<double>>& test_questionsdouble, vector<vector<double>>& test_answers, vector<vector<double>>& idl, int i); // ����� ������ ��� ���������
    double fixOutError(vector<vector<double>>& idl, vector<vector<double>>& n3); // ���������� ����������

    double GetRandomNumber(double minimum, double maximum); // ������ ��� fillW
    void fillW(vector<vector<double>>& w); // ������ �����
    void read(vector<vector<double>>& test_questionsdouble, vector<vector<double>>& test_answers, int i); // ����� ����� ��������
    void write(vector<vector<double>>& n3); // ����� ��������
};


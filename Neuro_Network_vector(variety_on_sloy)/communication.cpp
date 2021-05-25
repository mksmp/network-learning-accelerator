#include "communication.h"
#include <vector>
#include <iostream>
#include <random>
using namespace std;
    communication::communication() {}
    communication::~communication() {}
    void communication::forWards(vector<vector<double>>& li, vector<vector<double>>& w, vector<vector<double>>& lo)
    {
        int wt = w.size();
        int ht = w[0].size();

        for (int y = 0; y < ht; y++)
        {
            lo[y][0] = 0;
            for (int x = 0; x < wt; x++)
            {
                lo[y][0] = lo[y][0] + li[x][0] * w[x][y];
            }
            lo[y][0] = 1 / (1 + exp(-1 * lo[y][0]));
            //lo[y][0] = pow(tan(lo[y][0]), -1);
        }
    } // проход по слою
    void communication::findError(vector<vector<double>>& li, vector<vector<double>>& w, vector<vector<double>>& lo)
    {
        int wt = w.size() - 1;
        int ht = w[0].size();

        for (int x = 0; x < wt; x++)
        {
            li[x][1] = 0;
            for (int y = 0; y < ht; y++)
            {
                li[x][1] = li[x][1] + w[x][y] * lo[y][1];

            }
            li[x][1] = li[x][1] * li[x][0] * (1 - li[x][0]);
        }
    } // нахождение ошибок слоя
    void communication::backWards(vector<vector<double>>& li, vector<vector<double>>& w, vector<vector<double>>& lo, double k)
    {
        int wt = w.size();
        int ht = w[0].size();

        for (int y = 0; y < ht; y++)
        {
            for (int x = 0; x < wt; x++)
            {
                w[x][y] = w[x][y] + k * lo[y][1] * li[x][0] * lo[y][0] * (1 - lo[y][0]);
            }
        }
    } // изменение весов
    void communication::getTask(vector<vector<double>>& li, vector<vector<double>>& test_questionsdouble, vector<vector<double>>& test_answers, vector<vector<double>>& idl, int i)
    {
        for (int j = 0; j < test_questionsdouble[0].size(); j++)
        {
            li[j][0] = test_questionsdouble[i][j];
        }

        for (int j = 0; j < test_answers[0].size(); j++)
        {
            idl[j][0] = test_answers[i][j];
        }
    } // новый пример для нейросети
    double communication::fixOutError(vector<vector<double>>& idl, vector<vector<double>>& n3)
    {
        double i = 0;
        int wt = idl.size();
        for (int x = 0; x < wt; x++)
        {
            i += idl[x][0] - n3[x][0];
            n3[x][1] = i;
        }
        return i;
    } // нахождение отклонений

    double communication::GetRandomNumber(double minimum, double maximum)
    {
        static const double fraction = 1.0 / (static_cast <double> (RAND_MAX) + 0.5);
        return static_cast <double> (rand() * fraction * (maximum - minimum + 0.5) + minimum);
    }
    // рандом для fillW
    void communication::fillW(vector<vector<double>>& w)
    {
        int wt = w.size();
        int ht = w[0].size();

        for (int x = 0; x < wt; x++)
        {
            for (int y = 0; y < ht; y++)
            {
                w[x][y] = GetRandomNumber(-0.5, 0.5);
                if (w[x][y] > 1) w[x][y] = w[x][y] - 1;
                if (w[x][y] < -1) w[x][y] = w[x][y] + 1;
            }
        }
    } // рандом весов
    void communication::read(vector<vector<double>>& test_questionsdouble, vector<vector<double>>& test_answers, int i)
    {
        cout << "вопрос тест" << endl;
        for (int j = 1; j < test_questionsdouble[0].size() + 1; j++)
        {
            if (j % 3 == 0)
            {
                cout << test_questionsdouble[i][j - 1] << endl;
            }
            else
            {
                cout << test_questionsdouble[i][j - 1];
            }
        }
        cout << endl;
        cout << "ответ тест" << endl;
        for (int j = 0; j < test_answers[0].size(); j++)
        {
            cout << test_answers[i][j];
        }
    } // вести новые значения
    void communication::write(vector<vector<double>>& n3)
    {
        cout << "ответ реал" << endl;
        for (int j = 0; j < n3.size(); j++)
        {
            cout << n3[j][0] << " ";
        }
        cout << endl;
    } // вывод значения


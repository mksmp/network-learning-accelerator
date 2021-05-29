#pragma once
#include <vector>
using namespace std;
/*!
\brief Класс, который отвечает за работу нейронной сети.
*/
class communication
{
public:
    communication();
    ~communication();
/*!
\brief Функция:проход по слою.

\param vector<vector<double>> li - нулевой слой.
\param vector<vector<double>> w - вес первого слоя.
\param vector<vector<double>> lo - слои по середине.

Код функции выглядит следующим образом:
\code
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
    }
\endcode
*/
    void forWards(vector<vector<double>>& li, vector<vector<double>>& w, vector<vector<double>>& lo); // проход по слою
/*!
\brief Функция: нахождение ошибок слоя.

\param vector<vector<double>> li - слои по середине.
\param vector<vector<double>> w - вес последнего слоя.
\param vector<vector<double>> lo - последний слой.

Код функции выглядит следующим образом:
\code
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
    }
\endcode
*/
    void findError(vector<vector<double>>& li, vector<vector<double>>& w, vector<vector<double>>& lo); // нахождение ошибок слоя
/*!
\brief Функция: изменение весов.

\param vector<vector<double>> li - слои по середине.
\param vector<vector<double>> w - вес последнего слоя.
\param vector<vector<double>> lo - последний слой.
\param double k - коэффициент обучаемости.

Код функции выглядит следующим образом:
\code
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
        }
\endcode
*/
    void backWards(vector<vector<double>>& li, vector<vector<double>>& w, vector<vector<double>>& lo, double k); // изменение весов
/*!
\brief Функция: новый пример для нейросети.

\param vector<vector<double>> li - нулевой слой.
\param vector<vector<double>> test_questionsdouble - cлой для проверки.
\param vector<vector<double>> test_answers - ответ, который нужно получить.
\param vector<vector<double>> idl - то, что нужно получить.
\param int i.

Код функции выглядит следующим образом:
\code
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
    }
\endcode
*/
    void getTask(vector<vector<double>>& li, vector<vector<double>>& test_questionsdouble, vector<vector<double>>& test_answers, vector<vector<double>>& idl, int i); // новый пример для нейросети
/*!
\brief Функция: нахождение отклонений.

\param vector<vector<double>> idl - результат, который нужно получить.
\param vector<vector<double>> n3 - последний слой.

Код функции выглядит следующим образом:
\code
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
    }
\endcode
*/
    double fixOutError(vector<vector<double>>& idl, vector<vector<double>>& n3); // нахождение отклонений

    double GetRandomNumber(double minimum, double maximum); // рандом для fillW
/*!
\brief Функция: рандомное заполнение весов.

\param vector<vector<double>> w - вес первого слоя.

Код функции выглядит следующим образом:
\code
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
    }
\endcode
*/
    void fillW(vector<vector<double>>& w); // рандом весов
/*!
\brief Функция: ввод новых значений.

\param vector<vector<double>> test_questionsdouble - cлой для проверки.
\param vector<vector<double>> test_answers - ответ, который нужно получить.
\param int i.

Код функции выглядит следующим образом:
\code
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
    }
\endcode
*/
    void read(vector<vector<double>>& test_questionsdouble, vector<vector<double>>& test_answers, int i); // вести новые значения
/*!
\brief Функция: вывод значения.

\param vector<vector<double>> n3 - последний слой.

    Код функции выглядит следующим образом:
\code
    void communication::write(vector<vector<double>>& n3)
    {
        cout << "ответ реал" << endl;
        for (int j = 0; j < n3.size(); j++)
        {
            cout << n3[j][0] << " ";
        }
        cout << endl;
    }
\endcode
*/
    void write(vector<vector<double>>& n3); // вывод значения
};

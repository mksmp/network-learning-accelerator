#include "communication.h"
#include <iostream>
#include <vector>
using namespace std;

int algoritm(int n_start, int n_sloy)
{
    setlocale(LC_ALL, "Russian");
    int n_end = 2;


    vector < vector < double >> nstart(n_start, vector<double>(2)); // нулевой слой

    vector < vector < vector < double >>> n3D(n_sloy, vector<vector<double>>(5, vector<double>(2))); // слои по середине      

    vector < vector < double >> nend(n_end, vector<double>(2)); // последний слой

    vector < vector < double >> idl(2, vector<double>(1)); // нужно получить

    static double k = 0.5; // коэффициент обучаемости

    vector < vector < double >> w01(n_start, vector<double>(4)); // вес первого слоя
    vector < vector < vector < double >>> w3D(n_sloy - 1, vector<vector<double>>(5, vector<double>(4))); // веса слоев
    vector < vector < double >> wse(5, vector<double>(2)); // вес последнего слоя


    vector < vector < double >> test_questions =
    {
        { 1, 1, 1, 0, 0, 0, 0, 0, 0 },
        { 0, 1, 0, 0, 1, 0, 0, 1, 0 },
        { 1, 1, 1, 0, 0, 1, 0, 0, 1 },
        { 1, 0, 0, 1, 0, 0, 1, 1, 1 },
        { 0, 0, 0, 1, 1, 1, 0, 0, 0 },
        { 0, 0, 1, 0, 0, 1, 0, 0, 1 },
        { 1, 0, 0, 1, 1, 1, 1, 0, 0 },
        { 0, 1, 0, 0, 1, 0, 1, 1, 1 },
        { 0, 0, 0, 0, 0, 0, 1, 1, 1 },
        { 1, 1, 1, 1, 0, 0, 1, 0, 0 },
        { 0, 1, 0, 1, 1, 1, 0, 1, 0 },
        { 0, 0, 1, 0, 0, 1, 1, 1, 1 },
        { 1, 0, 0, 1, 0, 0, 1, 0, 0 },
        { 1, 1, 1, 0, 1, 0, 0, 1, 0 },
        { 0, 0, 1, 1, 1, 1, 0, 0, 1 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    };
    vector < vector < double >> test_answers =
    {
        { 1, 0 },
        { 0, 1 },
        { 1, 1 },
        { 1, 1 },
        { 1, 0 },
        { 0, 1 },
        { 1, 1 },
        { 1, 1 },
        { 1, 0 },
        { 1, 1 },
        { 1, 1 },
        { 1, 1 },
        { 0, 1 },
        { 1, 1 },
        { 1, 1 },
        { 0, 0 },
    };

    nstart[n_start - 1][0] = 1;
    for (int i = 0; i < n_sloy; i++)
        n3D[i][4][0] = 1;

    communication neuro; // объект класса
    // -----рандом весов-----
    neuro.fillW(w01);
    for (int i = 0; i < n_sloy - 1; i++)
        neuro.fillW(w3D[i]);
    neuro.fillW(wse);


    for (int i = 0; i < 100000; i++)
    {
        double x = INT_MAX;
        double y = INT_MAX;
        for (int j = 0; j < test_questions.size(); j++)
        {
            neuro.getTask(nstart, test_questions, test_answers, idl, j); // новый пример для нейросети

            neuro.forWards(nstart, w01, n3D[0]); // проход по слою
            for (int i = 0; i < n_sloy - 1; i++)
                neuro.forWards(n3D[i], w3D[i], n3D[i + 1]);
            neuro.forWards(n3D[n_sloy - 1], wse, nend);

            neuro.fixOutError(idl, nend); // нахождение отклонений
            neuro.findError(n3D[n_sloy - 1], wse, nend); // нахождение ошибок слоя
            for (int i = n_sloy - 1; i > 0; i--)
                neuro.findError(n3D[i - 1], w3D[i - 1], n3D[i]);

            neuro.backWards(n3D[n_sloy - 1], wse, nend, k); // изменение весов
            for (int i = n_sloy - 1; i > 0; i--)
                neuro.backWards(n3D[i - 1], w3D[i - 1], n3D[i], k);
            neuro.backWards(nstart, w01, n3D[0], k);
            if ((y - x) > 1)
            {
                k = 0.1;
            }
            else
            {
                if ((y - x) < 0.5)
                {
                    k = 0.5;
                }
                else
                {
                    k = 0.25;
                }
            }
            y = x;

        }

        
    }

    cout << "===========================================================" << endl;


        for (int i = 0; i < 15; i++)
        {
            neuro.getTask(nstart, test_questions, test_answers, idl, i);
            neuro.forWards(nstart, w01, n3D[0]);
            for (int i = 0; i < n_sloy - 1; i++)
                neuro.forWards(n3D[i], w3D[i], n3D[i + 1]);
            neuro.forWards(n3D[n_sloy - 1], wse, nend);

            neuro.read(test_questions, test_answers, i);
            cout << endl;
            neuro.write(nend);
            cout << "===========================================================" << endl;
        }
    return 0;
}

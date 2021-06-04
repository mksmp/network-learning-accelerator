#include "communication.h"
#include <iostream>
#include <vector>
//#include "communication.cpp"
using namespace std;



int alg1(int n_sloy, int kol_on_sloy,  int kol_on_weight)
{
    setlocale(LC_ALL, "Russian");

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

    vector < vector < double >> nstart(test_questions[0].size() + 1, vector<double>(2)); // нулевой слой

    vector < vector < vector < double >>> n3D(n_sloy, vector<vector<double>>(15, vector<double>(2))); // слои по середине
    for (int i = 0; i < n_sloy; i++) // изменение размера векторов с нейронами в соот-вии с введенными числами
    {
        cin >> kol_on_sloy;
        n3D[i].resize(kol_on_sloy);
    }

    //vector < vector < double >> n2(4, vector<double>(2)); // второй слой        

    vector < vector < double >> nend(test_answers[0].size(), vector<double>(2)); // последний слой

    vector < vector < double >> idl(2, vector<double>(1)); // нужно получить

    static double k = 0.5; // коэффициент обучаемости

    vector < vector < double >> w01(test_questions[0].size() + 1, vector<double>(n3D[0].size() - 1)); // вес первого слоя

    vector < vector < vector < double >>> w3D(n_sloy - 1, vector<vector<double>>(15, vector<double>(14))); // веса слоев
    for (int i = 0; i < n_sloy - 1; i++) // изменение размера векторов с весами в соот-вии с введенными числами для слоев с нейронами
    {
        w3D[i].resize(n3D[i].size());
        w3D[i][0].resize(n3D[i + 1].size() - 1);
    }
    
    vector < vector < double >> wse(n3D[n_sloy - 1].size(), vector<double>(2)); // вес последнего слоя

    nstart[test_questions[0].size()][0] = 1; // в случае обнуления запасные нейроны с неизменяемым весом
    int temp_neuro;
    for (int i = 0; i < n_sloy; i++)
    {
        temp_neuro = n3D[i].size();
        n3D[i][temp_neuro - 1][0] = 1;
    }
    communication neuro; // объект класса
    // -----рандом весов-----
    neuro.fillW(w01);
    for (int i = 0; i < n_sloy - 1; i++)
        neuro.fillW(w3D[i]);
    neuro.fillW(wse);


    for (int i = 0; i < 10000; i++)
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

            x = neuro.fixOutError(idl, nend); // нахождение отклонений
            neuro.findError(n3D[n_sloy - 1], wse, nend); // нахождение ошибок слоя
            for (int i = n_sloy - 1; i > 0; i--)
                neuro.findError(n3D[i - 1], w3D[i - 1], n3D[i]);

            neuro.backWards(n3D[n_sloy - 1], wse, nend, k); // изменение весов
            for (int i = n_sloy - 1; i > 0; i--)
                neuro.backWards(n3D[i - 1], w3D[i - 1], n3D[i], k);
            neuro.backWards(nstart, w01, n3D[0], k);
            if ((y - x) > 1) // увеличение или уменьшение коэффициента обучения, когда график уменьшает или увеличивает скорость соотв-но
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

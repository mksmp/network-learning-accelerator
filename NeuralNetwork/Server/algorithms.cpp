#include "algorithms.h"

vector<vector<std::string>> alg1(int n_sloy, vector<int> kol_on_sloy)
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
        int new_size = kol_on_sloy[i];
        n3D[i].resize(new_size);
    }

    //vector < vector < double >> n2(4, vector<double>(2)); // второй слой

    vector < vector < double >> nend(test_answers[0].size(), vector<double>(2)); // последний слой

    vector < vector < double >> idl(2, vector<double>(1)); // нужно получить

    vector < vector < std::string > > broadcast (16, vector < std::string > (3));

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

    std::cout << "===========================================================" << std::endl;

    for (int i = 0; i < 15; i++)
    {
        neuro.getTask(nstart, test_questions, test_answers, idl, i);
        neuro.forWards(nstart, w01, n3D[0]);
        for (int i = 0; i < n_sloy - 1; i++)
            neuro.forWards(n3D[i], w3D[i], n3D[i + 1]);
        neuro.forWards(n3D[n_sloy - 1], wse, nend);

        neuro.read(test_questions, test_answers, i);
        std::cout << std::endl;
        neuro.write(nend);
        broadcast[i][0] = std::to_string(i + 1);
        broadcast[i][1] = std::to_string(nend[0][0]);
        broadcast[i][2] = std::to_string(nend[1][0]);
        std::cout << std::endl << broadcast[i][0] << ". " << broadcast[i][1] << " " << broadcast[i][2] << std::endl;

        std::cout << "===========================================================" << std::endl;
    }
     return broadcast;
}


vector<vector<std::string>> alg2(int schet)
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

    std::cout << "Введите кол-во повторений нейронки для состязаний: ";

    vector < vector < std::string > > broadcast (16, vector < std::string > (3));
    vector < vector < double >> nend_result(test_answers.size(), vector<double>(4)); // результирующий слой со средним значением
    for (int c = 0; c < test_answers.size(); c++) nend_result[c][2] = INT_MAX;

    for (int temp = 0; temp < schet; temp++)
    {
        srand(time(NULL));
        int n_sloy = rand() % (3) + 2; // кол-во слоев
        std::cout << "Кол-во слоев: " << n_sloy << std::endl;
        int kol_on_sloy;
        std::cout << "Кол-во нейронов на каждом слое: ";


        vector < vector < double >> nstart(test_questions[0].size() + 1, vector<double>(2)); // нулевой слой

        vector < vector < vector < double >>> n3D(n_sloy, vector<vector<double>>(15, vector<double>(2))); // слои по середине
        for (int i = 0; i < n_sloy; i++) // изменение размера векторов с нейронами в соот-вии с введенными числами
        {
            kol_on_sloy = rand() % (8) + 3;
            n3D[i].resize(kol_on_sloy);
            std::cout << kol_on_sloy << " ";
        }

        std::cout << std::endl;


        vector < vector < double >> nend(test_answers[0].size(), vector<double>(2)); // последний слой

        vector < vector < double >> idl(2, vector<double>(1)); // нужно получить

        static double k = 0.5; // коэффициент обучаемости

        vector < vector < double >> w01(test_questions[0].size() + 1, vector<double>(n3D[0].size() - 1)); // вес первого слоя

        vector < vector < vector < double >>> w3D(n_sloy - 1, vector<vector<double>>(15, vector<double>(14))); // веса слоев
        for (int i = 0; i < n_sloy - 1; i++) // изменение размера векторов с весами в соот-вии с введенными числами для слоев с нейронами
        {
            w3D[i].resize(n3D[i].size());
            for (int j = 0; j < n3D[i].size(); j++)
                w3D[i][j].resize(n3D[i + 1].size() - 1);
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

        double x; // нахождение ошибок в слое
        double y;
        for (int i = 0; i < 10000; i++)
        {
            x = INT_MAX;
            y = INT_MAX;
            for (int j = 0; j < test_questions.size(); j++)
            {
                neuro.getTask(nstart, test_questions, test_answers, idl, j); // новый пример для нейросети

                neuro.forWards(nstart, w01, n3D[0]); // проход по слою
                for (int i = 0; i < n_sloy - 1; i++)
                    neuro.forWards(n3D[i], w3D[i], n3D[i + 1]);
                neuro.forWards(n3D[n_sloy - 1], wse, nend);

                x = abs(neuro.fixOutError(idl, nend)); // нахождение отклонений
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


        for(int i = 0; i < test_questions.size(); i++)
        {
            if (x <= nend_result[0][2])
            {
                neuro.getTask(nstart, test_questions, test_answers, idl, i);
                neuro.forWards(nstart, w01, n3D[0]);
                for (int i = 0; i < n_sloy - 1; i++)
                    neuro.forWards(n3D[i], w3D[i], n3D[i + 1]);
                neuro.forWards(n3D[n_sloy - 1], wse, nend);

                nend_result[i][0] = nend[0][0];
                nend_result[i][1] = nend[1][0];
                nend_result[i][2] = x;
                nend_result[i][3] = temp + 1;
            }
        }
    }
     std::cout << "Лушая нейронная сеть под номером: " << nend_result[0][3] <<  std::endl << "С ошибкой: " << nend_result[0][2] <<  std::endl;
    for (int i = 0; i < 15; i++)
    {
         std::cout << "===========================================================" <<  std::endl;
        communication neuro_result;
        neuro_result.read(test_questions, test_answers, i);
         std::cout <<  std::endl;
         std::cout << "ответ реал" <<  std::endl;
         broadcast[i][0] = std::to_string(i + 1);
         broadcast[i][1] = std::to_string(nend_result[i][0]);
         broadcast[i][2] = std::to_string(nend_result[i][1]);
         std::cout << nend_result[i][0] << " " << nend_result[i][1] <<  std::endl;
         std::cout << "===========================================================" <<  std::endl;
    }
        return broadcast;

}

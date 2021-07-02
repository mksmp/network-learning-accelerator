#include <QtTest>
#include "../Server/communication.cpp"
// add necessary includes here

class TestsServer : public QObject
{
    Q_OBJECT

public:
    TestsServer();
    ~TestsServer();

private slots:
    void test_function_getTask();
    void test_function_forWards();

};

TestsServer::TestsServer() { }

TestsServer::~TestsServer() { }

void TestsServer::test_function_getTask()
{

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
    vector < vector < double >> li(test_questions[0].size() + 1, vector<double>(2));
    vector < vector < double >> idl(2, vector<double>(1));
    int i = 5;
    communication test;
    test.getTask(li, test_questions, test_answers, idl, i);

    vector < vector < double >> li_result = { {0, 0}, {0, 0}, {1, 0}, {0, 0}, {0, 0 }, {1, 0}, {0, 0}, {0, 0}, {1, 0}, {0, 0} };
    vector < vector < double >> idl_result = { {0}, {1} };
    QVERIFY(li == li_result and idl == idl_result);
}

void TestsServer::test_function_forWards()
{
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
     int n_sloy = 3;
     vector <  int > kol_on_sloy = {{5 , 6, 7}};
     vector < vector < double >> li(test_questions[0].size() + 1, vector<double>(2));
     vector < vector < vector < double >>> lo(n_sloy, vector<vector<double>>(15, vector<double>(2)));
     for (int i = 0; i < n_sloy; i++) // изменение размера векторов с нейронами в соот-вии с введенными числами
     {
         lo[i].resize(kol_on_sloy[i]);
     }
     vector < vector < double >> w(test_questions[0].size() + 1, vector<double>(lo[0].size() - 1));
     communication test;
     test.forWards(li, w, lo[0]);

     vector < vector < vector < double >>> lo_result = { {{0.5, 0}, {0.5, 0}, {0.5, 0}, {0.5, 0}, {0, 0 }},{ {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}}, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0 }} };
     QVERIFY(lo == lo_result);


}

QTEST_APPLESS_MAIN(TestsServer)

#include "tst_testsserver.moc"

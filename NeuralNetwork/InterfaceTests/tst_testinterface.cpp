#include <QtTest>
#include "../Interface/backendclient.cpp"
// add necessary includes here


class TestInterface : public QObject
{
    Q_OBJECT

public:
    TestInterface();
    ~TestInterface();

private slots:

    void test_function_check(); //на входе пароль на выходе тру или фолс, проверяет наличие запрещенных символов
    void test_function_check_of_length();

};

TestInterface::TestInterface(){ }

TestInterface::~TestInterface(){ }

void TestInterface::test_function_check()
{
    bool result_true = true;
    bool result_false = false;
    std::string pass_true = "12345*#Nastia";
    std::string pass_false = "0987??&&&";

    QVERIFY(check(pass_true) == result_true and check(pass_false) == result_false);
}

void TestInterface::test_function_check_of_length()
{
    srand(time(NULL));
    int rand_to_str;
    int rands = rand() % 9;
    std::string collayers = std::to_string(rands);
    std::string colneurallayers;
    for (int i = 0; i < rands; i++)
    {
        srand(time(NULL));
        rand_to_str = rand()%(14) + 2;
        colneurallayers += std::to_string(rand_to_str) + "&";
    }
    bool result = true;
    QVERIFY(check_of_length(collayers, colneurallayers) == result);
}

QTEST_APPLESS_MAIN(TestInterface)

#include "tst_testinterface.moc"

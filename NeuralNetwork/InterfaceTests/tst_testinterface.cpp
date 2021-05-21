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


};

TestInterface::TestInterface()
{

}

TestInterface::~TestInterface()
{

}

void TestInterface::test_function_check()
{
    //add
    bool resalt = true;
    std::string pass = "";
    while(pass.size() <= 8)
    {
        srand(time(NULL));
        int r = rand();
        if (r >= 48 and r <= 122) pass +=r;
    }
    QVERIFY(check(pass) == resalt);
}

QTEST_APPLESS_MAIN(TestInterface)

#include "tst_testinterface.moc"

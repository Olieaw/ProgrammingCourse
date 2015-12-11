#include <QString>
#include <QtTest>
#include "investition.h"
#include "issituated.h"


/// Тесты нужно реализовать обязательно
class TestTest : public QObject
{
    Q_OBJECT

public:
    TestTest();

private Q_SLOTS:
    void test_investition();
    void test_issituated();
};

TestTest::TestTest()
{
}

void TestTest::test_investition()
{
    float sum, persent, test;
    sum = 1000;
    persent = 100;
    test = investition_sum(sum, persent);
    QCOMPARE(test,32000.0);
    QVERIFY2(true, "Failure");
}

void TestTest::test_issituated()
{
    int test2;
    struct poligon plot;
    struct poligon house1;
    struct poligon house2;
    plot.length = 20;
    plot.width = 10;
    house1.length = 10;
    house1.width = 10;
    house2.length = 10;
    house2.width = 10;
    test2 = calculation(plot, house1, house2);
    QCOMPARE(test2,1);
}

QTEST_APPLESS_MAIN(TestTest)

#include "tst_testtest.moc"

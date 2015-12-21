#include <QString>
#include <QtTest>
#include "investition.h"
#include "issituated.h"
#include "matrix.h"


/// Тесты нужно реализовать обязательно
class TestTest : public QObject
{
    Q_OBJECT

public:
    TestTest();

private Q_SLOTS:
    void test_investition();
    void test_issituated();
    void test_matrix();
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

void TestTest::test_matrix()
{    
    /*int result, a = 2;
    int matrix1[2][2] = {14, 36, 25, 85};
    int matrix2[2][2] = {14, 25, 36, 85};
    result = determination_of_the_size();

    QCOMPARE(result,1);
    QVERIFY2(true, "Failure");*/
}

QTEST_APPLESS_MAIN(TestTest)

#include "tst_testtest.moc"

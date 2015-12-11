#include <QString>
#include <QtTest>
#include "investition.h"
#include "issituated.h"

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
    int length_plot, width_plot, length_house1, width_house1, length_house2, width_house2, test2
            ;
    length_plot = 20;
    width_plot = 10;
    length_house1 = 10;
    width_house1 = 10;
    length_house2 = 10;
    width_house2 = 10;
    test2 = calculation(length_plot, width_plot, length_house1, width_house1, length_house2, width_house2);
    QCOMPARE(test2,1);
}

QTEST_APPLESS_MAIN(TestTest)

#include "tst_testtest.moc"

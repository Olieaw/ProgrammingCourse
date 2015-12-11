#include <QString>
#include <QtTest>

class Cpp_testTest : public QObject
{
    Q_OBJECT

public:
    Cpp_testTest();

private Q_SLOTS:
    void testCase1();
};

Cpp_testTest::Cpp_testTest()
{
}

void Cpp_testTest::testCase1()
{
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(Cpp_testTest)

#include "tst_cpp_testtest.moc"

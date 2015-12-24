#include <QString>
#include <QtTest>
#include "investition_logic.h"
#include "issituated_logic.h"
#include "matrix_logic.h"


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
    void test_string();
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

void TestTest::test_string()
{
    char *keyword;
    char *write_string;

    write_string = (char*)malloc(1000*sizeof(char));
    keyword = (char*)malloc(100*sizeof(char));

    FILE *open_file = fopen("string_book.txt" , "r");   //Название книги вводить в столбик
    if (open_file != NULL)
    {
        keyword = "O";
        fclose(open_file);
    }

    free(write_string);
    free(keyword);
}

void TestTest::test_matrix()
{
    int **m1, **m2;
    int i, a = 2;
    m1 = (int**)malloc(a*sizeof(int*));
    for(i = 0; i < a; i++)
    {
        m1[i] = (int*)malloc(a*sizeof(int));
    }

    m2 = (int**)malloc(a*sizeof(int*));
    for(i = 0; i < a; i++)
    {
        m2[i] = (int*)malloc(a*sizeof(int));
    }
    m1[0][0] = 1; m1[0][1] = 2;
    m1[1][0] = 3; m1[1][1] = 4;

    m2[0][0] = 1; m2[0][1] = 3;
    m2[1][0] = 2; m2[1][1] = 4;

    QCOMPARE(are_matrixes_transposable(m1, m2, 2), 1);

    for(i = 0; i < a; i++)
    {
        free(m1[i]);
        free(m2[i]);
    }
    free(m1);
    free(m2);
}

QTEST_APPLESS_MAIN(TestTest)

#include "tst_testtest.moc"

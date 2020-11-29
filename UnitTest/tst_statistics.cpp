#include <QtTest>

// add necessary includes here

class tst_statistics : public QObject
{
    Q_OBJECT

public:
    tst_statistics();
    ~tst_statistics();

private slots:
    void test_case1();

};

tst_statistics::tst_statistics()
{

}

tst_statistics::~tst_statistics()
{

}

void tst_statistics::test_case1()
{

}

QTEST_APPLESS_MAIN(tst_statistics)

#include "tst_tst_statistics.moc"

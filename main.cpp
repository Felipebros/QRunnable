#include <QCoreApplication>
#include <QThreadPool>
#include "tasknumeros.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    TaskNumeros *x = new TaskNumeros('x');
    TaskNumeros *y = new TaskNumeros('y');
    QThreadPool::globalInstance()->start(x, QThread::LowestPriority);
    QThreadPool::globalInstance()->start(y, QThread::HighestPriority);
    return a.exec();
}

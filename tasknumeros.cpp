#include "tasknumeros.h"
#include <QDebug>

TaskNumeros::TaskNumeros(char id)
{
    mId = id;
}

TaskNumeros::~TaskNumeros()
{
    qDebug() << mId << " ha terminado";
}

void TaskNumeros::run()
{
    for (int i = 0; i < 1000; ++i) {
        qDebug() << mId << ":" << i;
    }
}

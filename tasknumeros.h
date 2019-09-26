#ifndef TASKNUMEROS_H
#define TASKNUMEROS_H

#include <QRunnable>

class TaskNumeros : public QRunnable
{
public:
    TaskNumeros(char id);
    ~TaskNumeros();
protected:
    void run();
private:
    char mId;
};

#endif // TASKNUMEROS_H

#ifndef MOSHTARI_H
#define MOSHTARI_H
#include<QString>
#include"stack.h"
class moshtari
{
public:
    moshtari();
    stack sabad;
    QString name;
    bool flag;//flag=1>> man
    int turn;
};

#endif // MOSHTARI_H

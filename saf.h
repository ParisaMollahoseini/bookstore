#ifndef SAF_H
#define SAF_H
#include "moshtari.h"
struct safnode
{
    moshtari* clientinsaf;
    safnode *next;
};
class saf
{
public:
    saf();
    safnode* front,*rear;
    void pushback(moshtari);
    moshtari popfromsaf();
};

#endif // SAF_H

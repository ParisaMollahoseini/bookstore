#ifndef STACK_H
#define STACK_H
#include"booklist.h"
#include<QVector>
struct node
{
    Booknode *book;
    node *pre;
};
class stack
{
public:
    stack();
    void push_back(Booknode);
    Booknode popback();
    int top=-1;
    node*lastbook=NULL;
};

#endif // STACK_H

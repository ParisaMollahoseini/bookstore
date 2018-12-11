#include "stack.h"
#include<QDebug>
stack::stack()
{

}

void stack::push_back(Booknode node1)
{
top++;
if(lastbook==NULL)
{
    qDebug()<<"if..........\n";
    lastbook=new node;
    lastbook->book=new Booknode;
    lastbook->book->name=node1.name;
    lastbook->book->cost=node1.cost;
    lastbook->book->year=node1.year;
    lastbook->book->writer=node1.writer;
    qDebug()<<"if.2222.........\n";
    lastbook->pre=NULL;
    return ;
}
else
{
    qDebug()<<"else..........\n";
     node*it=new node;
     it->book=new Booknode;
     it->book->name=node1.name;
     it->book->cost=node1.cost;
     it->book->year=node1.year;
     it->book->writer=node1.writer;

     it->pre=lastbook;
     lastbook=it;
     return ;
}
}

Booknode stack::popback()
{
    if(lastbook==NULL)
    {
        Booknode book;
        book.name="";
        return book;
    }
    else

    {
        Booknode book;
        book.name=lastbook->book->name;
        book.year=lastbook->book->year;
        book.writer=lastbook->book->writer;
        book.cost=lastbook->book->cost;
        lastbook=lastbook->pre;
        return book;
    }

}

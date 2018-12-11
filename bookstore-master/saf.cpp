#include "saf.h"
#include<QDebug>
saf::saf()
{
front=NULL;
rear=NULL;
}

void saf::pushback(moshtari mosht)
{
if(rear==NULL)
{
    rear=new safnode;
    rear->clientinsaf=new moshtari;
    rear->clientinsaf->flag=mosht.flag;
    rear->clientinsaf->name=mosht.name;
    rear->clientinsaf->sabad=mosht.sabad;
    rear->clientinsaf->turn=mosht.turn;
    rear->next=NULL;

    front=new safnode;
    front->next=rear;
    //front->clientinsaf=NULL;
//    front->clientinsaf=new moshtari;
//    front->clientinsaf->flag=mosht.flag;
//    front->clientinsaf->name=mosht.name;
//    front->clientinsaf->sabad=mosht.sabad;
//    //qDebug()<<"front..."<<front->clientinsaf->sabad.popback().name;
//    front->clientinsaf->turn=mosht.turn;
//    front->next=NULL;
}
else
{
    safnode*it=new safnode;
    it->clientinsaf=new moshtari;
    it->clientinsaf->flag=mosht.flag;
    it->clientinsaf->name=mosht.name;
    it->clientinsaf->sabad=mosht.sabad;
    it->clientinsaf->turn=mosht.turn;
    it->next=NULL;
    rear->next=it;
    rear=rear->next;
}

}

moshtari saf::popfromsaf()
{
    moshtari m;
    if(front==rear)
    {
        m.name="";
        return m;
    }
    else
    {
    safnode *frontdelete=new safnode;
    frontdelete->clientinsaf=new moshtari;
    frontdelete->clientinsaf->flag=front->next->clientinsaf->flag;
    frontdelete->clientinsaf->name=front->next->clientinsaf->name;
    frontdelete->clientinsaf->sabad=front->next->clientinsaf->sabad;
    frontdelete->clientinsaf->turn=front->next->clientinsaf->turn;

    front=front->next;
    frontdelete->next=NULL;

    moshtari temp;
    temp.name=frontdelete->clientinsaf->name;
    temp.flag=frontdelete->clientinsaf->flag;
    temp.sabad=frontdelete->clientinsaf->sabad;
    temp.turn=frontdelete->clientinsaf->turn;

    delete frontdelete;
    return temp;
    }
}

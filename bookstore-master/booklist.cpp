#include "booklist.h"
#include<QString>
#include<QDebug>
#include<QMessageBox>
booklist::~booklist()
{
    Booknode*l=first;
    qDebug()<<l->name<<" 3333"<<l->year<<endl;
    l=l->next;
    for(;l!=first;l=l->next)
    {
     qDebug()<<l->name<<" 222"<<l->year<<endl;
    }

}

booklist::booklist(){
     n=0;
   // qDebug()<<"list is created";

}
void booklist::Add(QString name1, QString writer1, QString year1, int cost1){
//    qDebug()<<endl<<n<<endl;

    qDebug()<<"name: "<<name1<<"writer: "<<writer1<<"year :"<<year1<<"cost : "<<cost1<<endl;
    if(first==NULL)
    {
        Booknode *bnode=new Booknode;
        bnode->name=name1;
        bnode->writer=writer1;
        bnode->year=year1;
        bnode->cost=cost1;
        bnode->next=NULL;
        first=bnode;
        first->next=first;
        qDebug()<<"list is created\n"<<first->name;
        n++;
        qDebug()<<endl<<n<<endl;
    }
    else
    {
        Booknode *bnode=new Booknode;
        bnode->name=name1;
        bnode->writer=writer1;
        bnode->year=year1;
        bnode->cost=cost1;
        n++;
        qDebug()<<endl<<n<<endl;

        Booknode*l=first;
        if(l->name>name1)
        {
            for(;l->next!=first;l=l->next);
            bnode->next=first;
            l->next=bnode;
            first=bnode;//???
            Booknode*l2=first;
            qDebug()<<l2->name<<" "<<l2->year<<endl;
            l2=l2->next;
            for(;l2!=first;l2=l2->next)
                qDebug()<<l2->name<<" 222"<<l2->year<<endl;

            return ;
        }
        else if(l->name==name1)
        {

            if(l->year.toInt()>year1.toInt())
            {
                for(;l->next!=first;l=l->next);
                bnode->next=first;
                l->next=bnode;
                first=bnode;//??
                return ;

            }
            else
            {
                bnode->next=first->next;
                first->next=bnode;
                return ;
            }
        }
        l=first;
        for(;l->next!=first;l=l->next)
        {
           // flag=true;
            if(l->next->name>name1)
            {
                bnode->next=l->next;
                l->next=bnode;
                return ;
            }
            else if(l->next->name==name1)
            {
                if(l->next->year.toInt()>year1.toInt())
                {
                    bnode->next=l->next;
                    l->next=bnode;
                    return ;

                }
                else
                {
                    bnode->next=l->next->next;
                    l->next->next=bnode;
                    return ;

                }
            }
        }//end of for
        bnode->next=l->next;
        l->next=bnode;
        //
        Booknode*l2=first;
        qDebug()<<l2->name<<" "<<l2->year<<endl;
        l2=l2->next;
        for(;l2!=first;l2=l2->next)
        {
         qDebug()<<l2->name<<" 222"<<l2->year<<endl;
        }
        //
        //baade neveshtan pak kone mohtaviate boxa ro ????????????????????????????????
        return;
    }

}
void booklist::Delete(QString name1, QString writer1, QString year1){
    Booknode *counter=new Booknode();
    counter=first;
    n--;
    if(counter->name==name1 && counter->writer==writer1 && counter->year==year1)
    {
        if(first->next==first){
            first=NULL;
            return ;
        }
        for(;counter->next!=first;counter=counter->next);
        counter->next=first->next;
        first=first->next;
        return;
    }

    for(counter=first;counter->next!=first;counter=counter->next){
        if(counter->next->name==name1 && counter->next->writer==writer1 && counter->next->year==year1){
            counter->next=counter->next->next;
            return;
        }
    }

        qDebug()<<"Not find\n";
}

Booknode booklist::searchbook(QString name)
{
    if(first!=NULL)
    {
        Booknode*it=first;
        if(first->name==name)
        {
            Booknode book=*first;
            qDebug()<<"before delete...if\n";
            this->Delete(first->name,first->writer,first->year);
            qDebug()<<"after delete...if\n";
            return book;
        }
        else
        {
            it=it->next;
            for(;it!=first;it=it->next)
            {
                if(it->name==name)
                {
                    Booknode book=*it;
                    qDebug()<<"before delete...else\n";
                    this->Delete(it->name,it->writer,it->year);
                   qDebug()<<"after delete...else\n";
                    return book;
                }
            }
        }
    }
    Booknode it;
    it.name="";
    return it;
}
Booknode::Booknode(QListWidget *view):QListWidgetItem(view)
{

}

Booknode::Booknode()
{

}

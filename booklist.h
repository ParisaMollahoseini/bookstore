#ifndef BOOKLIST_H
#define BOOKLIST_H
#include    <QFile>
#include<QTextStream>
#include<iostream>
#include<QListWidgetItem>
#include<QListWidget>
#include<QString>
using namespace std;
class Booknode:public QListWidgetItem
{

public:
    Booknode(QListWidget* view);
    Booknode();
    int cost;
    QString name,writer,year;
    Booknode* next;

};
class booklist
{
public:
    ~booklist();
    booklist();
    void Add(QString name1,QString writer1,QString year1,int cost1);
    void Delete(QString name1,QString writer1,QString year1);
    Booknode searchbook(QString name);
    Booknode *first=NULL;
};

#endif // BOOKLIST_H
/*QListWidgetItem item(itm1->name); item.setData (Qt::UserRole, itm1); an add that to the QListWidget.

slot: void itemActivated ( QListWidgetItem * item ), and get your user data from the item.*/

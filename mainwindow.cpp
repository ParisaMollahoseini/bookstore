#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
#include<QMessageBox>
#include<QListWidgetItem>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),client(nullptr),add_book(nullptr)
{
//    womanqueue=new saf;
//    manqueue=new saf;

    ui->setupUi(this);
    show();
    //
    booklistname=new booklist;
    QFile file("book.txt");

    file.open(QIODevice::ReadOnly);
    QTextStream in(&file);
    in.seek(0);
    while (!in.atEnd())
    {
    QString Name,Writer,Year,Cost;
   in>>Name>>Writer>>Year>>Cost;
   if(Name!=NULL)
    booklistname->Add(Name,Writer,Year,Cost.toInt());
    }
    file.close();
    connect(ui->pushButton,&QPushButton::clicked,this,&MainWindow::onpushButton_clicked);
    connect(ui->addbook,&QPushButton::clicked,this,&MainWindow::onaddbook_clicked);
    connect(ui->factor,&QPushButton::clicked,this,&MainWindow::onfactor_clicked);
    //
}
//static
int MainWindow::man=1;
int MainWindow::woman=1;
bool MainWindow::manorwoman=true;//true >> man
//static
MainWindow::~MainWindow()
{
    QFile::remove("book.txt");
    if(booklistname->first!=NULL)
    {
        QFile file("book.txt");
        Booknode*it=booklistname->first;
        QTextStream out(&file);
        file.open(QIODevice::WriteOnly);
        out.seek(0);
        qDebug()<<"1  oomaaddd\n";
        out<<it->name<<" "<<it->writer<<" "<<it->year<<" "<<it->cost<<endl;
        it=it->next;
        for(;it!=booklistname->first;it=it->next)
        {
            qDebug()<<"2  oomaaddd\n";
            out<<it->name<<" "<<it->writer<<" "<<it->year<<" "<<it->cost<<"\n";

        }
        file.close();
    }

    delete booklistname;
    delete ui;
    delete client;
    delete add_book;
}

void MainWindow::onpushButton_clicked()
{
    qDebug()<<"omad mosht\n";
    ////////////////////////////////////////
//    if (client != nullptr)
//    {
//        delete client;
//        client = nullptr;
//    }
//    if (ui != nullptr)
//    {
//        delete ui;
//        ui = nullptr;
//    }
//    if (add_book != nullptr)
//    {
//        delete add_book;
//        add_book = nullptr;
//    }
//////////////////////////////////////////////////////////////////
    client=new Ui::client;
    //
    client->setupUi(this);
    client->buy->hide();
    client->chosel->hide();
    client->listwidgetofBooks->hide();
    client->search->hide();
    client->bookname->hide();
    client->label->hide();
  //  show();
    mosht=new moshtari;
    //


        connect(client->search,&QPushButton::clicked,this,&MainWindow::onsearch_clicked);
        connect(client->buy,&QPushButton::clicked,this,&MainWindow::onbuy_clicked);
        connect(client->back_client,&QPushButton::clicked,this,&MainWindow::onback_client_clicked);
        connect(client->ok,&QPushButton::clicked,this,&MainWindow::onok_clicked);


    //
    //connect(client->back_client,&QPushButton::clicked,this,&MainWindow::on_back_client_clicked);
   // connect(client->ok,&QPushButton::clicked,this,&MainWindow::on_ok_clicked);

}
void MainWindow::onaddbook_clicked()
{
//    if (client != nullptr)
//    {
//        delete client;
//        client = nullptr;
//    }
//    if (ui != nullptr)
//    {
//        delete ui;
//        ui = nullptr;
//    }
//    if (add_book != nullptr)
//    {
//        delete add_book;
//        add_book = nullptr;
//    }
    add_book=new Ui::addBook;
    add_book->setupUi(this);
    connect(add_book->esafe,&QPushButton::clicked,this,&MainWindow::onesafe_clicked);
    connect(add_book->back_addbook,&QPushButton::clicked,this,&MainWindow::onback_addbook_clicked);
    show();
}
void MainWindow::onesafe_clicked()
{

booklistname->Add(add_book->name->text(),add_book->writer->text(),add_book->year->text(),add_book->cost->text().toInt());

}
void MainWindow::onsearch_clicked()
{
Booknode book1=booklistname->searchbook(client->bookname->text());
if(book1.name!=NULL)
{
    Booknode *bookfind = new Booknode(client->listwidgetofBooks);
      qDebug()<<".........found\n";
      mosht->sabad.push_back(book1);
      qDebug()<<".........found\n";
    client->listwidgetofBooks->addItem(bookfind);
    bookfind->setText("Name :"+book1.name+" Year : "+book1.year);
    client->bookname->clear();

    return;
}
else
{
    QMessageBox message;
    message.setText("We don't have this book!!!");
    message.exec();

    if(message.close())
    client->bookname->clear();
    qDebug()<<"......... not found\n";

    return ;
}
}

void MainWindow::onbuy_clicked()
{

    if(mosht->sabad.top==-1)
    {
        QMessageBox message;
        message.setText("NO Book Is Chosen...."+QString::number(mosht->turn));
        message.exec();
        return ;
    }
    if(mosht->flag==true)
       {
        mosht->turn=man++;
       }
     else
    mosht->turn=woman++;
    if(mosht->flag==true)
    {
        manqueue.pushback(*mosht);
    }
    else
    {
        womanqueue.pushback(*mosht);
        //qDebug()<<"woman qu.....:"<<womanqueue.popfromsaf().sabad.popback().name;
    }
    QMessageBox message;
    message.setText("Your Turn ... "+QString::number(mosht->turn));
    message.exec();
    //
    if(message.close())
    {
//        if (client != nullptr)
//        {
//            delete client;
//            client = nullptr;
//        }
//        if (ui != nullptr)
//        {
//            delete ui;
//            ui = nullptr;
//        }
//        if (add_book != nullptr)
//        {
//            delete add_book;
//            add_book = nullptr;
//        }
        ui=new Ui::MainWindow;
        ui->setupUi(this);
        //connect
        connect(ui->pushButton,&QPushButton::clicked,this,&MainWindow::onpushButton_clicked);
        connect(ui->addbook,&QPushButton::clicked,this,&MainWindow::onaddbook_clicked);
        connect(ui->factor,&QPushButton::clicked,this,&MainWindow::onfactor_clicked);
        show();
        //qDebug()<<"woman qu.  222....:"<<womanqueue.rear->clientinsaf->name;

       // connect()
    }

}

void MainWindow::onok_clicked()
{
    if(client->man->isChecked())
    {
        mosht->flag=true;
    }
    else if(client->woman->isChecked())
    {

            mosht->flag=false;


    }
    mosht->name=client->clientname->text();
    client->man->hide();
    client->woman->hide();
    client->ok->hide();
    client->buy->show();
    client->chosel->show();
    client->listwidgetofBooks->show();
    client->search->show();
    client->bookname->show();
    client->label->show();
    client->namelabel->hide();
    client->jens->hide();
    client->clientname->hide();

}

void MainWindow::onfactor_clicked()
{
    qDebug()<<"hereeeeee|||\n"<<womanqueue.rear->clientinsaf->name;
    factorofclient=new Ui::factor;
    factorofclient->setupUi(this);
    show();
    qDebug()<<"hereeeeee|||\n"<<womanqueue.rear->clientinsaf->name;
    connect(factorofclient->back_factor,&QPushButton::clicked,this,&MainWindow::onback_factor_clicked);
    qDebug()<<"hereeeeee|||\n"<<womanqueue.rear->clientinsaf->name;
//    if(manqueue.rear==NULL)
//        qDebug()<<"hereeeeeeiffifififi\n"<<womanqueue.rear->clientinsaf->name;
    if(manorwoman==true && manqueue.rear!=NULL)
    {
    manorwoman=false;
    moshtari gone=manqueue.popfromsaf();
    long int totalcost=0;

    factorofclient->clientnamefinal->setText(gone.name);
    Booknode recievebook = gone.sabad.popback();
    while(recievebook.name!=NULL)
    {
        totalcost+=recievebook.cost;
       factorofclient->listofbooksfinal->addItem("BookName : "+recievebook.name+" Cost : "+QString::number(recievebook.cost));
       recievebook = gone.sabad.popback();
    }
    factorofclient->totalc->setText(QString::number(totalcost));
    }
    else if((manorwoman==true && manqueue.rear==NULL) || (manorwoman==false && womanqueue.rear!=NULL))
    {
        qDebug()<<"hereeeeee|||\n"<<womanqueue.rear->clientinsaf->name;
        manorwoman=true;
        moshtari gone=womanqueue.popfromsaf();

       qDebug()<<"sabad\n"<<gone.name;
        long int totalcost=0;
        factorofclient->clientnamefinal->setText(gone.name);
        Booknode recievebook = gone.sabad.popback();

        while(recievebook.name!=NULL)
        {
            totalcost+=recievebook.cost;
           factorofclient->listofbooksfinal->addItem("BookName : "+recievebook.name+" Cost : "+QString::number(recievebook.cost));
           recievebook = gone.sabad.popback();
        }
        factorofclient->totalc->setText(QString::number(totalcost));
    }

}

void MainWindow::onback_client_clicked()
{
//    if (client != nullptr)
//    {
//        delete client;
//        client = nullptr;
//    }
//    if (ui != nullptr)
//    {
//        delete ui;
//        ui = nullptr;
//    }
//    if (add_book != nullptr)
//    {
//        delete add_book;
//        add_book = nullptr;
//    }
    ui=new Ui::MainWindow;
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,this,&MainWindow::onpushButton_clicked);
    connect(ui->addbook,&QPushButton::clicked,this,&MainWindow::onaddbook_clicked);
    connect(ui->factor,&QPushButton::clicked,this,&MainWindow::onfactor_clicked);
    //facor
    show();
}

void MainWindow::onback_factor_clicked()
{
    delete factorofclient;

    ui=new Ui::MainWindow;
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,this,&MainWindow::onpushButton_clicked);
    connect(ui->addbook,&QPushButton::clicked,this,&MainWindow::onaddbook_clicked);
    connect(ui->factor,&QPushButton::clicked,this,&MainWindow::onfactor_clicked);


    //facor
    show();
}

void MainWindow::onback_addbook_clicked()
{
// delete add_book;
//    if (client != nullptr)
//    {
//        delete client;
//        client = nullptr;
//    }
//    if (ui != nullptr)
//    {
//        delete ui;
//        ui = nullptr;
//    }
//    if (add_book != nullptr)
//    {
//        delete add_book;
//        add_book = nullptr;
//    }
    ui=new Ui::MainWindow;
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,this,&MainWindow::onpushButton_clicked);
    connect(ui->addbook,&QPushButton::clicked,this,&MainWindow::onaddbook_clicked);
    connect(ui->factor,&QPushButton::clicked,this,&MainWindow::onfactor_clicked);
    show();
}

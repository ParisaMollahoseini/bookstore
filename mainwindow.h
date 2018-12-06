#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include    <QFile>
#include<QTextStream>
#include"booklist.h"
#include <QMainWindow>
#include "ui_client.h"
#include "ui_mainwindow.h"
#include "ui_addbook.h"
#include"moshtari.h"
#include<QListWidgetItem>
#include"ui_factor.h"
#include<QListWidget>
#include"saf.h"
namespace Ui {
class MainWindow;
class client;
class addBook;
class factor;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    public:
    saf womanqueue,manqueue;
    static int man,woman;
    static bool manorwoman;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

        booklist *booklistname;
        moshtari *mosht;
//    public signals:


    private slots:
    void onpushButton_clicked();

    void onaddbook_clicked();

    void onesafe_clicked();

    void onsearch_clicked();

    void onbuy_clicked();

    void onok_clicked();

    void onfactor_clicked();

    void onback_client_clicked();

    void onback_factor_clicked();

    void onback_addbook_clicked();

private:
    Ui::MainWindow *ui;
    Ui::client *client;
    Ui::addBook *add_book;
    Ui::factor *factorofclient;
};

#endif // MAINWINDOW_H

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
/*QMetaObject::connectSlotsByName: No matching signal for on_esafe_clicked()
QMetaObject::connectSlotsByName: No matching signal for on_search_clicked()
QMetaObject::connectSlotsByName: No matching signal for on_buy_clicked()
QMetaObject::connectSlotsByName: No matching signal for on_ok_clicked()*/

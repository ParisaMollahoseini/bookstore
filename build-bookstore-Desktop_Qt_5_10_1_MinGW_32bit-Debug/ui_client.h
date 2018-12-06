/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_client
{
public:
    QWidget *centralwidget;
    QPushButton *buy;
    QListWidget *listwidgetofBooks;
    QLabel *label;
    QLineEdit *bookname;
    QPushButton *search;
    QRadioButton *man;
    QRadioButton *woman;
    QPushButton *ok;
    QLabel *chosel;
    QLabel *jens;
    QLabel *namelabel;
    QLineEdit *clientname;
    QPushButton *back_client;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *client)
    {
        if (client->objectName().isEmpty())
            client->setObjectName(QStringLiteral("client"));
        client->resize(1126, 745);
        client->setStyleSheet(QStringLiteral("background-color: rgb(72, 126, 131);"));
        centralwidget = new QWidget(client);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        buy = new QPushButton(centralwidget);
        buy->setObjectName(QStringLiteral("buy"));
        buy->setGeometry(QRect(810, 320, 121, 51));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        buy->setFont(font);
        buy->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        listwidgetofBooks = new QListWidget(centralwidget);
        listwidgetofBooks->setObjectName(QStringLiteral("listwidgetofBooks"));
        listwidgetofBooks->setGeometry(QRect(380, 200, 321, 301));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe Print"));
        font1.setPointSize(14);
        listwidgetofBooks->setFont(font1);
        listwidgetofBooks->setStyleSheet(QLatin1String("border-color: rgb(255, 255, 0);\n"
"color: rgb(255, 255, 0);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(300, 60, 181, 51));
        QFont font2;
        font2.setFamily(QStringLiteral("Agency FB"));
        font2.setPointSize(16);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(9);
        label->setFont(font2);
        label->setStyleSheet(QLatin1String("color: rgb(0, 0, 80);\n"
"font: 75 16pt \"Agency FB\";\n"
""));
        bookname = new QLineEdit(centralwidget);
        bookname->setObjectName(QStringLiteral("bookname"));
        bookname->setGeometry(QRect(530, 60, 201, 31));
        QFont font3;
        font3.setPointSize(14);
        bookname->setFont(font3);
        bookname->setStyleSheet(QLatin1String("color: rgb(0, 0, 255);\n"
"background-color: rgb(255, 255, 255);\n"
""));
        search = new QPushButton(centralwidget);
        search->setObjectName(QStringLiteral("search"));
        search->setGeometry(QRect(810, 220, 111, 41));
        search->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Agency FB\";\n"
""));
        man = new QRadioButton(centralwidget);
        man->setObjectName(QStringLiteral("man"));
        man->setGeometry(QRect(260, 240, 91, 41));
        QFont font4;
        font4.setPointSize(11);
        man->setFont(font4);
        man->setStyleSheet(QLatin1String("color: rgb(0, 0, 80);\n"
""));
        woman = new QRadioButton(centralwidget);
        woman->setObjectName(QStringLiteral("woman"));
        woman->setGeometry(QRect(260, 310, 91, 41));
        woman->setFont(font4);
        woman->setStyleSheet(QLatin1String("color: rgb(0, 0, 80);\n"
""));
        ok = new QPushButton(centralwidget);
        ok->setObjectName(QStringLiteral("ok"));
        ok->setGeometry(QRect(170, 410, 141, 71));
        QFont font5;
        font5.setFamily(QStringLiteral("MS Serif"));
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setWeight(75);
        ok->setFont(font5);
        ok->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        chosel = new QLabel(centralwidget);
        chosel->setObjectName(QStringLiteral("chosel"));
        chosel->setGeometry(QRect(390, 150, 311, 41));
        QFont font6;
        font6.setFamily(QStringLiteral("Agency FB"));
        font6.setPointSize(14);
        chosel->setFont(font6);
        chosel->setStyleSheet(QLatin1String("color: rgb(0, 0, 80);\n"
""));
        chosel->setAlignment(Qt::AlignCenter);
        jens = new QLabel(centralwidget);
        jens->setObjectName(QStringLiteral("jens"));
        jens->setGeometry(QRect(100, 260, 101, 31));
        QFont font7;
        font7.setFamily(QStringLiteral("Agency FB"));
        font7.setPointSize(12);
        jens->setFont(font7);
        jens->setStyleSheet(QStringLiteral("color: rgb(255, 255, 0);"));
        namelabel = new QLabel(centralwidget);
        namelabel->setObjectName(QStringLiteral("namelabel"));
        namelabel->setGeometry(QRect(120, 150, 101, 31));
        namelabel->setFont(font6);
        namelabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 0);"));
        clientname = new QLineEdit(centralwidget);
        clientname->setObjectName(QStringLiteral("clientname"));
        clientname->setGeometry(QRect(260, 150, 113, 31));
        clientname->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 127);"));
        back_client = new QPushButton(centralwidget);
        back_client->setObjectName(QStringLiteral("back_client"));
        back_client->setGeometry(QRect(1020, 0, 101, 61));
        back_client->setStyleSheet(QLatin1String("font: 75 12pt \"Agency FB\";\n"
"color: rgb(255, 255, 0);\n"
""));
        client->setCentralWidget(centralwidget);
        menubar = new QMenuBar(client);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1126, 26));
        client->setMenuBar(menubar);
        statusbar = new QStatusBar(client);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        client->setStatusBar(statusbar);

        retranslateUi(client);

        QMetaObject::connectSlotsByName(client);
    } // setupUi

    void retranslateUi(QMainWindow *client)
    {
        client->setWindowTitle(QApplication::translate("client", "MainWindow", nullptr));
        buy->setText(QApplication::translate("client", "Confirm To Buy", nullptr));
        label->setText(QApplication::translate("client", "Enter Book Name :", nullptr));
        bookname->setText(QString());
        search->setText(QApplication::translate("client", "Search", nullptr));
        man->setText(QApplication::translate("client", "man", nullptr));
        woman->setText(QApplication::translate("client", "woman", nullptr));
        ok->setText(QApplication::translate("client", "Confirm", nullptr));
        chosel->setText(QApplication::translate("client", "Chosen Books", nullptr));
        jens->setText(QApplication::translate("client", "man or woman:", nullptr));
        namelabel->setText(QApplication::translate("client", "Your Name :", nullptr));
        back_client->setText(QApplication::translate("client", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class client: public Ui_client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H

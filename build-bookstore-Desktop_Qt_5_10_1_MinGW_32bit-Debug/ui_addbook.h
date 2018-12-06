/********************************************************************************
** Form generated from reading UI file 'addbook.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOOK_H
#define UI_ADDBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addBook
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *name;
    QLineEdit *writer;
    QLineEdit *year;
    QLineEdit *cost;
    QPushButton *esafe;
    QPushButton *back_addbook;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *addBook)
    {
        if (addBook->objectName().isEmpty())
            addBook->setObjectName(QStringLiteral("addBook"));
        addBook->resize(1215, 744);
        addBook->setStyleSheet(QStringLiteral("background-color: rgb(39, 129, 116);"));
        centralwidget = new QWidget(addBook);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(360, 100, 131, 61));
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 0);"));
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(370, 180, 111, 51));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 0);"));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(350, 260, 151, 51));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 0);"));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(370, 340, 111, 41));
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral("color: rgb(255, 255, 0);"));
        label_4->setAlignment(Qt::AlignCenter);
        name = new QLineEdit(centralwidget);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(580, 120, 271, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(14);
        name->setFont(font1);
        name->setLayoutDirection(Qt::RightToLeft);
        name->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        writer = new QLineEdit(centralwidget);
        writer->setObjectName(QStringLiteral("writer"));
        writer->setGeometry(QRect(580, 190, 271, 31));
        writer->setFont(font1);
        writer->setLayoutDirection(Qt::RightToLeft);
        writer->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        year = new QLineEdit(centralwidget);
        year->setObjectName(QStringLiteral("year"));
        year->setGeometry(QRect(580, 260, 271, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Agency FB"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        year->setFont(font2);
        year->setLayoutDirection(Qt::RightToLeft);
        year->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        cost = new QLineEdit(centralwidget);
        cost->setObjectName(QStringLiteral("cost"));
        cost->setGeometry(QRect(580, 340, 271, 31));
        cost->setFont(font2);
        cost->setLayoutDirection(Qt::RightToLeft);
        cost->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        esafe = new QPushButton(centralwidget);
        esafe->setObjectName(QStringLiteral("esafe"));
        esafe->setGeometry(QRect(460, 450, 161, 51));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        esafe->setFont(font3);
        esafe->setStyleSheet(QLatin1String("color: rgb(255, 255, 0);\n"
""));
        back_addbook = new QPushButton(centralwidget);
        back_addbook->setObjectName(QStringLiteral("back_addbook"));
        back_addbook->setGeometry(QRect(1102, 0, 111, 61));
        QFont font4;
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setWeight(75);
        back_addbook->setFont(font4);
        back_addbook->setStyleSheet(QLatin1String("color: rgb(255, 255, 0);\n"
""));
        addBook->setCentralWidget(centralwidget);
        menubar = new QMenuBar(addBook);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1215, 26));
        addBook->setMenuBar(menubar);
        statusbar = new QStatusBar(addBook);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        addBook->setStatusBar(statusbar);

        retranslateUi(addBook);

        QMetaObject::connectSlotsByName(addBook);
    } // setupUi

    void retranslateUi(QMainWindow *addBook)
    {
        addBook->setWindowTitle(QApplication::translate("addBook", "MainWindow", nullptr));
        label->setText(QApplication::translate("addBook", "Book Name", nullptr));
        label_2->setText(QApplication::translate("addBook", "Writer", nullptr));
        label_3->setText(QApplication::translate("addBook", "Issue year", nullptr));
        label_4->setText(QApplication::translate("addBook", "Price", nullptr));
        name->setText(QString());
        esafe->setText(QApplication::translate("addBook", "Add Book", nullptr));
        back_addbook->setText(QApplication::translate("addBook", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addBook: public Ui_addBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOK_H

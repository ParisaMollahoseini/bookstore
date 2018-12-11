/********************************************************************************
** Form generated from reading UI file 'factor.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACTOR_H
#define UI_FACTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_factor
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *clientnamefinal;
    QLabel *label_3;
    QListWidget *listofbooksfinal;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *totalc;
    QPushButton *back_factor;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *factor)
    {
        if (factor->objectName().isEmpty())
            factor->setObjectName(QStringLiteral("factor"));
        factor->resize(1043, 600);
        factor->setStyleSheet(QStringLiteral("background-color: rgb(72, 126, 131);"));
        centralwidget = new QWidget(factor);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(360, 30, 261, 61));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(12);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(0, 0, 112);"));
        label->setAlignment(Qt::AlignCenter);
        clientnamefinal = new QLabel(centralwidget);
        clientnamefinal->setObjectName(QStringLiteral("clientnamefinal"));
        clientnamefinal->setGeometry(QRect(290, 120, 211, 71));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe Print"));
        font1.setPointSize(16);
        clientnamefinal->setFont(font1);
        clientnamefinal->setStyleSheet(QLatin1String("color: rgb(0, 0, 112);\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 255, 255);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 140, 111, 31));
        label_3->setStyleSheet(QLatin1String("color: rgb(0, 0, 89);\n"
"font: 75 12pt \"Agency FB\";"));
        listofbooksfinal = new QListWidget(centralwidget);
        listofbooksfinal->setObjectName(QStringLiteral("listofbooksfinal"));
        listofbooksfinal->setGeometry(QRect(250, 210, 381, 141));
        QFont font2;
        font2.setFamily(QStringLiteral("Segoe Print"));
        font2.setPointSize(12);
        listofbooksfinal->setFont(font2);
        listofbooksfinal->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 127);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 240, 101, 41));
        label_2->setStyleSheet(QLatin1String("color: rgb(0, 0, 120);\n"
"font: 75 12pt \"Agency FB\";"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(130, 430, 61, 31));
        label_4->setStyleSheet(QLatin1String("color: rgb(0, 0, 112);\n"
"font: 75 12pt \"Agency FB\";"));
        totalc = new QLabel(centralwidget);
        totalc->setObjectName(QStringLiteral("totalc"));
        totalc->setGeometry(QRect(250, 410, 331, 71));
        QFont font3;
        font3.setFamily(QStringLiteral("Segoe Print"));
        font3.setPointSize(20);
        totalc->setFont(font3);
        totalc->setStyleSheet(QLatin1String("border-color: rgb(0, 255, 255);\n"
"color: rgb(0, 0, 127);\n"
"background-color: rgb(255, 255, 255);"));
        back_factor = new QPushButton(centralwidget);
        back_factor->setObjectName(QStringLiteral("back_factor"));
        back_factor->setGeometry(QRect(950, 0, 93, 71));
        back_factor->setStyleSheet(QLatin1String("color: rgb(255, 255, 0);\n"
"font: 75 16pt \"Agency FB\";"));
        factor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(factor);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1043, 26));
        factor->setMenuBar(menubar);
        statusbar = new QStatusBar(factor);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        factor->setStatusBar(statusbar);

        retranslateUi(factor);

        QMetaObject::connectSlotsByName(factor);
    } // setupUi

    void retranslateUi(QMainWindow *factor)
    {
        factor->setWindowTitle(QApplication::translate("factor", "MainWindow", nullptr));
        label->setText(QApplication::translate("factor", "Here Is Your Factor", nullptr));
        clientnamefinal->setText(QString());
        label_3->setText(QApplication::translate("factor", "Client Name :", nullptr));
        label_2->setText(QApplication::translate("factor", "your books", nullptr));
        label_4->setText(QApplication::translate("factor", "total cost", nullptr));
        totalc->setText(QString());
        back_factor->setText(QApplication::translate("factor", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class factor: public Ui_factor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACTOR_H

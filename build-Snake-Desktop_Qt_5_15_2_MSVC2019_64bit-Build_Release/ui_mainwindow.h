/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *playerlab;
    QRadioButton *Player1but;
    QLabel *sneklab;
    QRadioButton *Easybut;
    QLabel *difflab;
    QRadioButton *Gamerbut;
    QRadioButton *Mediumbut;
    QPushButton *Beginbut;
    QRadioButton *Player2but;
    QPushButton *Instructbut;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 699);
        QFont font;
        font.setPointSize(17);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        playerlab = new QLabel(centralwidget);
        playerlab->setObjectName(QString::fromUtf8("playerlab"));
        playerlab->setGeometry(QRect(20, 310, 111, 41));
        Player1but = new QRadioButton(centralwidget);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->setExclusive(true);
        buttonGroup->addButton(Player1but);
        Player1but->setObjectName(QString::fromUtf8("Player1but"));
        Player1but->setGeometry(QRect(120, 360, 100, 25));
        QFont font1;
        font1.setPointSize(15);
        Player1but->setFont(font1);
        sneklab = new QLabel(centralwidget);
        sneklab->setObjectName(QString::fromUtf8("sneklab"));
        sneklab->setGeometry(QRect(120, 0, 351, 161));
        QFont font2;
        font2.setPointSize(125);
        sneklab->setFont(font2);
        Easybut = new QRadioButton(centralwidget);
        Easybut->setObjectName(QString::fromUtf8("Easybut"));
        Easybut->setGeometry(QRect(60, 250, 100, 25));
        Easybut->setFont(font1);
        difflab = new QLabel(centralwidget);
        difflab->setObjectName(QString::fromUtf8("difflab"));
        difflab->setGeometry(QRect(20, 200, 181, 31));
        Gamerbut = new QRadioButton(centralwidget);
        Gamerbut->setObjectName(QString::fromUtf8("Gamerbut"));
        Gamerbut->setGeometry(QRect(400, 250, 151, 25));
        Gamerbut->setFont(font1);
        Gamerbut->setChecked(false);
        Mediumbut = new QRadioButton(centralwidget);
        Mediumbut->setObjectName(QString::fromUtf8("Mediumbut"));
        Mediumbut->setGeometry(QRect(230, 250, 100, 25));
        Mediumbut->setFont(font1);
        Beginbut = new QPushButton(centralwidget);
        Beginbut->setObjectName(QString::fromUtf8("Beginbut"));
        Beginbut->setGeometry(QRect(60, 500, 451, 121));
        QFont font3;
        font3.setPointSize(47);
        Beginbut->setFont(font3);
        Player2but = new QRadioButton(centralwidget);
        buttonGroup->addButton(Player2but);
        Player2but->setObjectName(QString::fromUtf8("Player2but"));
        Player2but->setGeometry(QRect(370, 360, 100, 25));
        Player2but->setFont(font1);
        Instructbut = new QPushButton(centralwidget);
        Instructbut->setObjectName(QString::fromUtf8("Instructbut"));
        Instructbut->setGeometry(QRect(180, 410, 191, 51));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 36));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        playerlab->setText(QCoreApplication::translate("MainWindow", "Players: ", nullptr));
        Player1but->setText(QCoreApplication::translate("MainWindow", "1 Player", nullptr));
        sneklab->setText(QCoreApplication::translate("MainWindow", "Snek", nullptr));
        Easybut->setText(QCoreApplication::translate("MainWindow", "Easy ", nullptr));
        difflab->setText(QCoreApplication::translate("MainWindow", "Difficulty:", nullptr));
        Gamerbut->setText(QCoreApplication::translate("MainWindow", "Gamer Mode", nullptr));
        Mediumbut->setText(QCoreApplication::translate("MainWindow", "Medium", nullptr));
        Beginbut->setText(QCoreApplication::translate("MainWindow", "Press to Begin", nullptr));
        Player2but->setText(QCoreApplication::translate("MainWindow", "2 Player", nullptr));
        Instructbut->setText(QCoreApplication::translate("MainWindow", "Instructions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

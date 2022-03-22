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
#include <QtWidgets/QCheckBox>
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
    QLabel *difflab;
    QPushButton *Instructbut;
    QRadioButton *Mediumbut;
    QLabel *sneklab;
    QRadioButton *Player2but;
    QPushButton *Beginbut;
    QRadioButton *Gamerbut;
    QRadioButton *Easybut;
    QRadioButton *Player1but;
    QLabel *playerlab;
    QCheckBox *ctrInv;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QButtonGroup *buttonGroup;
    QButtonGroup *buttonGroup_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(587, 697);
        QFont font;
        font.setPointSize(17);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        difflab = new QLabel(centralwidget);
        difflab->setObjectName(QString::fromUtf8("difflab"));
        difflab->setGeometry(QRect(20, 210, 181, 31));
        Instructbut = new QPushButton(centralwidget);
        Instructbut->setObjectName(QString::fromUtf8("Instructbut"));
        Instructbut->setGeometry(QRect(20, 430, 191, 51));
        Mediumbut = new QRadioButton(centralwidget);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(Mediumbut);
        Mediumbut->setObjectName(QString::fromUtf8("Mediumbut"));
        Mediumbut->setGeometry(QRect(230, 260, 100, 25));
        QFont font1;
        font1.setPointSize(15);
        Mediumbut->setFont(font1);
        sneklab = new QLabel(centralwidget);
        sneklab->setObjectName(QString::fromUtf8("sneklab"));
        sneklab->setGeometry(QRect(120, 10, 351, 161));
        QFont font2;
        font2.setPointSize(125);
        sneklab->setFont(font2);
        Player2but = new QRadioButton(centralwidget);
        buttonGroup_2 = new QButtonGroup(MainWindow);
        buttonGroup_2->setObjectName(QString::fromUtf8("buttonGroup_2"));
        buttonGroup_2->addButton(Player2but);
        Player2but->setObjectName(QString::fromUtf8("Player2but"));
        Player2but->setGeometry(QRect(370, 370, 100, 25));
        Player2but->setFont(font1);
        Beginbut = new QPushButton(centralwidget);
        Beginbut->setObjectName(QString::fromUtf8("Beginbut"));
        Beginbut->setGeometry(QRect(60, 510, 451, 121));
        QFont font3;
        font3.setPointSize(47);
        Beginbut->setFont(font3);
        Gamerbut = new QRadioButton(centralwidget);
        buttonGroup->addButton(Gamerbut);
        Gamerbut->setObjectName(QString::fromUtf8("Gamerbut"));
        Gamerbut->setGeometry(QRect(400, 260, 151, 25));
        Gamerbut->setFont(font1);
        Gamerbut->setChecked(false);
        Gamerbut->setAutoExclusive(true);
        Easybut = new QRadioButton(centralwidget);
        buttonGroup->addButton(Easybut);
        Easybut->setObjectName(QString::fromUtf8("Easybut"));
        Easybut->setGeometry(QRect(60, 260, 100, 25));
        Easybut->setFont(font1);
        Player1but = new QRadioButton(centralwidget);
        buttonGroup_2->addButton(Player1but);
        Player1but->setObjectName(QString::fromUtf8("Player1but"));
        Player1but->setGeometry(QRect(120, 370, 100, 25));
        Player1but->setFont(font1);
        playerlab = new QLabel(centralwidget);
        playerlab->setObjectName(QString::fromUtf8("playerlab"));
        playerlab->setGeometry(QRect(20, 320, 111, 41));
        ctrInv = new QCheckBox(centralwidget);
        ctrInv->setObjectName(QString::fromUtf8("ctrInv"));
        ctrInv->setGeometry(QRect(330, 430, 201, 51));
        ctrInv->setFont(font1);
        ctrInv->setMouseTracking(true);
        ctrInv->setAutoExclusive(true);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 587, 36));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        difflab->setText(QCoreApplication::translate("MainWindow", "Difficulty:", nullptr));
        Instructbut->setText(QCoreApplication::translate("MainWindow", "Instructions", nullptr));
        Mediumbut->setText(QCoreApplication::translate("MainWindow", "Medium", nullptr));
        sneklab->setText(QCoreApplication::translate("MainWindow", "Snek", nullptr));
        Player2but->setText(QCoreApplication::translate("MainWindow", "2 Player", nullptr));
        Beginbut->setText(QCoreApplication::translate("MainWindow", "Press to Begin", nullptr));
        Gamerbut->setText(QCoreApplication::translate("MainWindow", "Gamer Mode", nullptr));
        Easybut->setText(QCoreApplication::translate("MainWindow", "Easy ", nullptr));
        Player1but->setText(QCoreApplication::translate("MainWindow", "1 Player", nullptr));
        playerlab->setText(QCoreApplication::translate("MainWindow", "Players: ", nullptr));
        ctrInv->setText(QCoreApplication::translate("MainWindow", "Inverted Controls", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

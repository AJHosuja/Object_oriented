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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *myFirstPushButton;
    QLineEdit *myLineEdit_1;
    QPushButton *plus;
    QLineEdit *myLineEdit_2;
    QLabel *number1;
    QLabel *headLabel;
    QLabel *number1_2;
    QLabel *vastaus;
    QPushButton *plus_2;
    QPushButton *plus_3;
    QPushButton *plus_4;
    QLabel *number1_3;
    QMenuBar *menubar;
    QMenu *menuLaskin_exe;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(350, 351);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        myFirstPushButton = new QPushButton(centralwidget);
        myFirstPushButton->setObjectName(QString::fromUtf8("myFirstPushButton"));
        myFirstPushButton->setGeometry(QRect(130, 220, 111, 21));
        myLineEdit_1 = new QLineEdit(centralwidget);
        myLineEdit_1->setObjectName(QString::fromUtf8("myLineEdit_1"));
        myLineEdit_1->setGeometry(QRect(130, 60, 113, 21));
        plus = new QPushButton(centralwidget);
        plus->setObjectName(QString::fromUtf8("plus"));
        plus->setGeometry(QRect(130, 120, 21, 21));
        myLineEdit_2 = new QLineEdit(centralwidget);
        myLineEdit_2->setObjectName(QString::fromUtf8("myLineEdit_2"));
        myLineEdit_2->setGeometry(QRect(130, 90, 113, 21));
        number1 = new QLabel(centralwidget);
        number1->setObjectName(QString::fromUtf8("number1"));
        number1->setGeometry(QRect(60, 60, 61, 16));
        QFont font;
        font.setPointSize(10);
        number1->setFont(font);
        number1->setFrameShape(QFrame::Box);
        headLabel = new QLabel(centralwidget);
        headLabel->setObjectName(QString::fromUtf8("headLabel"));
        headLabel->setEnabled(true);
        headLabel->setGeometry(QRect(30, 10, 261, 31));
        QFont font1;
        font1.setPointSize(14);
        headLabel->setFont(font1);
        headLabel->setFrameShape(QFrame::WinPanel);
        headLabel->setWordWrap(false);
        number1_2 = new QLabel(centralwidget);
        number1_2->setObjectName(QString::fromUtf8("number1_2"));
        number1_2->setGeometry(QRect(60, 90, 61, 16));
        number1_2->setFont(font);
        number1_2->setFrameShape(QFrame::Box);
        vastaus = new QLabel(centralwidget);
        vastaus->setObjectName(QString::fromUtf8("vastaus"));
        vastaus->setGeometry(QRect(130, 170, 111, 21));
        vastaus->setFrameShape(QFrame::Box);
        plus_2 = new QPushButton(centralwidget);
        plus_2->setObjectName(QString::fromUtf8("plus_2"));
        plus_2->setGeometry(QRect(160, 120, 21, 21));
        plus_3 = new QPushButton(centralwidget);
        plus_3->setObjectName(QString::fromUtf8("plus_3"));
        plus_3->setGeometry(QRect(190, 120, 21, 21));
        plus_4 = new QPushButton(centralwidget);
        plus_4->setObjectName(QString::fromUtf8("plus_4"));
        plus_4->setGeometry(QRect(220, 120, 21, 21));
        number1_3 = new QLabel(centralwidget);
        number1_3->setObjectName(QString::fromUtf8("number1_3"));
        number1_3->setGeometry(QRect(60, 170, 61, 16));
        number1_3->setFont(font);
        number1_3->setFrameShape(QFrame::Box);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 350, 21));
        menuLaskin_exe = new QMenu(menubar);
        menuLaskin_exe->setObjectName(QString::fromUtf8("menuLaskin_exe"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuLaskin_exe->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        myFirstPushButton->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        number1->setText(QCoreApplication::translate("MainWindow", "number1", nullptr));
        headLabel->setText(QCoreApplication::translate("MainWindow", "My Two Number Calculator", nullptr));
        number1_2->setText(QCoreApplication::translate("MainWindow", "number2", nullptr));
        vastaus->setText(QString());
        plus_2->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        plus_3->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        plus_4->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        number1_3->setText(QCoreApplication::translate("MainWindow", "Vastaus", nullptr));
        menuLaskin_exe->setTitle(QCoreApplication::translate("MainWindow", "Laskin.exe", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

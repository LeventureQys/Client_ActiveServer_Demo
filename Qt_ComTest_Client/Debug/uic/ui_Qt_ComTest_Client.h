/********************************************************************************
** Form generated from reading UI file 'Qt_ComTest_Client.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_COMTEST_CLIENT_H
#define UI_QT_COMTEST_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Qt_ComTest_ClientClass
{
public:
    QWidget *centralWidget;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Qt_ComTest_ClientClass)
    {
        if (Qt_ComTest_ClientClass->objectName().isEmpty())
            Qt_ComTest_ClientClass->setObjectName(QStringLiteral("Qt_ComTest_ClientClass"));
        Qt_ComTest_ClientClass->resize(600, 400);
        centralWidget = new QWidget(Qt_ComTest_ClientClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(30, 20, 301, 301));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(450, 110, 75, 23));
        Qt_ComTest_ClientClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Qt_ComTest_ClientClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        Qt_ComTest_ClientClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Qt_ComTest_ClientClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Qt_ComTest_ClientClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Qt_ComTest_ClientClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Qt_ComTest_ClientClass->setStatusBar(statusBar);

        retranslateUi(Qt_ComTest_ClientClass);

        QMetaObject::connectSlotsByName(Qt_ComTest_ClientClass);
    } // setupUi

    void retranslateUi(QMainWindow *Qt_ComTest_ClientClass)
    {
        Qt_ComTest_ClientClass->setWindowTitle(QApplication::translate("Qt_ComTest_ClientClass", "Qt_ComTest_Client", nullptr));
        pushButton->setText(QApplication::translate("Qt_ComTest_ClientClass", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Qt_ComTest_ClientClass: public Ui_Qt_ComTest_ClientClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_COMTEST_CLIENT_H

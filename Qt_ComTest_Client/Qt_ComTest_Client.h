#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Qt_ComTest_Client.h"
#include <QAxObject>
#include "qtextstream.h"
#include "qdebug.h"
#include <qaxwidget.h>
#include "AxWidget_Manager.h"
#include "qsharedpointer.h"
class Qt_ComTest_Client : public QMainWindow
{
	Q_OBJECT
public:
    Qt_ComTest_Client(QWidget *parent = Q_NULLPTR);
	QThread *thread;
private:
    Ui::Qt_ComTest_ClientClass ui;
	QAxWidget *ax_test;
public slots:
	void on_pushButton_clicked();
	void receive_slot(int result);

};

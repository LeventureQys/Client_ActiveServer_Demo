#include "Qt_ComTest_Client.h"

Qt_ComTest_Client::Qt_ComTest_Client(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);	
	//������
	ax_test = new QAxWidget();
	//�󶨵�ActiveQt Server
	ax_test->setControl("Main_Activerserver_Demo.OutPut_Class.1");
	//��ȡ�ӿ��ĵ�
	QString interfaces = ax_test->generateDocumentation();
	QFile docs("AX_Interfaces.html");
	docs.open(QIODevice::ReadWrite | QIODevice::Text);
	QTextStream TS(&docs);
	TS << interfaces << endl;

	this->ui.plainTextEdit->appendPlainText(interfaces);
	//���ź�
	qDebug() << connect(ax_test, SIGNAL(send_to_progress(int)), this, SLOT(receive_slot(int)));
}
//�����źŸ������
void Qt_ComTest_Client::on_pushButton_clicked()
{
	qDebug() << "cliecked";
	QVariantList params = {100};
	qint32 result_2 = ax_test->dynamicCall("receive_from_progress(int)", params).toInt();
	
}
//��������ܷ������ź�
void Qt_ComTest_Client::receive_slot(int result)
{
	this->ui.plainTextEdit->appendPlainText("Receive Signal:" + QString::number(result));
}

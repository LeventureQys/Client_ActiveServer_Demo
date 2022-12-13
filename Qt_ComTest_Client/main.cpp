#include "Qt_ComTest_Client.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Qt_ComTest_Client w;
    w.show();
    return a.exec();
}

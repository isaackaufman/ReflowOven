#include "reflowovenwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ReflowOvenWidget w;
    w.show();

    return a.exec();
}

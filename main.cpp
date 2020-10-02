#include "reflowovenwidget.h"
#include <QApplication>
#include <QtWidgets/QMainWindow>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMainWindow window;
    ReflowOvenWidget *widget = new ReflowOvenWidget();

    window.setCentralWidget(widget);
    window.resize(320, 480);
    // TODO uncomment this when ready for fullscreen
    //window.showFullScreen();
    window.show();

    return a.exec();
}

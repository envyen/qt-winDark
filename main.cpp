#include "mainwindow.h"

#include <QApplication>
#include <winDark.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    if(winDark::isDarkTheme())
        winDark::setDark_qApp();

    MainWindow w;
    w.show();
    return a.exec();
}

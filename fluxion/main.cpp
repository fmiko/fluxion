#include "fluxion.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Fluxion w;
    w.show();
    return a.exec();
}

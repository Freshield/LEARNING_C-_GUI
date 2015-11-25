#include "to_gf.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TO_GF w;
    w.show();

    return a.exec();
}

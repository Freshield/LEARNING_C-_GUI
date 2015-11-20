#include "encryptwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EncryptWindow w;
    w.show();

    return a.exec();
}

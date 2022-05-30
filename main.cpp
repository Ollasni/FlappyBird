#include "widget.h"
#include <QPushButton>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    QString text("exit");
    QPushButton but(text, &w);
    but.show();
    QObject::connect(&but, SIGNAL(clicked()), &a, SLOT(quit()));

    return a.exec();
}

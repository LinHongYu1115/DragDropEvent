#include "dragdropevent.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    DragDropEvent w1, w2;
    w1.setWindowTitle(QStringLiteral("Mouse drag and drop event processing first window"));
    w2.setWindowTitle(QStringLiteral("Mouse drag and drop event processing second window"));

    w1.move(100, 100);
    w2.move(600, 100);

    w1.show();
    w2.show();

    return a.exec();
}

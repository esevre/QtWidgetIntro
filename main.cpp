#include <iostream>

#include <QApplication>

#include "MyAwesomeWindow.hpp"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MyAwesomeWindow maw;
    maw.show();

    return app.exec();
}
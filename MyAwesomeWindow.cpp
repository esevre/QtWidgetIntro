//
// Created by Erik Sevre on 11/8/18.
//

#include "MyAwesomeWindow.hpp"

MyAwesomeWindow::MyAwesomeWindow(QWidget *parent)
{
    this->setWindowTitle(tr("This window is rocking!"));
    this->resize(640, 200);

    button1 = new QPushButton(tr("Button 1"), this);
    button2 = new QPushButton(tr("Button 2"), this);
    button3 = new QPushButton(tr("Button 3"), this);


    button2->move(button1->width() + 10, button1->pos().y());
    button3->move(button2->pos().x() + button2->width() + 10, button2->pos().y());


}



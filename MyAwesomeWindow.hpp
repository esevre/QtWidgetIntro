//
// Created by Erik Sevre on 11/8/18.
//

#pragma once

#include <QMainWindow>

#include <QPushButton>

class MyAwesomeWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MyAwesomeWindow(QWidget *parent = nullptr);

private:
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button3;

};



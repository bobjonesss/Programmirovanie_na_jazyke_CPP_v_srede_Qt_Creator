#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>

class MainWindow1 : public QWidget
{
    Q_OBJECT

public:
    MainWindow1(QWidget *parent = nullptr);
    ~MainWindow1();
};

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
};
#endif // MAINWINDOW_H

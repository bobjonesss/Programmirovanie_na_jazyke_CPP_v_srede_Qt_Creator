#include "mainwindow.h"
#include <QLabel>
#include <QPushButton>


MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
	
//Задаём родительский виджет с помощью конструктора 
QLabel *lLabel = new QLabel( ) ;//QLabel(lSomeWidget) ;

//Задаём родительский виджет с помощью метода QObject::setParent () 
QPushButton * lPushButton = new QPushButton ; 
lPushButton->setParent (   ) ; //setParent ( lSomeWidget ) ;


//lLabel−>setObjectName("ChildLabel") ; lPushButton−>setObjectName("ChildPushButton") ;
}

MainWindow::~MainWindow()
{
}


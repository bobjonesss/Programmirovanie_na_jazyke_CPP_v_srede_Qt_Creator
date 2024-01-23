//#include "mainwindow.h"

//MainWindow::MainWindow(QWidget *parent)
//    : QMainWindow(parent)
//{
//}

//MainWindow::~MainWindow()
//{
//}




#include "mainwindow.h"

#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
//Первая горизонтальная строка. Начальный текст в поле ввода
QLineEdit *lLineEdit = new QLineEdit("Text 1") ;
//Задаём текст. & — означает комбинацию клавиш для активации виджета
QLabel *lLabel = new QLabel("Line Edit &1") ;
//Задаём виджет на который будет переключаться фокус ввода при нажатии Alt+1
lLabel->setBuddy( lLineEdit ) ;
//Размещаем поле ввода и метку в одной строке
QHBoxLayout * lHBoxLayout = new QHBoxLayout ;
lHBoxLayout -> addWidget( lLabel ) ;
lHBoxLayout -> addWidget ( lLineEdit ) ;
//Вторая горизонтальная строка
QLineEdit *lLineEdit2 = new QLineEdit("Text 2") ;
QLabel *lLabel2 = new QLabel("Line Edit &2") ;
lLabel2->setBuddy( lLineEdit2 ) ;
QHBoxLayout *lHBoxLayout2 = new QHBoxLayout ;
lHBoxLayout2->addWidget ( lLabel2 ) ;
lHBoxLayout2->addWidget( lLineEdit2 ) ;
//Третий ряд виджетов с кнопками
QPushButton * lPushButtonOk = new QPushButton("&Ok");
QPushButton * lPushButtonCancel = new QPushButton("&Cansel");
QHBoxLayout * lHBoxLayout3 = new QHBoxLayout;
//Добавим элемент-растяжку он займёт всё возможное свободное пространство //и "прижмёт"кнопки к краю
lHBoxLayout3->addStretch () ;
lHBoxLayout3->addWidget ( lPushButtonOk ) ;
lHBoxLayout3->addWidget ( lPushButtonCancel ) ;
//Добавим компоновку вертикально в колонку
QVBoxLayout * lVBoxLayout = new QVBoxLayout ;
lVBoxLayout->addLayout ( lHBoxLayout ) ;
lVBoxLayout->addLayout ( lHBoxLayout2 ) ;
lVBoxLayout->addLayout ( lHBoxLayout3 ) ;
//Задаём компоновщик для окна
setLayout ( lVBoxLayout ) ;
}

MainWindow::~MainWindow()
{
}

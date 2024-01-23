#include "parentwidget.h"
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

ParentWidget::ParentWidget(QWidget *parent) :
    QWidget( parent )
{
//Создаём метку, указывая родительский виджет — this, то есть экземпляр класса ParentWidget.
QLabel *lLabel = new QLabel(this);
//Позиция относительно левого верхнего угла родительского виджета.
lLabel->setGeometry (50 , 0 , 100 , 30) ;

lLabel->setText("Text Label"); //Текст на метке.

//Создаём кнопку, задаём «родителя», геометрию и текст
QPushButton *lPushButton = new QPushButton( this ) ;
lPushButton->setGeometry (50 , 50 , 100 , 30) ;
lPushButton->setText ( " P u s h B u t t o n " ) ;

//Создаём поле ввода, задаём «родителя», геометрию и текст
QLineEdit *lLineEdit = new QLineEdit(this);
lLineEdit->setGeometry (50 , 100 , 100 , 30) ;
lLineEdit->setText ( " L i n e E d i t " ) ;
lLineEdit->selectAll () ;
//Выделяем текст в поле ввода (просто для примера)
//Наконец изменяем размер родительского виджета
setGeometry(x() , y() , 300, 150) ;
//и задаём текст заголовка окна
setWindowTitle("Parent Widget Example") ;
}

ParentWidget::~ParentWidget()
{
}

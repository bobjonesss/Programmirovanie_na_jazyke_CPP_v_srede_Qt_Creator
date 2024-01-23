//В файл реализации включим необходимые .h-файлы:
#include "calculatormainwindow.h"
#include <QPushButton>
#include <QGridLayout>
#include <QLCDNumber>

CalculatorMainWindow::CalculatorMainWindow(QWidget *parent)
    : QWidget(parent)
{
    resize(300, 300);
    setWindowTitle("Simple Calculator") ;
    createWidgets () ;
}

void CalculatorMainWindow::createWidgets ()
{
QGridLayout *lCalcLayout = new QGridLayout;
setLayout ( lCalcLayout ) ;
lcdNumber = new QLCDNumber;
pushButton = new QPushButton("1");
pushButton_2 = new QPushButton("2");
pushButton_3 = new QPushButton("3");
pushButton_4 = new QPushButton("4");
pushButton_5 = new QPushButton("5");
pushButton_6 = new QPushButton("6");
pushButton_7 = new QPushButton("7");
pushButton_8 = new QPushButton("8");
pushButton_9 = new QPushButton("9");
pushButton_10 = new QPushButton("0");
pushButtonC = new QPushButton("C");
pushButtonPlus = new QPushButton("+/=");

lCalcLayout->addWidget ( lcdNumber , 0 , 0, 1, 4);
lCalcLayout->addWidget ( pushButton , 1 , 0);
lCalcLayout->addWidget ( pushButton_2 ,  1, 1);
lCalcLayout->addWidget ( pushButton_3 , 1, 2);
lCalcLayout->addWidget ( pushButton_4 ,  2, 0);
lCalcLayout->addWidget ( pushButton_5 ,  2, 1);
lCalcLayout->addWidget ( pushButton_6 ,  2, 2);
lCalcLayout->addWidget ( pushButton_7 ,  3, 0);
lCalcLayout->addWidget ( pushButton_8 , 3, 1);
lCalcLayout->addWidget ( pushButton_9 , 3, 2);
lCalcLayout->addWidget ( pushButton_10, 4, 0, 1, 3);
lCalcLayout->addWidget ( pushButtonC , 1 , 3);
lCalcLayout->addWidget ( pushButtonPlus , 2, 3, 3, 1);

/*
• QSizePolicy::Fixed — sizeHint определяет размеры элемента. Размеры элемента фиксированы;
• QSizePolicy::Minimum — sizeHint определяет минимально возможные размеры;
• QSizePolicy::Maximum — sizeHint определяет максимально возможные размеры;
• QSizePolicy::Preferred — sizeHint определяет рекомендованные разме- ры для элемента;
• QSizePolicy::Expanding — так же как Preferred с тенденцией к увеличе- нию размера;
• QSizePolicy::MinimumExpanding — так же как Minimum с тенденцией к уве- личению размера;
• QSizePolicy::Ignored — sizeHint будет игнорирован, элемент должен за- нимать столько места на форме, сколько возможно.
*/

//Зададим политики размера для кнопок: горизонтальное и вертикальное изменение размера
pushButton->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
pushButton_2->setSizePolicy ( QSizePolicy::Preferred, QSizePolicy::Preferred);
pushButton_3->setSizePolicy ( QSizePolicy::Preferred , QSizePolicy::Preferred);
pushButton_4->setSizePolicy ( QSizePolicy::Preferred , QSizePolicy::Preferred);
pushButton_5->setSizePolicy ( QSizePolicy::Preferred , QSizePolicy::Preferred);
pushButton_6->setSizePolicy ( QSizePolicy::Preferred , QSizePolicy::Preferred);
pushButton_7->setSizePolicy ( QSizePolicy::Preferred , QSizePolicy::Preferred);
pushButton_8->setSizePolicy ( QSizePolicy::Preferred , QSizePolicy::Preferred);
pushButton_9->setSizePolicy ( QSizePolicy::Preferred , QSizePolicy::Preferred);
pushButton_10->setSizePolicy ( QSizePolicy::Preferred , QSizePolicy::Preferred);
pushButtonC->setSizePolicy ( QSizePolicy::Preferred , QSizePolicy::Preferred ) ;
pushButtonPlus->setSizePolicy ( QSizePolicy::Preferred , QSizePolicy::Preferred ) ;

lcdNumber->setFixedHeight (50) ;
}



CalculatorMainWindow::~CalculatorMainWindow()
{
}


#ifndef CALCULATORMAINWINDOW_H
#define CALCULATORMAINWINDOW_H

#include <QWidget>
//Предварительное объявление классов
class QPushButton ;
class QLCDNumber;
class CalculatorMainWindow : public QWidget {
    Q_OBJECT

public :
    explicit CalculatorMainWindow(QWidget *parent = 0) ;
    ~CalculatorMainWindow ( ) ;

private :
    //Отдельный метод для создания интерфейса программы
    void createWidgets () ;

private :
    //Цифровые кнопки
    QPushButton * pushButton ;
    QPushButton * pushButton_2 ;
    QPushButton * pushButton_3 ;
    QPushButton * pushButton_4 ;
    QPushButton * pushButton_5 ;
    QPushButton * pushButton_6 ;
    QPushButton * pushButton_7 ;
    QPushButton * pushButton_8 ;
    QPushButton * pushButton_9 ;
    QPushButton * pushButton_10 ;

    //Кнопка вывода результата и суммирования
    QPushButton *pushButtonPlus ;

    //Кнопка сброса результата
    QPushButton * pushButtonC ;

    //Виджет — цифровой дисплей
    QLCDNumber * lcdNumber ;
};
#endif // CALCULATORMAINWINDOW_H

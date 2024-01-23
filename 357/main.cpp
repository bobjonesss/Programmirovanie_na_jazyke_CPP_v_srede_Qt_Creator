#include <QApplication>
#include "parentwidget.h"
//Подключаем .h файл с определением нашего класса ParentWidget

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //Создаём и показываем окно программы
  ParentWidget lParentWidget ;

  //Переместить окно в точку экрана с координатами 100, 200
  lParentWidget.move(100 , 200) ;
  lParentWidget.show() ;

    return a.exec();
}

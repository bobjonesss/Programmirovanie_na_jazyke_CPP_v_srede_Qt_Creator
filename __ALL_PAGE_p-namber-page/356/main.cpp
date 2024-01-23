#include <QApplication>
#include <QDebug>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//Создаём объект QApplication, который инициализирует и настраивает оконную программу,
//управляет её выполнением с помощью цикла обработки событий
QLabel lLabel ; //Создаём виджет QLabel — метка
lLabel.setText("I am Widget!"); //Задаёмтекстдляметки
lLabel.setGeometry (200 , 200 , 500 , 150) ;
//Задаём размеры — позицию (x, y) ширину и высоту. Задаём выравнивание текста
lLabel.setAlignment (Qt::AlignHCenter | Qt::AlignVCenter ) ;
//Класс QFont используют для настройки параметров шрифта.
//Выбираем семейство шрифтов Arial Black и размер 12.
QFont lBlackFont ( " Arial Black " , 42, Qt::black) ;
lLabel.setFont ( lBlackFont ) ; //Задаём шрифт для метки
lLabel.show ( ) ;
//Вызываем метод show() для показа метки на экране.
//Запускаем программу на выполнение exec() выполняет
//цикл обработки событий. Программа ожидает действия пользователя и выполняет их обработку.

    return a.exec();
}

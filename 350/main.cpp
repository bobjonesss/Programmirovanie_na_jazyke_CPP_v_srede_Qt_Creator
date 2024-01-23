#include <QCoreApplication>
#include <QHash>
#include <QMultiHash>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QHash<QString , QString> lClassificationHash ;
    //Добавляем несколько значений с одинаковыми ключами
    lClassificationHash.insert ( " fruits " , " apple " ) ;
    lClassificationHash.insert ( " fruits " , " orange " ) ;
    lClassificationHash.insert ( " v e g e t a b l e s " , " potato " ) ;
    lClassificationHash.insert ( " v e g e t a b l e s " , " c a b b a g e " ) ;
    lClassificationHash.insert ( " v e g e t a b l e s " , " tomato " ) ;

    qDebug ( ) << lClassificationHash.value ( " fruits " ) ; //Вывод одного значения с ключом
    qDebug ( ) << lClassificationHash.value ( " fruits " ) ; //Вывод значений с ключом
    qDebug ( ) << lClassificationHash.value ( " v e g e t a b l e s " ) ;

{
    QMultiHash<QString , QString> lClassificationHash ;
    //Добавляем несколько значений с одинаковыми ключами

    // insertMulti - DONT WORKED !!! ONLY  => QMultiHash

    lClassificationHash.insert ( " fruits " , " apple " ) ;
    lClassificationHash.insert ( " fruits " , " orange " ) ;
    lClassificationHash.insert ( " v e g e t a b l e s " , " potato " ) ;
    lClassificationHash.insert ( " v e g e t a b l e s " , " c a b b a g e " ) ;
    lClassificationHash.insert ( " v e g e t a b l e s " , " tomato " ) ;

    qDebug ( ) << lClassificationHash.value ( " fruits " ) ; //Вывод одного значения с ключом
    qDebug ( ) << lClassificationHash.values( " fruits " ) ; //Вывод значений с ключом
    qDebug ( ) << lClassificationHash.value ( " v e g e t a b l e s " ) ;
    qDebug ( ) << lClassificationHash.values ( " v e g e t a b l e s " ) ;
}

qDebug ( ) << "€€€€€€€€€€€€€€€€€";


    QList<int> lList ; //Создаём список целых чисел
    lList.append ( 3 ) ; //Добавляем элементы
    lList.append ( 6 ) ;
    lList.append ( 9 ) ;
    QListIterator<int> lIt( lList ) ; //Создаём итератор для списка
    while ( lIt.hasNext ( ) ) //Пока следующий элемент существует
    {
    qDebug ( ) << lIt.next ( ) ; //...вывести следующий элемент
    }

qDebug ( ) << "€€€€€€€€€€€€€€€€€";

    QHash<QString , int> lNumberByName ;
    lNumberByName.insert ( " twelve " , 12) ;
    lNumberByName.insert ( " thirty three " , 33) ;
    lNumberByName.insert ( " one h u n d r e d an twenty five " , 125) ;

    QHashIterator<QString , int> lHashIterator ( lNumberByName ) ;

    lHashIterator.toFront() ;
    //Перейти к концу контейнера   итератор указывает после
    //последнего элемента
    while ( lHashIterator.hasNext() )
    {
    lHashIterator.next();    // Переходим к предыдущемму элементу
                                // Выводим ключ и значение
    qDebug ( ) << lHashIterator.key ( )<< " - " << lHashIterator.value ( ) ;
    }

qDebug ( ) << "€€€€€€€€€€€€€€€€€ Следующий пример   с итератором в стиле STL.";
    //Следующий пример   с итератором в стиле STL.
    QHash<QString , int >::const_iterator lStlLikeIterator ;

    for (   lStlLikeIterator  = lNumberByName.begin ( ) ;
            lStlLikeIterator != lNumberByName.end ( ) ;
            lStlLikeIterator++)
    {
        qDebug ( ) << lStlLikeIterator.key ( )<< " - "
        //Тоже самое, что и ∗ lStlLikeIterator
        << lStlLikeIterator.value ( ) ;
    }

    return a.exec();
}

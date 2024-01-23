#include <QCoreApplication>
#include <QDebug>

//Собственный тип данных   структура для комплексных чисел
struct complex
{
    double re ;
    double im;
} ;

//Определение потокового оператора для поддержки вывода собственного типа
//complex с помощью qDebug()
QDebug operator<<(QDebug dbg , const complex &c )
{
    dbg.nospace ( ) << " ( " << c.re << " + i * " << c.im << " ) " ;
    return dbg.space ( ) ;
}

/*
QDebug operator<<(QDebug dbg , const complex &c )
{
dbg.nospace ( ) << " ( " << c.re << " + i * " << c.im << " ) " ;
return dbg.space ( ) ;
}
*/

int main(int argc, char *argv[])
{
// qDebug() Вывод COOщений отладки,
// Сообщения могут быть выключены с помо- щью специального 
// макроопределения QT_NO_DEBUG_OUTPUT напри- мер, в файле проекта:
// DEFINES += QT_NO_DEBUG_OUTPUT


// qWarning() Вывод сообще- ний при работе программы.
// Сообщения могут быть выключены с помощью специаль- ного макроопределения 
// QT_NO_WARNING_OUTPUT например, в файле проекта:
// DEFINES += QT_NO_WARNING_OUTPUT
//
// qCritical() Вывод сообще- ний о критиче- ских ошибках
//
// qFatal()	Вывод сообще- ний о фаталь- ных для про- граммы ошиб- ках.


    QCoreApplication a(argc, argv);

//Вывод разнообразных типов данных
qDebug ( ) << " Hello , " << " this is debug output " ;
qDebug ( ) << " I n t e g e r values : " << 1 << 10 << 100;
qDebug ( ) << " D o u b l e s and floats : " << .1 << .123 << 0.112345;
qDebug ( ) << " C h a r a c t e r s : " << "c " << "\t " << "$ " << "\n " << " n e w l i n e " ;
qDebug ( ) << " B o o l e a n s : " << true << false ;
qDebug ( ) << " P o i n t e r s : " << argv ;
qDebug ( ) << " and much more ... " ;

//Вывод собственного типа данных
complex c ;
c.re = 0.2 ;
c.im = 1.5 ;
qDebug ( ) << " i n c l u d i n g custom types : " << c ;

qDebug().nospace() << c.re << "=" << c.im;

qDebug().space() << c.re << "=" << c.im;

QDebug deb = qDebug();
deb << "One" << "Two";
deb << "Three";

qDebug() << "One" << "Two";
qDebug().nospace() << "Three" << "Four";

return a.exec();
}

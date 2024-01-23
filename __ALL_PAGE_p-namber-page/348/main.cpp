#include <QCoreApplication>
#include <QDebug>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug() << argv[0];
    qDebug() << "####################";

    qDebug() <<	   QString().isNull() ;
    qDebug() <<    QString().isEmpty() ;
    qDebug() <<    QString("").isNull() ;
    qDebug() <<    QString(" ").isEmpty() ;
    qDebug() <<    QString("abc").isNull() ;
    qDebug() <<    QString("abc").isEmpty();

    qDebug() << "####################";

    QString lQtStringInitial = "I am a standard STL string.";
    qDebug() << lQtStringInitial;

    std::string lStdString = lQtStringInitial.toStdString();
    qDebug() << QString::fromStdString(lStdString);

    QString lQtString = QString::fromStdString(lStdString);
    qDebug() << lQtString;

    qDebug() << "####################";

    //преобразование целого числа в строку
    int x = 16;
    QString lXStr = QString::number(x) ; //x=7;lXStr =7

    //преобразование строки в целое число
    int y = lXStr.toInt();

    //преобразование дробного числа в строку
    double teta = 12099.10012021210102109991;
    QString lTetaStr = QString::number( teta ) ; // lTetaStr == 12099.1

    lTetaStr.setNum (teta) ;    // lTetaStr == 12099.1
    qDebug() << lTetaStr;

    //вывод с 4-мя знаками после запятой
    lTetaStr = QString::number( teta, 'f', 4) ;    // lTetaStr == 12099.1001
    qDebug() << lTetaStr;

    //форматирование с использованием символа ’e’
    lTetaStr = QString::number( teta , 'e') ; // lTetaStr == 1.209910e+04
    qDebug() << lTetaStr;

    //Запись числа в строку в разных системах счисления
    lXStr = QString("int %1 is %L2 in decimal system  %L3 in binary system  and % L4 in hexadecimal ").arg (x).arg(x, 0, 10).arg(x, 0, 2).arg(x, 0, 16);

    return a.exec();
}

#include <QCoreApplication>
#include <QDebug>
#include <QString>
#include <QList>
#include <QMap>

int main(int argc, char *argv[])
{
QCoreApplication a(argc, argv);

QList<QString> lList;
QString lStr1 ("string1") ;
QString lStr2 ("string2") ;
lList << lStr1 << lStr2 ;   //Добавляем несколько элементов за раз
lList.prepend(lStr1);       //Добавляемэлементвначало(повторно)
lList.append("string3");    //Добавляем в конец списка
lList << "string4";         //То же, что и lList .append("string4");

qDebug() << lList << "\n";

qDebug() << lStr1 << "\n";

qDebug() << lStr2 << "\n";

qDebug() << "###############";

qDebug() << lList.first () ;
qDebug() << lList.last () ;

if(lList.size()>3) // or if(lList.count()>3)
    qDebug() << lList.at(3);

qDebug() << "###############";

QMap<QString , QString> lSurnameByName ;
lSurnameByName.insert ("Bill" , "Hunter") ;
lSurnameByName.insert ("Marry" , "Lee") ;

//Поиск значения по ключу
qDebug() << "Bill" << lSurnameByName.value("Bill");
qDebug() << "Marry" << lSurnameByName.value("Marry", "Doe"); // "Doe" — вывод значений по умолчанию

//Прибавляем другое значение с уже существующим ключом
lSurnameByName.insert ("Marry" , "Hunter") ;
qDebug() << "Marry" << lSurnameByName.value("Marry");

//Ключи не существуют — вывод значений по умолчанию
qDebug() << "James" << lSurnameByName.value("James");
qDebug() << "John" << lSurnameByName.value("John", "Doe"); // "Doe" — вывод значений по умолчанию

    return a.exec();
}

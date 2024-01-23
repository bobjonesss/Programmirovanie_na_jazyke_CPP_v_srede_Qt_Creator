#include <QCoreApplication>
#include <QString>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

QString lMainStr = " string " ; // lMainStr == " s t r ing "
qDebug() << lMainStr;

lMainStr += " " ; // lMainStr == " s t r ing "
qDebug() << lMainStr;

( lMainStr += " is " ) += " " ; // lMainStr == " s t r ing i s "
qDebug() << lMainStr;

QString lHelperStr1 ( " c o m p o s e d " ) ;
qDebug() << lHelperStr1;

lMainStr += lHelperStr1 ; // lMainStr == " s t r ing i s composed"
qDebug() << lMainStr;

QString lHelperStr2 =+ " "  + QString ( " from " ) + " "  ;
lMainStr.append ( lHelperStr2 ) ;
qDebug() << lHelperStr2;

lMainStr == " s t r ing i s composi ted from ";
qDebug() << lMainStr;

lMainStr.push_back ( " f r a g m e n t s " ) ;
qDebug() << lMainStr;

lMainStr == " s t r ing i s composi ted from fragments ";
qDebug() << lMainStr;

lMainStr.prepend ( " This " ) ;
qDebug() << lMainStr;

lMainStr == "This s t r ing i s composi ted from fragments ";
qDebug() << lMainStr;

lMainStr.insert ( lMainStr.length ( ) , " . " ) ;
qDebug() << lMainStr;

lMainStr == "This s t r ing i s composi ted from fragments .";
qDebug() << lMainStr;

//lMainStr += QString (2 , ". " ) ;
lMainStr == "This s t r ing i s composi ted from fragments . . . ";
qDebug() << lMainStr;

//lMainStr = lMainStr.rightJustified( lMainStr.length( ) + 8 , " "  );
qDebug() << lMainStr;


//#####################


QString lQuote= " This is s e n t e n c e one . This is s e n t e n c e two . " ;
//Новая строка с пяти символов
QString lFragment1 = lQuote.left( 5 ) ; // lFragment1 == "This "
qDebug ( ) << " l F r a g m e n t 1 is : " << lFragment1 ;
//Первое предложение: Все символы до первой точки
QString lSentence = lQuote.section( ". " , 0 , 0) ;
qDebug ( ) << " l S e n t e n c e is : " << lSentence ;
// lSentence == "This i s sentence one"
//Cписок слов в строке
QStringList lWordsList = lSentence.split ( " " , Qt::SkipEmptyParts ) ;
qDebug ( ) << lWordsList;

// lWordsList == ("This", "is", "sentence", "one", "This",
// "is", "sentence", "two")

    return a.exec();
}

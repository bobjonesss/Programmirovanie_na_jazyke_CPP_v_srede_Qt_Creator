#include <QCoreApplication>
#include <QDebug>

#include <QIODevice>
#include <QFile>
#include <QTextStream>
#include <QDir>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QDir::setCurrent(a.applicationDirPath());

QTextStream in(stdin) ;
QFile lFile("353_file.txt") ;

qDebug() << lFile.fileName();
qDebug() << argv[0];
qDebug() << "wprked onli in  " << a.applicationDirPath();

if (lFile.open(QIODevice::WriteOnly | QIODevice::Truncate))
{
    QString lData = in.readLine() ;
    lFile.write(qPrintable(lData));
    lFile.write(qPrintable("DFGERBGT"));
    lFile.close() ;
}
else
{
    qDebug() << "Cannot open file!";
}
    return a.exec();
}

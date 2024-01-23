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

    QFile lFile (":/353_n2_in-out.txt") ; // без file res + QDir::setCurrent(a.applicationDirPath());
                                          // работать не будет!
    if (lFile.open(QIODevice::ReadOnly | QIODevice::Truncate))
    {
        QTextStream in(&lFile ) ;
        QString lData = in.readLine () ;
        qDebug() << lData;
        lFile.close () ;
    }
    else
    {
    qDebug() << "Cannot open file!";
    }
    return a.exec();
}

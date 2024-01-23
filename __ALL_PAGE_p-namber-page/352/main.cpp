#include <QCoreApplication>
#include <QDebug>
#include <QFile>
#include <QDir>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QDir::setCurrent(a.applicationDirPath());

    const QString lFileName (":/352_file.txt") ;    
    
    qDebug() << lFileName << " " << a.applicationDirPath();
    qDebug() << "file res in " << argv[0];
    qDebug() << "wprked onli in " << a.applicationDirPath();

//Проверяем существование файла
if(!QFile::exists (lFileName))
{
    qCritical ("File %s does not exit",
    qPrintable (lFileName));
    return 1;
}

QFile lFile ;

//Устанавливаем имя файла
lFile.setFileName(lFileName) ;
    //Открываем файл — текстовый, только для чтения
    if (!lFile.open(QIODevice::ReadOnly|QIODevice::Text)) {
        //Если открыть файл не удалось — выводим сообщение об ошибке
    qCritical("Error %d : %s.", lFile.error(), qPrintable(lFile.errorString()));
return 2 ;
 }

//Пока можно прочесть строку
while (! lFile.atEnd())
{
    // ... выводить её в консоль
    qDebug() << lFile.readLine() ; 
} 
    //Заканчиваем работу с файлом 
    lFile.close () ;
    return a.exec();
}

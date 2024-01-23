#include "iconizedlineedit.h" 
#include <QStyle>
#include <QLabel>


//Конструктор класса
IconizedLineEdit :: IconizedLineEdit(QWidget ∗parent) : 
	QLineEdit(parent),
mIconVisibilityMode ( IconAlwaysVisible ) 
	//Инициализация 
{
mIconLabel = new QLabel(this); 
	//Создаём метку для того, чтобы показать пиктограмму 
	//Обработка изменения текста в поле
connect ( this , SIGNAL( textChanged ( QString ) ) , this ,SLOT( slotTextChanged (
	QString ) ) , Qt : : UniqueConnection ) ; 
}




//Конструктор класса
IconizedLineEdit::IconizedLineEdit(QWidget *parent) : 
	QLineEdit(parent) 
{
mIconLabel = new QLabel(this); 
	//Создаём метку для того, чтобы показать пиктограмму 
}
	//Возвращает true, если пиктограмма видима

bool IconizedLineEdit :: isIconVisible () const 
{
return mIconLabel−>isVisible () ; 
}

//Устанавливает пиктограмму
void IconizedLineEdit::setIconPixmap(const QPixmap &pPixmap) 
{
//Устанавливаем пиктограмму для метки 
mIconLabel−>setPixmap ( pPixmap ) ; 

//Обновляем позицию и размеры 
updateIconPositionAndSize () ;
}

//Устанавливаем подсказку для пиктограммы
void IconizedLineEdit::setIconTooltip(const QString &pToolTip) 
{

//Подсказка будет видимой после наведения курсора на метку с пиктограммой
mIconLabel−>setToolTip ( pToolTip ) ; 
}
void IconizedLineEdit::updateIconPositionAndSize () 
{

//Обновить размер пиктограммы
mIconLabel−>setScaledContents ( true ) ;
mIconLabel−>setFixedSize ( height () , height () ) ;

//Обновить размещение пиктограммы
QSize lSize = mIconLabel−>size () ;
mIconLabel−>move(rect().right() − lSize.width() ,(rect().bottom() + 1 −
lSize.height () ) /2) ;

//Изменить отступы текста внутри поля ввода в зависимости от видимости
if (mIconLabel−>isVisible () ) {

//Добавить отступ справа чтобы текст не накладывался на пиктограмму 
QMargins lMargins = textMargins () ; 
lMargins.setRight(mIconLabel−>size().width() + 1); 
setTextMargins ( lMargins ) ;
}
else
{
	//Убрать отступы
	setTextMargins ( QMargins ( 0 , 0 , 0 , 0 ) ) ; 
}
}

//Устанавливает режим отображения для пиктограммы
void IconizedLineEdit::setIconVisibility(IconVisibilityMode
pIconVisibilityMode) 
{

//Сохранение режима
mIconVisibilityMode = pIconVisibilityMode ;
//Выполняем изменения соответсвенно к установленому значению 

switch ( pIconVisibilityMode )
{
case IconAlwaysVisible :
	setIconVisible (true) ; 
	break ;
case IconVisibleOnEmptyText :
case IconVisibleOnTextPresence : 
	slotTextChanged ( text () ) ; 
	break ;
default : setIconVisible(false); 
	break ;
	}
}

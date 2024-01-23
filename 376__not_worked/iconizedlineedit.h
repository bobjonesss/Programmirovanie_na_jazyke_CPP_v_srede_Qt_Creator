QRCLEARABLELINEEDIT_H 
QRCLEARABLELINEEDIT_H
#ifndef
#define
#include <QLineEdit>

class QLabel;
class IconizedLineEdit : public QLineEdit 
{
	Q_OBJECT public:

//Режимы отображения пиктограммы, которые определяют её поведение 

enum IconVisibilityMode 
{
//Всегда отображать пиктограмму
IconAlwaysVisible = 0,
//Отображать пиктограмму после наведения курсора на поле ввода 
IconVisibleOnHover ,
//Отображать пиктограмму при присутствии текста 
IconVisibleOnTextPresence ,
//Отображать пиктограмму при отсутствии текста 
IconVisibleOnEmptyText ,
//Всегда прятать пиктограмму
IconAlwaysHidden
};

explicit IconizedLineEdit (QWidget *parent = 0) ;
bool isIconVisible () const;
void setIconPixmap(const QPixmap &pPixmap) ;
void setIconTooltip (const QString &pToolTip) ;

private:
	void updateIconPositionAndSize () ;
private:
	QLabel *mIconLabel ; 

//Указатель на метку, которая отображает пиктограмму
void setIconVisibility(IconVisibilityMode pIconVisibilityMode);
//....
private slots:
	void slotTextChanged ( const QString &pText ) ;

private:
	void updateIconPositionAndSize () ; 
	void setIconVisible (bool pIsVisible ) ;

private:
	IconVisibilityMode mIconVisibilityMode ; 
	//Режим отображения

};
#endif // QRCLEARABLELINEEDIT_H

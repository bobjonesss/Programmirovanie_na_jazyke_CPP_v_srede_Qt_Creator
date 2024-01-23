#ifndef PARENTWIDGET_H
#define PARENTWIDGET_H

#include <QWidget>



class ParentWidget : public QWidget
{
    Q_OBJECT

public:
    ParentWidget(QWidget *parent = nullptr);
    ~ParentWidget();
};
#endif // PARENTWIDGET_H

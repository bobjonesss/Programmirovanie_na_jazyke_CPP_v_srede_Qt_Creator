
//Имена переменных, указанные 
//в прототипе функции, 
//компилятор игнорирует:
//Записи равносильны.
//int func(int a,int b); 
//int func(int ,int) ;


#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

#define PI 3.14159 //Определение константы

void f() //Описание функции. 
{
	cout << "С Новым Годом, " ; 
}

int main(int argc, char * argv[])
{

//тело_функции_n;

f(); 
//Вызов функции. 
cout <<"Студент!" << endl ;

f();
//Вызов функции. 
cout <<"Преподаватель!" << endl ;

f();
//Вызов функции. 
cout <<"Народ!" << endl ;

return 0 ;

}


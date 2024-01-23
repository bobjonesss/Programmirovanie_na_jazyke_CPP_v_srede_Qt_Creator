//	Задача 3.10.

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

#define PI 3.14159 //Определение константы


int main(int argc, char * argv[])
{

float a,b,c,d,x1,x2;

//Проверка ввода значения коэффициента a .

do //Выполнять тело цикла пока а равно нулю 
{
cout << " a = " ; cin >> a ; 
}
while ( a==0) ;

	cout << " b = " ; 	cin >> b ; 
	cout << "c=" ; 		cin >> c ;

d = b*b-4*a*c ;

if (d<0) 
	cout<<"Нет вещественных корней\n" ; 
else
	{
		x1 = (-b+sqrt ( d ) ) / 2 / a ;
		x2 = (-b-sqrt (d) ) / ( 2 * a ) ; 
		cout << "X1=" << x1 << "\t X2=" << x2 << "\n"; 
	}

return 0 ;

}


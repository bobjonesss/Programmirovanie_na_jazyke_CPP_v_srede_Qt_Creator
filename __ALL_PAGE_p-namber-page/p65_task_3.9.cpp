//	Задача 3.9. 

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

#define pi 3.14159 //Определение константы


int main(int argc, char * argv[])
{

unsigned int D,R; //Описаны целые положительные числа.
cout << "D=" ; 
cin >> D; //Ввод числа от 1 до 31.

if (D<32) //Проверка введённого значения.
{ 

R = D % 7;

switch (R)
{
case 1:	cout << "Понедельник \n" ; break ; 

case 2:	cout<<"Вторник \n"; break; 

case 3:	cout<<"Среда \n"; break; 

case 4:	cout<<"Четверг \n"; break; 
	
case 5:	cout<<"Пятница \n"; break; 

case 6: cout<<"Суббота \n"; break; 

case 0: cout<<"Воскресенье \n"; break;
}
}

//Сообщение об ошибке в случае некорректного ввода.
else cout<<"ОШИБКА! \n " ;

return 0 ;

}


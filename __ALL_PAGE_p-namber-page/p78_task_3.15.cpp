//	Задача 3.15.

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

#define PI 3.14159 //Определение константы


int main(int argc, char* argv[])
{

unsigned int N, i ;
bool Pr ;

cout << "N="; cin >> N;

Pr = true ; //Предположим, что число простое 

for (i = 2; i <= N/2; i++)

if ( N % i ==0) //Если найдётся хотя бы один делитель, то 
{
	Pr = false ; 	//число простым не является и
	break ; 	//досрочный выход из цикла 
}

if ( Pr ) //Проверка значения логического параметра и вывод на печать 
       //соответствующего сообщения
	cout << N << " - простое число\n" ; 
else
	cout << N << " - не является простым\n" ;

return 0 ;

}


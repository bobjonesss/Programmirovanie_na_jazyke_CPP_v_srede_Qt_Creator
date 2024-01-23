//	Задача 3.11.

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

#define PI 3.14159 //Определение константы


int main(int argc, char * argv[])
{

unsigned int a, b ;
cout << "A=" ; cin >> a ;
cout << "B="; cin >> b;
//Если числа не равны, выполнять тело цикла 
while (a!=b)
//Если число A больше, чем B, то уменьшить его значение на B, 
if (a > b) a = a - b;
//иначе уменьшить значение числа B на A 
else b = b - a;
cout << "НОД=" << a << "\n" ;

return 0 ;

}


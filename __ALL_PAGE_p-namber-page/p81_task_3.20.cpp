//	Задача 3.20.

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

#define PI 3.14159 //Определение константы

int main(int argc, char * argv[])
{

unsigned int i ,N;
float X, Max;
cout << "N=" ; cin >> N;
cout << "X=" ; cin >> X; //Ввод первого элемента последовательности 
		     //
		     //
		     //Параметр цикла принимает стартовое значение i=2, т.к. первый элемент 
		     //уже введён предположим, что он максимальный, т.е. Max=X.

for (i=2, Max=X; i<=N;i++) {
cout << "X="; 
cin >> X; 
//Ввод следующих элементов последовательности. 
//Если найдётся элемент, превышающий максимум, записать его в ячейку Max, 
//теперь он предполагаемый максимум.

if ( X > Max ) Max = X ; }
//Вывод наибольшего элемента последовательности. 

cout << " M a x = " << Max << " \n " ;

return 0 ;

}


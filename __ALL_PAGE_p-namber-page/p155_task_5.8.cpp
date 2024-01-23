//	p155 task 5.8

#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <time.h>

using namespace std ;


int main(int argc, char * argv[])
{

int i, j, n;
cout << " n = " ; cin >> n ;
float x [ n ] ; //Выделяем память для динамического массива x. 
cout << "Введите элементы массива X \n" ; //Ввод элементов массива. 
for ( i = 0 ; i <n ; i++)
cin >> x [ i ] ;
for ( i = 0 ; i < n ; )
if ( x [ i ] > 0) //Если текущий элемент положителен, 
{ //то удаляем элемент с индексом i.
for ( j = i ; j <n - 1 ; j++) 
	x [ j ] = x [ j + 1];
n--; 
}
else 
	i++; //иначе — переходим к следующему элементу массива. 
cout << "Преобразованный массив X \n" ; //Вывод элементов массива. 
for ( i = 0 ; i < n ; i++)
cout << x [ i ] << " \t " ; 
cout<<endl ;

return 0 ;
}

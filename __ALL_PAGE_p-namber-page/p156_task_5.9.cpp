//	p156 task 5.9

#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <time.h>

using namespace std ;


int main(int argc, char * argv[])
{

int i, j, k, n, nmax, nmin, *x, a, b;
cout << "n="; 
cin >> n; //Вводколичестваэлементоввмассиве. 
x = new int [n]; //Выделяем память для динамического массива x. 
cout << "Введите элементы массива X \n" ; //Ввод элементов массива. 
for ( i = 0 ; i < n ; i++)
	cin >> x [ i ] ;
//Поиск номеров максимального и минимального элементов в массиве. 
for(nmax = nmin = i = 0; i<n; i++)
{
	if (x[i] < x[nmin]) nmin = i; 
	if (x[i] > x[nmax]) nmax = i;
}
//Проверяем, что раньше расположено, минимум или максимум
if (nmin < nmax) 
{
	a = nmin;
	b = nmax; 
}
else
{
	a=nmax;
	b=nmin; 
}
//Перебираем все элементы, расположенные между максимумом и минимумом 
for ( i = a+1, k=1; k <= b-a-1; k++)
if ( x [ i ] < 0) //Проверяем, является ли очередной элемент массива отрицательным.
{//Если текущий элемент массива является отрицательным числом, удаляем его
for ( j = i; j < n - 1 ; j++) 
	x [ j ] = x [ j + 1];
n--; 
}
else i++; //Если x[i]>=0, переходим к следующему элементу. 
cout << "Преобразованный массив X\n" ;
for ( i = 0 ; i <n ; i++)
cout << x [ i ] << " \t " ; 
cout << endl ;


return 0 ;
}

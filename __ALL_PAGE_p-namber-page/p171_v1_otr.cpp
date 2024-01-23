//	p171 v1

#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <time.h>

using namespace std ;


void udal(float *x, int k, int *n) 
{
int i;
for ( i = k ; i < *n - 1 ; i++)
	x [ i ] = x [ i + 1]; 
if (k<*n) 
	--*n;
}

int main(int argc, char * argv[])
{
	int i, n;
	cout << " n = " ; 
	cin >> n ;
	float x [ n ] ; //Выделяем память для динамического массива x. 
	cout << "Введите элементы массива X\n" ; 

//Ввод элементов массива. 
for ( i = 0; i < n; i++ )
	cin >> x [ i ];
for ( i = 0; i < n ; ) 
	if ( x[i] < 0 )
	//Если текущий элемент ОТРІЦИТЕЛЕН, то 
	//для удаления элемента с индексом i вызываем 
	//функцию udal, которая изменяет элементы, хранящиеся по адресу x,
	{
	float tmp = x[i];
	udal(x, i, &n); //и возвращает размер массива.
	cout<<"удаляются отрицательние елементи " << tmp <<  "\n"  ; 
	}
else 
	i++; //иначе (x[i]<=0) — переходим к следующему элементу массива.
	cout<<"Преобразованный массив X\n" ; 
	
	//Вывод элементов массива после удаления. 
for ( i = 0 ; i < n ; i++)
	cout << x [ i ] << " \t " ; 

cout << endl ;

return 0 ;
}

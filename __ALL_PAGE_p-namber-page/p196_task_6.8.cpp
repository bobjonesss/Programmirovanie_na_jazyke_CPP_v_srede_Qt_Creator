//	p196 6.8

#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <time.h>

using namespace std ;

int main(int argc, char * argv[])
{

int **a, n = 8, k = 0, i, j;
a = new int *[n]; 	//Выделяем память для хранения матрицы 
for ( i = 0 ; i < n ; i++)
a[i] = new int [n];
for(i = 0; i < n; i++) 	//Перебираемвсестрокиматрицы.
if ( i % 2 == 0) 	//Строки с чётными номерами заполняем возрастающей 
			//последовательностью 
for(j=0; j<n; j++) 	//чиселслеванаправо
a [ i ] [ j ] = ++k ;

else 
	//Строки с нечётными номерами заполняем возрастающей 
	//последовательностью чисел 
for( j = n-1; j >= 0; j--) //справа налево
a [ i ] [ j ] = ++k ;
cout << "Вывод матрицы A" << endl ; 
for( i = 0; i < n; cout << endl, i++)
for ( j = 0 ; j < n ; j++)
cout << a [ i ] [ j ] << " \t " ;

return 0 ;
}

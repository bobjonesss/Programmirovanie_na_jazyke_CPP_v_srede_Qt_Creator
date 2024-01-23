//	p193 6.4

#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <time.h>

using namespace std ;

int main(int argc, char * argv[])
{

int i, j, N, M;
double S, **a;
cout << "N=" ; //Ввод размерности матрицы. 
cin>>N;
cout << " M = " ;
cin >> M ;
a = new double * [ N ] ;
for ( i = 0 ; i < N ; i++ )
//Создаём динамическую матрицу
a [ i ] = new double [M];
cout << "Ввод элементов матрицы A" << endl ; 
for ( i = 0 ; i < N ; i++ )
for ( j = 0 ; j < M ; j++ ) 
	cin >> a [ i ] [ j ] ;
//Цикл по i завершается записью среднего значения в нулевой элемент строки и наращиванием i. 
for ( i = 0 ; i < N ; a [ i ] [ 0 ] = S / M , i++ )
for( S = j = 0; j < M; j++) //Вычисление суммы элементов строки. 
	S += a [ i ] [ j ] ;
cout<<"Преобразованная матрица A"<<endl ; 
for ( i = 0 ; i < N ; cout << endl , i++ )
for ( j = 0 ; j < M ; j++ )
cout << a [ i ] [ j ] << " \t " ;

return 0 ;
}

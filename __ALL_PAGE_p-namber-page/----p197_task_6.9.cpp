//	p197 6.9

#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <time.h>

using namespace std ;

int main(int argc, char * argv[])
{

//функция вычисления суммы двух матриц.
float **sum_m(float **A, float **B, int N, int M) 
{
int i, j;
float **temp ; //указатель для хранения результирующей матрицы
temp = new float * [ N ] ; 

//выделение памяти для хранения результирующей матрицы 
for ( i = 0 ; i < N ; i++ )
temp[i] = new float [M];
for(i=0; i < N; i++) //Вычисляемсуммудвухматриц
for ( j = 0; j < M ; j++ )
temp[ i ][ j ] = A[ i ][ j ] + B[ i ][ j ];
return temp ; //Возвращаем матрицу как двойной указатель 
}

//функция вычисления разности двух матриц.
float **minus_m(float **A, float **B, int N, int M)
{
int i,j;
float **temp ; //указатель для хранения результирующей матрицы
temp = new float * [N ] ; 
//выделение памяти для хранения результирующей матрицы 
for ( i = 0 ; i < N ; i++ )
temp[i] = new float [M];
for(i=0; i < N; i++) //Вычисляемразностьдвухматриц
for ( j = 0 ; j < M ; j++ )
temp[ i ][ j ] = A[ i ][ j ] - B[ i ][ j ];
return temp ; //Возвращаем матрицу как двойной указатель 
}

//функция вычисления произведения двух матриц.
float **product_m(float **A, float **B, int N, int M, int L) 
{
int i,j,k;
float **temp ; //указатель для хранения результирующей матрицы
temp = new float * [N ] ; 
//выделение памяти для хранения результирующей матрицы 
for ( i = 0 ; i < N ; i++ )
temp[i] = new float [L];
//Вычисляем произведение двух матриц, последовательно формируя все 
//элементы матрицы 
for ( i = 0 ; i < N ; i++ )
for ( j = 0 ; j < L ; j++)
//Элемент с индексами i, j — скалярное произведение i-й строки матрицы A 
for (temp [ i ] [ j ]=k=0;k<M; k++) 
	//и j-го столбца матрицы B
temp [ i ] [ j ] += A [ i ] [ k ] * B [ k ] [ j ] ;
return temp ; //Возвращаем матрицу как двойной указатель
	      //
	      //
}
//функция создаёт динамическую матрицу вещественных чисел размерности N на M, 
//в этой же функции осуществляется и ввод элементов матрицы
float **create_m(int N, int M)
{
int i,j;
float **temp; temp = new float *[N]; 
for ( i = 0 ; i < N ; i++ )
temp[i]=new float [M]; cout<<"Ввод матрицы\n" ;
for ( i = 0 ; i < N ; i++ )
for ( j = 0 ; j < M ; j++ )
cin >> temp [ i ] [ j ] ;
return temp ; 
}
//функция осуществляет построчный вывод матрицы A(N,M) 
void output_m(float **A, int N, int M)
{
int i,j;
//Цикл по строкам. По окончанию вывода всех элементов строки — переход на новую строку. 
for ( i = 0 ; i < N ; cout << endl , i++ )
for( j=0; j < M; j++) //Циклпопеременнойj,вкоторомперебираемстрокиматрицы 
cout << A[ i ] [ j ] << "\t" ; //Вывод очередного элемента матрицы и символа табуляции.
}
int main(int argc , char **argv) 
{
float **A, **B, **C, **D, **result ; 
//указатели для хранения исходных и результирующей матриц
int N,M;
cout << "N=" ; 
cin >> N; //Ввод размерностей матрицы
cout << " M = " ; 
cin >> M ;
//Выделение памяти и ввод матриц A, B, C, D, обращением к функции create_m.
A = create_m (N,M) ;
B = create_m (N,M) ;
C = create_m ( M , N ) ;
D = create_m ( M , N ) ;

//Вычисление результирующей матрицы.
result=product_m(product_m(sum_m(A,B,N,M) ,minus_m(C,D,M,N) ,N,M,N) ,product_m (sum_m(A,B,N,M) ,minus_m(C,D,M,N) ,N,M,N) ,N,N,N) ;
output_m( result ,N,N) ; //Вывод результирующей матрицы.

return 0 ;
}

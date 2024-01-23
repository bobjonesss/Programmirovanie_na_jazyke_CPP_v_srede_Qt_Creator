//	p194 6.6

#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <time.h>

using namespace std ;

int main(int argc, char * argv[])
{

int i,j,k,N,M;
double b, **a;
cout << "M=" ; //Ввод размеров матрицы. 
cin >> M ;
cout << " N = " ;
cin >> N;
a=new double * [N ] ;
for ( i = 0 ; i < N ; i++ )
//Создаём динамическую матрицу
//Создаём динамическую матрицу
a [ i ] = new double [M];
cout<<"Ввод элементов матрицы A"<<endl ; 
for ( i = 0 ; i < M ; i++ )
for ( j = 0 ; j <N ; j++ )

cin >> a [ i ] [ j ] ;
for(i=0;i<M;i++) //Циклпо i —дляпереборастрокматрицы.
if ( i %2==0) //Если строка чётна, то
{ //упорядочиваем элементы строки по возрастанию,
for ( k = 1; k < N; k++)
for ( j = 0 ; j < N-k ; j++)
if ( a [ i ] [ j ]>a [ i ] [ j +1]) 
{
b=a [ i ] [ j ] ;
a [ i ] [ j ] = a [ i ] [ j +1]; a [ i ] [ j +1]=b ;
} 
}
//иначе нечётные строки упорядочиваем по убыванию.
else 
	for(k=1;k<N;k++)
for ( j = 0 ; j <N-k ; j++)
if ( a [ i ] [ j ]<a [ i ] [ j +1])
{
b=a [ i ] [ j ] ;
a [ i ] [ j ]=a [ i ] [ j +1]; a [ i ] [ j +1]=b ;
}
cout<<"Преобразованная матрица A"<<endl ; 
//Вывод преобразованной матрицы. 
for ( i = 0 ; i <M ; cout << endl , i++ )
for ( j = 0 ; j <N ; j++ )
cout << a [ i ] [ j ] << " \t " ;

return 0 ;
}

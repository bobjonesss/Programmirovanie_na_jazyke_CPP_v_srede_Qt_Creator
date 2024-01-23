//	p193 6.5

#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <time.h>

using namespace std ;

int main(int argc, char * argv[])
{

int i, j, imax, jmax, imin, jmin, N, M; 
double min, max, b, **a;
cout << "N=" ; //Ввод размеров матрицы. 
cin >> N;
cout << " M = " ;
cin >> M ;
a=new double * [N ] ; 
for ( i = 0 ; i < N ; i++ )
a [ i ] = new double [M];
cout << "Ввод элементов матрицы A" << endl ; 
for ( i = 0 ; i < N ; i++ )
for ( j = 0 ; j < M ; j++ ) 
	cin >> a [ i ] [ j ] ;

//Двойной цикл для поиска максимального, минимального элементов и их индексов. 
for(max=min=a[0][0] ,imax=jmax=imin=jmin=i=0;i<N;i++)
for ( j = 0 ; j < M ; j++ ) 
{
if (a[i][j]>max) {max=a[i][j]; imax=i;jmax=j;}
if (a[i][j]<min) {min=a[i][j]; imin=i;jmin=j;} 
}

//Обмен двух элементов матрицы. 
b=a [ imax ] [ jmax ] ;
a [ imax ] [ jmax]=a [ imin ] [ jmin ] ; a[imin ][ jmin]=b;

//Вывод преобразованной матрицы. 
cout<<"Преобразованная матрица A"<<endl ; 
for ( i = 0 ; i <N ; cout << endl , i++ )
for ( j = 0 ; j <M ; j++ )
cout << a [ i ] [ j ] << " \t " ;

return 0 ;
}

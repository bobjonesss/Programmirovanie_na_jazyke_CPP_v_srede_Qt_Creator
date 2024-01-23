//	p194 6.7

#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <time.h>

using namespace std ;

int main(int argc, char * argv[])
{

int i, j, k;
double b, **a;
cout << "k=" ; //Ввод размера матрицы.
cin >> k;
a=new double * [ k ] ; 
	//Создаём динамическую матрицу 
for ( i = 0 ; i < k ; i++)
a[i] = new double [k];
cout<<"Ввод элементов матрицы A" << endl ;
for ( i = 0 ; i < k ; i++)
for ( j = 0 ; j < k ; j++) 
	cin >> a [ i ] [ j ] ;
for( i = 0; i < k; i++) //Циклпострокам.
{//В каждой строке обмен между элементами, лежащими на главной и побочной диагоналях.
b = a [ i ] [ i ] ;
a [ i ] [ i ] = a [ i ] [ k-1-i ] ; a[ i ][k-1-i]=b;
}
cout << "Преобразованная матрица A" << endl ; 
//Вывод преобразованной матрицы. 
for ( i = 0 ; i < k ; cout << endl , i++ )
for ( j = 0 ; j < k ; j++ )
cout << a [ i ] [ j ] << " \t " ;

return 0 ;
}

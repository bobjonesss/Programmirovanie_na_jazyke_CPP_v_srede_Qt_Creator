//	p196 6.8

#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <time.h>

using namespace std ;


//Функция вычисления определителя.
double determinant (double **matrica_a , int n)
//Формальные параметры: matrica_a — исходная матрица, n — размер матрицы, 
//функция возвращает значение определителя (тип double.)
{
int i,j,k,r;
double c,M,max,s,det=1;
//a — копия исходной матрицы. 
double **a;
//Выделение памяти для матрицы a . 
a=new double ∗[n];
for ( i = 0 ; i <n ; i++)
a[i]=new double[n];
//В a записываем копию исходной матрицы. 
for ( i = 0 ; i <n ; i++)
for ( j = 0 ; j <n ; j++)
a[ i ][ j]=matrica_a[ i ][ j ];
//Прямой ход метода Гаусса. for(k=0;k<n;k++)
{
max=fabs ( a [ k ] [ k ] ) ; 
r=k;
for ( i =k + 1 ; i <n ; i ++)
if (fabs(a[i][k])>max) {
max= fabs ( a [ i ] [ k ] ) ; 
r=i ;
}
//Если строки менялись местами, то смена знака определителя.
if (r!=k) det=−det; 
for ( j = 0 ; j <n ; j++)
{
c=a[k][ j ];
a [ k ] [ j ]=a [ r ] [ j ] ; a [ r ] [ j ]= c ;
}
for ( i =k + 1 ; i <n ; i ++)
for ( M= a [ i ] [ k ] / a [ k ] [ k ] , j = k ; j < n ; j++ ) a [ i ] [ j ]−=M* a [ k ] [ j ] ;
}
//Вычисление определителя. 
for ( i = 0 ; i <n ; i ++)
det *= a[ i ][ i ];
//Возврат определителя в качестве результата функции.


for ( i = 0 ; i <n ; i++) 
	delete [] a[ i ];

delete [] a;
return det ; }


int main(int argc, char * argv[])
{

int result ,i ,j ,N; double **a, b;
cout << " N = " ; 
cin >> N;
a=new double *[N]; 
for ( i = 0 ; i <N ; i++ )
a[i]=new double[N];

//Ввод значений исходной матрицы. 
cout<<"Ввод матрицы A"<<endl ;
for ( i = 0 ; i <N ; i++ )
for ( j = 0 ; j <N ; j++ ) 
	cin >>a [ i ] [ j ] ;

//Обращение к функции вычисления определителя.
cout<<"определитель="<<determinant (a ,N)<<endl ; 

return 0 ;
}

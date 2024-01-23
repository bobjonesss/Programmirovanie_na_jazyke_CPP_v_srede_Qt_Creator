//	p208 6.11

#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <time.h>

using namespace std ;

//Функция решения системы линейных алгебраических уравнений методом Гаусса. int SLAU(double ∗∗matrica_a , int n,double ∗massiv_b , double ∗x)
{
int i,j,k,r; double c,M,max,s; double ∗∗a, ∗b; a=new double ∗[n]; f o r ( i = 0 ; i <n ; i ++)
a[i]=new double[n]; b=new double [n];
f o r ( i = 0 ; i <n ; i ++)
f o r ( j = 0 ; j <n ; j ++)
a[ i ][ j]=matrica_a[ i ][ j ];
f o r ( i = 0 ; i <n ; i ++)
b[ i]=massiv_b[ i ];
for(k=0;k<n;k++) {
max=f a b s ( a [ k ] [ k ] ) ; r=k;
f o r ( i =k + 1 ; i <n ; i ++)
if (fabs(a[i][k])>max) {
m a x= f a b s ( a [ i ] [ k ] ) ; r=i ;
}
f o r ( j = 0 ; j <n ; j ++) {
c=a[k][ j ];
a [ k ] [ j ]=a [ r ] [ j ] ; a [ r ] [ j ]= c ;
}
c=b [ k ] ;
b [ k]=b [ r ] ;
b [ r ]= c ;
f o r ( i =k + 1 ; i <n ; i ++) {
f o r ( M= a [ i ] [ k ] / a [ k ] [ k ] , j = k ; j < n ; j + + ) a [ i ] [ j ]−=M∗ a [ k ] [ j ] ;
b [ i ] − =M∗ b [ k ] ; }
}
if (a[n−1][n−1]==0)
if (b[n−1]==0) return −1;
else return −2; else
{
f o r ( i =n − 1 ; i > = 0 ; i −−) {
for(s=0,j=i+1;j<n; j++) s+=a [ i ] [ j ] ∗ x [ j ] ;
x[ i]=(b[ i]−s)/a[ i ][ i ]; }
return 0 ; }
f o r ( i = 0 ; i <n ; i ++) delete [] a[ i ]; delete [] a; delete [] b;
}

//Функция вычисления обратной матрицы
int INVERSE(double ∗∗a, int n, double ∗∗y)
//Формальные параметры: a — исходная матрица, n — размерность матрицы, y — обратная матрица.
//Функция будет возвращать 0, если обратная матрица существует, -1 — в противном случае. {
int i,j,res;
double ∗b , ∗x ;
//Выделение памяти для промежуточных массивов b и x. b=new double [n];
x=new double [n];
f o r ( i = 0 ; i <n ; i ++)
{
//Формирование вектора правых частей для нахождения i-го столбца матрицы. f o r ( j = 0 ; j <n ; j ++)
if (j==i) b[ j ]=1;
else b[j]=0;
//Нахождение i-го столбца матрицы путём решения СЛАУ Ax = b методом Гаусса. r e s =SLAU ( a , n , b , x ) ;
//Если решение СЛАУ не найдено, то невозможно вычислить обратную матрицу.
if (res!=0) break ;
else
//Формирование i-го столбца обратной матрицы. f o r ( j = 0 ; j <n ; j ++)
y [ j ] [ i ]=x [ j ] ; }
//Проверка существования обратной матрицы, если решение одного из уравнений Ax=b не //существует, то невозможно найти обратную матрицу, и функция INVERSE вернёт значение −1.
if (res!=0) return −1;
//Если обратная матрица найдена, то функция INVERSE вернёт значение 0, //а обратная матрица будет возвращаться через указатель double **y.
else
return 0 ; }

int main(int argc, char * argv[])
{

int result ,i ,j ,N;
double ∗∗a , ∗∗b ;
cout<<"N=" ; //Ввод размера матрицы.
cin>>N;
a=new double ∗ [N ] ; //Выделение памяти для матриц a и b. f o r ( i = 0 ; i <N ; i + + )
a[i]=new double[N]; b=new double ∗[N];
f o r ( i = 0 ; i <N ; i + + )
b[i]=new double[N];
cout<<"Ввод матрицы A"<<endl ; //Ввод исходной матрицы. f o r ( i = 0 ; i <N ; i + + )
f o r ( j = 0 ; j <N ; j + + ) c i n >>a [ i ] [ j ] ;
result=INVERSE(a,N,b); //Вычисление обратной матрицы.
i f
( r e s u l t ==0) //Если обратная матрица существует, то вывести её на экран.
//Двойные указатели для хранения исходной a и обратной b матрицы.
{
cout<<"Обратная матрица"<<endl ; f o r ( i = 0 ; i <N ; c o u t << e n d l , i + + ) f o r ( j = 0 ; j <N ; j + + )
c o u t << b [ i ] [ j ] < < " \ t " ; }
else
//Если обратная матрица не существует, то вывести соответствующее сообщение.
cout<<"Нет обратной матрицы"<<endl ; 

return 0 ;
}

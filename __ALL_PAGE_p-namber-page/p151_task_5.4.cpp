//	p151 task 5.4

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

//Функция проверяет, содержится ли число i в массиве x из n элементов. 
//Функция возвращает true, если содержится, и false, если не содержится. 

bool proverka(int i, int *x, int n)
{
   bool pr ;
   int p;
   pr=false ; 
   for(p=0;p<n;p++)
   if (i==x[p]) pr=true; return pr ;
}

int main(int argc, char * argv[])
{
int j, i, n, *nmin, k, kvo, nmin_temp; 
double *x ;
cout << " n = " ; 
cin >> n ;
x=new double [n];
cout<<"Введите элементы массива Х\n" ; 
for ( i = 0 ; i <n ; i ++)
cin >>x [ i ] ;
cout<<"Введите количество минимумов\n" ; 
cin>>k ; 
nmin=new int[k];

for(j=0;j<k;j++) //Циклпопеременнойjдляпоисканомераj+1минимальногоэлемента 
{
kvo =0;
for(i=0;i<n;i++) //Перебираемвсеэлементымассива.
{
//Вызов функции proverka, определяем, содержится ли число i в массиве nmin из j элементов
if
(!proverka(i ,nmin,j))
{
kvo++;
if ( kvo==1) nmin_temp=i ; 
else
if (x[ i]<x[nmin_temp]) nmin [ j ]=nmin_temp ;
nmin_temp=i ;
} }
}
for(j=0;j<k;j++) //Выводномеровизначенийkминимальныхэлементовмассива.
cout<<"nmin1="<<nmin[ j]<<"\tmin1="<<x[nmin[ j]]<<endl ;

return 0 ;
}

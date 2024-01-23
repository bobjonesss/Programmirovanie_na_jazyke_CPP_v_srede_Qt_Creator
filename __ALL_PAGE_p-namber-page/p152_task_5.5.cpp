//	p152 task 5.5

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;


int main(int argc, char * argv[])
{

int i, N, nmax, nmin;
float temp;
cout<<"N=" ; 
cin>>N;
float X[N];
cout<<"Введите элементы массива Х\n" ; 
for ( i = 0 ; i <N ; i++ )
cin >> X [ i ] ;
//Поиск номеров максимального и минимального элементов массива. 
for(nmax=nmin=0,i=1;i<N; i++)
{
if (X[i]<X[nmin]) nmin=i;
if (X[i]>X[nmax]) nmax=i; 
}

//Обмен максимального и минимального элементов местами.
temp=X[ nmax ] ; 
X[ nmax]=X[ nmin ] ; 
X[ nmin]=temp ; 
cout<<"Преобразованный массив Х\n" ; //Вывод преобразованного массива. 
for ( i = 0 ; i <N ; i++ )
cout << X[i] << " ";
cout<<endl ;

return 0 ;
}

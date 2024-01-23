//	p155 task 5.7

#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <time.h>

using namespace std ;


int main(int argc, char * argv[])
{

int i, j, n = 20;
float x [ n ] ; //Выделяем память для динамического массива x.
cout<<"Введите элементы массива X \n" ; //Ввод элементов массива.
for ( i = 0 ; i < n ; i++)
{ cout << "i " << i << "\t" ; cin >> x [ i ] ; }
for(j=1;j<=6;j++) //Шесть раз повторяем алгоритм удаления элемента с индексом 5.
for(i=5;i<n-j;i++) //Удалениеэлементасиндексом5. 
	x [ i ]=x [ i +1];
cout<<"Преобразованный массив X \n" ; //Вывод элементов массива. 
for ( i = 0 ; i <n - 6 ; i++)
cout << "i " << i << "\t" << x [ i ] << " \n"  ; cout<<endl ;

return 0 ;
}

//	p188

#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <time.h>

using namespace std ;

int main(int argc, char * argv[])
{

int i, j, N, M, a[20][20];
cout << " N = " ;
cin >> N; //Ввод количества строк 
cout << " M = " ;
cin >> M; //Ввод количества столбцов
cout << "Ввод матрицы A" << endl ;
for(i=0; i<N; i++) //Циклпопеременнойi,перебираемстрокиматрицы
for(j=0; j<M; j++) //Циклпопеременнойj,перебираемэлементывнутристроки 
cin >> a [ i ] [ j ] ; //Ввод очередного элемента матрицы
cout << "Вывод матрицы A" << endl ;
for( i = 0; i < N; i++) //Циклпопеременнойi,перебираемстрокиматрицы 
{
for( j = 0; j < M; j++ ) //Циклпопеременнойj,перебираемстрокиматрицы 
cout << a [ i ] [ j ] << "\t" ; //Вывод очередного элемента матрицы
cout << endl ; 
//По окончанию вывода всех элементов строки — переход на новую строку. 
}

cout << endl ; 

for ( i = 0; i < N; cout << endl, i++ ) 
	for ( j = 0; j < M; j++ )
		cout << a [ i ] [ j ] << " \t " ;

return 0 ;
}

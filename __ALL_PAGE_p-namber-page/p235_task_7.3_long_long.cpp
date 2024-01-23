//	p235 7.3

#include <iostream>
#include <fstream> 
#include <iomanip>

#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <time.h>

using namespace std ;

int main(int argc, char * argv[])
{
ifstream f;	//Поток для чтения. 
ofstream g;	//Поток для записи.

float *a, b;
a = new float [100000000000];
long long int i, j, n = 0;

f.open("abc.txt",ios::in); //Открываемфайлврежимечтения. 
if (f)
{
while (!f.eof()) {
f >> a [ n ] ;
n++; 
}

//Сортировка массива. 
for ( i = 0 ; i < n - 1 ; i++)
for ( j = 0 ; j < n - i - 1; j++) 
	if (a[j] > a[j+1])
{
	b = a [ j ] ;
	a [ j ] = a [ j + 1 ];
	a [ j + 1 ] = b ;
}

f.close () ; //Закрываем поток для чтения.

g.open("abc.txt",ios::app); //Открываемпотокдлятого,чтобыдописатьданные. 
g << " \n " ; 
	//Запись в файл символа конца строки
for(i=0; i<n; i++) //Записьвфайл
	if ( i < n - 1) 
	g << a [ i ] << " \t " ; 
	//элемента массива и символа табуляции.
else 
	g << a [ i ] ; 
	//Запись последнего элемента массива 
g.close () ; //Закрытие файла.
}
else 
	cout<<"Файл не найден"<<endl ; 
delete [] a;

return 0 ;
}

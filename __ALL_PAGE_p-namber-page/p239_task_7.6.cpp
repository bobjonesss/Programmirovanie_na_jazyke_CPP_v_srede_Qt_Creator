//	p239 7.6

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

FILE * f ; //Описание файловой переменной.
int i, n, imax, imin;
double *a, max, min;
f=fopen("abc.dat" ,"rb+") ;
	//Открыть файл в режиме чтения и записи.
fread (&n, sizeof ( int ), 1, f ) ; 
	//Считать из файла в переменную n количество элементов в файле.
a = new double [ n ] ; 	//Выделить память для хранения вещественных чисел,
		     	//эти числа будут хранится в массиве a.
fread ( a , sizeof ( double ) , n , f ) ; 
	//Считать из файла в массив a вещественные числа. 
	//Поиск максимального, минимального элемента в массиве a, и их индексов. 

for(imax = imin = 0, max = min = a[0], i=1; i<n; i++)
{
	if (a[i]>max) 
	{
	max=a [ i ] ;
	imax=i ; 
	}
	if (a[i]<min) 
	{
	min=a [ i ] ;
	imin=i ; 
	}
}
//Перемещение указателя к максимальному элементу.
fseek ( f, sizeof ( int ) +imax * sizeof ( double ) , SEEK_SET ) ; 
//Запись min вместо максимального элемента файла. 
fwrite(&min , sizeof (double) , 1, f ) ;
//Перемещение указателя к минимальному элементу.
fseek ( f , sizeof ( int ) + imin * sizeof ( double ) , SEEK_SET ) ; 
//Запись max вместо минимального элемента файла. 
fwrite(&max, sizeof (double) , 1 , f ) ;

//Закрытие файла.
fclose(f);

//Освобождение памяти, выделенной под массив a. 
delete []a;

return 0 ;
}

//	p238 7.5

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
int i, n; 
double *a;
f = fopen ( "abc.dat" , "rb " ) ; 
	//Открыть существующий двоичный файл в режиме чтения. 
fread (&n, sizeof ( int ), 1, f ) ; 
	//Читать из файла целое число в переменную n. 
cout << "n=" << n << "\n";
	//Вывод n на экран.
a=new double [ n ] ; 
	//Выделение памяти для массива из n чисел.
fread ( a, sizeof ( double ) , n , f ) ; 
	//Чтение n вещественных чисел из файла в массив a. 
for(i=0; i<n; cout << a[i] << "\t", i++); 
	//Выводмассиванаэкран.
cout<<endl ;
fclose ( f ) ; 
	//Закрыть файл.


return 0 ;
}

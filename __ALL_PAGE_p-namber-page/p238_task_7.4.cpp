//	p238 7.4

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
double a;
f=fopen ( "abc.dat", "wb " ) ; 
	//Создание двоичного файла в режиме записи. 
cout << "n="; 
cin  >> n; //Вводчислаn.
fwrite(&n,sizeof(int),1,f); 
	//Записьчиславдвоичныйфайл. 
for(i=0;i<n;i++) 
	//Циклдлявводаnвещественныхчисел.
{
cout<<"a=" ; 
cin>>a ; 
	//Ввод очередного вещественного числа.
fwrite(&a, sizeof (double), 1, f ) ; 
//Запись числа в двоичный файл. 
}
fclose ( f ) ; //Закрыть файл.

return 0 ;
}

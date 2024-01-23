//	p141

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

int main(int argc, char * argv[])
{

float x[10] ,b; 
int i ,n;

printf ("\n N=") ; 
scanf ("%d",&n) ; 
printf ("\n Массив X \n") ; 		//Ввод размерности массива.
for ( i = 0 ; i <n ; i ++)
{
printf ("\n Элемент %d \t" , i ) ; 	//Сообщение о вводе элемента. 
scanf ("%f",&b) ; 			//Ввод переменной b.
x [ i ]=b ; 				//Присваивание элементу массива значения переменной b .
}
				     
cout << " sizeof(x) = " << sizeof(x) << "\t  sizeof(x[1]) = " << sizeof(x[1]) << " \n";



return 0 ;

}



//	p140

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

int main(int argc, char * argv[])
{

float x[10]; int i,n;
printf ("\n N=") ; 
scanf ("%d",&n) ; 

//Ввод размерности массива. 
printf ("\n Введите элементы массива X \n") ;
for ( i = 0 ; i < n ; i ++)
scanf("%f",x+i);
//Ввод элементов массива в цикле.
//Обратите внимание, x + i — адрес i-го элемента массива.
				     
cout << " sizeof(x) = " << sizeof(x) << "\t  sizeof(x[1]) = " << sizeof(x[1]) << " \n";

for ( i = 0 ; i < n ; i ++)
printf ("\n элемент массива X %f = ", x[i]) ;


return 0 ;

}



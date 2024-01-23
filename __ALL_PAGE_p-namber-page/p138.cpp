//	p138

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

int main(int argc, char * argv[])
{

double *x ;     //Указатель на double
int k;
cin >> k; //Вводим размер массива k.

    //Выделение памяти для хранения динамического массива из k чисел.
x = new double [ k ] ; 

    //Адрес начала массива хранится в переменной x.
x = (double *) calloc(k,sizeof(float));  //Памятьможнобудетвыделитьтак 
x =(double *) malloc(k*sizeof(float));    //или так
				     
cout << sizeof(x) << " " << sizeof(*x) << " \n";

delete []x;
return 0 ;

}



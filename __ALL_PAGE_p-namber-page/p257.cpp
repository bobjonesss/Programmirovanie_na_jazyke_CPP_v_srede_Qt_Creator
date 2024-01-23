//	p257
	
#include <iostream>
#include <fstream> 
#include <iomanip>

#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <time.h>

//	p256
#include <complex>

using namespace std ;


int main(int argc, char * argv[])
{

double x1 , y1 ;
x1 = -2.3;
y1 = 8.1;
complex <double> b ( x1 , y1 ) ; 
	//Формирование комплексного числа b
	//с действительной частью x1 и мнимой y1. 
cout<<"b^2="<<b*b; 
	//Вывод квадрата комплексного числа.

return 0 ;
}


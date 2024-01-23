//	p252 task 9.3
	
#include <iostream>
#include <fstream> 
#include <iomanip>

#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <time.h>

#include <complex>

using namespace std ;



int main(int argc, char * argv[])
{

complex <double> b(sqrt(3),-1),y; y=pow(b,20) ;
cout << "y=" << y << endl ;
cout << real ( y ) / pow ( 2 , 19 ) << " \t " ;
cout << imag ( y ) / pow ( 2 , 19 ) << " \n " ;

complex <double> a(1,sqrt(3)),c (1,-1),z; z = pow(a/c, 40) ;
cout << "z=" << z << endl ;
cout << real ( z ) / pow ( 2 , 19 ) << " \t " ;
cout << imag ( z ) / pow ( 2 , 19 ) << " \n " ;

return 0 ;
}


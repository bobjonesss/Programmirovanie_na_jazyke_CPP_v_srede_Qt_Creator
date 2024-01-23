//	p258
		
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

complex <double> x (4, -6);
complex <double> y (-7, 2) ; 
cout<<"x*y="<<x*y<<endl ;
cout << " sin ( x ) * cos ( y ) = " << sin ( x ) * cos ( y ) << endl ; 
cout << " con j ( x ) * ln ( y ) = " << conj ( x ) * log ( y ) << endl ;
cout << "sh(y)=" << sinh (y)<<endl ;

return 0 ;
}


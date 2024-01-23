//	p251
	
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

struct complex 
{
double Re; 
double Im ;
};

complex *p;
int i, n, nmax;
double max ;
FILE *f;
f = fopen("complex.dat", "rb") ;
fread (&n, sizeof ( int ), 1, f ) ;
p = new complex[n];
fread (p , sizeof ( complex ), n, f ) ;
//Поиск комплексного числа с максимальным модулем max=sqrt 
max = (p [ 0 ].Re*p [ 0 ].Re+p [ 0 ].Im*p [ 0 ].Im) ; 
for( i=1, nmax=0; i<n; i++)
	if (sqrt(p[ i ].Re*p[ i ].Re+p[ i ].Im*p[ i ].Im) > max) 
	{
	max=sqrt(p[ i ].Re*p[ i ].Re+p[ i ].Im*p[ i ].Im); 
	nmax = i ;

}
cout << "max=" << max << "\t" << nmax << endl;
fclose(f);

return 0 ;
}


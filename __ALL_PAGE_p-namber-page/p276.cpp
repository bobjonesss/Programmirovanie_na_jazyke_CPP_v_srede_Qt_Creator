//	p275
		
#include <iostream>
#include <fstream> 
#include <iomanip>

#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <time.h>

//	p256
#include <complex>

using namespace std;

class spatial_vector 
{

double x, y, z; 

public :
	spatial_vector(double x, double y, double z);

~spatial_vector () 
{ 
	cout << "Работа деструктора\n" ; 
}

double abs() 
{ 
	return sqrt (x*x + y*y + z*z); 
} 

};

spatial_vector :: spatial_vector(double x1, double y1, double z1) 
{
	x = x1;
	y = y1;
	z = z1;
	cout << "Работа конструктора\n" ;
}

int main(int argc, char * argv[])
{

spatial_vector a(3, 4, 0) ;

cout << a.abs() << endl;

return 0 ;
}


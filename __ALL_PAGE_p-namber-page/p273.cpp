//	p273
		
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

public:
	void set(double a, double b, double c);
	double abs(); 
};

void spatial_vector::set(double a, double b, double c) 
{
	x=a; 
	y=b; 
	z=c; 
}

double spatial_vector::abs () 
{
	return sqrt (x*x + y*y + z*z); 
}

int main(int argc, char * argv[])
{

spatial_vector a; 
a.set(1,2,3);
cout << a.abs() << endl;

return 0 ;
}


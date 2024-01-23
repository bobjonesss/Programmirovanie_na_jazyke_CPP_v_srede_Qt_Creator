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

public:
	spatial_vector () ;

~spatial_vector () 
{ 
	cout << "Работа деструктора\n" ; 
} 
double abs() 
{ 
	return sqrt (x*x + y*y + z*z); 
}

};

spatial_vector :: spatial_vector () 
{
	//конструктор класса v e c t o r 
	x=y=z=0;
	cout << "Работа конструктора\n" ;
}

int main(int argc, char * argv[])
{

spatial_vector a ; 
	//создаётся объект a с нулевыми значениями
cout << a.abs() << endl;

return 0 ;
}


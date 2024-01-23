//	p276		
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

class point {
int x, y; 

public:
point(int x, int y) 
{
	this->x=x ; 
	this->y=y ; 
}

void get()
{
	cout << x << " " << y << "\n";
}

};

int main(int argc, char * argv[])
{
	system("clear");
	point a(3, 4) ;
	a.get();

//	cin.ignore(1);
//	cin.clear();

	//getchar();

	system( "read -n 1 -s -p \"Press any key to continue...\"" );
	
	return 0 ;
}


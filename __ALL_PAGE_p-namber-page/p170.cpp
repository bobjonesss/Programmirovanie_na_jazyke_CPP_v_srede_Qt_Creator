//	p170

#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <time.h>

using namespace std ;
int udal (float *x, int k, int n);

int udal(float *x, int k, int n) 
{
int i;
if (k>n-1) 
	return n; 
else
	{
	for ( i = k ; i < n - 1 ; i++)
		x [ i ] = x [ i + 1 ]; 
	n--;
	//	cout << x [ i ]<< "\n";

	return n ; 
	}
}

int main(int argc, char * argv[])
{

float x[19] = {2,4,2,45,5,3,4,33,4,3,4,2,45,5,3,4,33,4,3};

cout << udal(x,5,4) << " " << x [ 0 ]  << "\n";
cout << udal(x,7,3) << " " << x [ 0 ] << "\n";

cout << udal(x,13,3) << " " <<  x [ 0 ] << "\n";
cout << udal(x,17,1) << " " <<  x [ 0 ] << "\n";

cout << udal(x,1,13) << " " <<  x [ 0 ] << "\n";
cout << udal(x,7,11) << " " <<  x [ 0 ] << "\n";

cout << udal(x,0,13) << " " <<  x [ 0 ] << "\n";
cout << udal(x,0,11) << " " <<  x [ 0 ] << "\n";

return 0 ;
}

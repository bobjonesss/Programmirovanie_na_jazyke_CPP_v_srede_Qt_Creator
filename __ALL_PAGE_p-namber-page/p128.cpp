// p 128
	
#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

int main(int argc, char * argv[])
{

int i;
cout<<"В командной строке "<<argc<<" аргументов\n" ;

for ( i = 0; i < argc; i++ )
	cout << "Аргумент No " << i << " " << argv[i] << endl;

int f = 12342;
int *a = &f; 

cout<<"a= "<< a <<" *a= " << *a << " f= " << f << "\n" ;

  return 0 ;
}



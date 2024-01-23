//	Задача 4.10.

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

long int fibonachi (unsigned int n) 
{
if ((n==0)||(n==1)) 
	return n ;
else
	return fibonachi(n-1)+fibonachi(n-2);
}

int main(int argc, char * argv[])
{
	int i; long int f; 
	cout << "i="; cin >> i; 
	f = fibonachi ( i ); 
	cout << "f=" << f << "\n" ;

return 0 ;

}



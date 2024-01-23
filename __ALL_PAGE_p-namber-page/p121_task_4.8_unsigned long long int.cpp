//	Задача 4.8.

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

unsigned long long int factorial(int n) 

{
if (n <= 1) 
	return n;
else
	return n * factorial(n-1); 
}

int main(int argc, char * argv[])
{

for(int i=1; i<=77; ++i)
{
unsigned long long int f; 
cout << "i="; //cin >> i;
f = factorial( i ) ; 
cout << i << "\t!= " << f << "\n" ; 
}

return 0 ;
}



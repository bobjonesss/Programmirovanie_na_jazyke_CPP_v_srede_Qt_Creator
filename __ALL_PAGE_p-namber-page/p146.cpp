//	p146

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

int main(int argc, char * argv[])
{



	int X[10] = {1,3,4,5,6,3,6,4,76,44};
	int n = 10;
	int Nmax=0;
	int i=0;
	int Max=X[0];

for (; i<n; i++) 

	if (Max<X[i])
{
Max=X[ i ] ;
Nmax=i ;
}
cout <<" M a x = "<<Max<<" \n " ;
cout <<" N m a x = "<<Nmax<<" \n " ;

return 0 ;

}



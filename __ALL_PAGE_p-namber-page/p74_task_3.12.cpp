//	Задача 3.12.

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

#define PI 3.14159 //Определение константы


int main(int argc, char * argv[])
{

unsigned long long int factorial ;
unsigned int N, i ;
for (cout<<"N=",cin>>N,factorial=1,i=2;
		i<=N;
		factorial*=i,i++); 
cout<<"факториал="<<factorial <<"\n" ;


return 0 ;

}


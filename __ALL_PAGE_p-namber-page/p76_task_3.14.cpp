//	Задача 3.14.

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

#define PI 3.14159 //Определение константы


int main(int argc, char * argv[])
{

unsigned int N, i ,K;
cout<<"N=" ; cin>>N;
for (K=0,i=1;i<=N/2;i++) if (N%i==0) K++; cout <<" K = "<<K<<" \n " ;

return 0 ;

}


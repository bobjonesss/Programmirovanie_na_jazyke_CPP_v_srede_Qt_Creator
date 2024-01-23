//	Задача 3.16.

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

#define PI 3.14159 //Определение константы


int main(int argc, char * argv[])
{

unsigned long int N, M;
unsigned int kol ;
cout<<"N=" ; cin>>N;
for (M=N, kol=1; M/10>0; kol++,M/=10) ;
cout<<"kol="<<kol<<endl ;

return 0 ;

}


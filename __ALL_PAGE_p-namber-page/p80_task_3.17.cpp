//	Задача 3.17.

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

#define PI 3.14159 //Определение константы


int main(int argc, char * argv[])
{

unsigned long int N,M; int kol , i ; cout<<"N=" ; cin>>N;
for (kol=1,M=N;M/10>0; kol++,M/=10);
for (M=N,i=0;i<kol;M/=10,i++)
if (M%10==0) cout<<"Позиция = "<<i<<endl;

return 0 ;

}


//	Задача 3.11.

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

#define PI 3.14159 //Определение константы


int main(int argc, char * argv[])
{

unsigned int a, b ;
cout << "A=" ; cin >> a ;
cout << "B="; cin >> b;

do
if (a>b) a=a-b; 
else b=b-a; 
while (a!=b) ; 
cout<<"НОД="<<a<<"\n" ;

return 0 ;

}


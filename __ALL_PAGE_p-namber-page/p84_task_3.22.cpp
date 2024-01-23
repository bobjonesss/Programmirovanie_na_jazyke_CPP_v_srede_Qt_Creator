//	Задача 3.22.

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

#define PI 3.14159 //Определение константы

int main(int argc, char * argv[])
{

float A,B; int i,K,N;
cout << "N=" ; cin >> N;
for ( K = 0, cout << "A=", cin >> A, i = 2; i <= N; i++) {
cout << "B=" ; cin >> B; if (A*B < 0) K++;
A = B; }
cout << " K = " << K << " \n " ;

return 0 ;

}


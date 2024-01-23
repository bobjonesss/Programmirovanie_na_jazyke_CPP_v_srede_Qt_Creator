//	Задача 3.19.

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

#define PI 3.14159 //Определение константы

int main(int argc, char * argv[])
{
unsigned long int N,M,R,S;
int kol, i;
cout << "N=" ; cin >> N;
for ( R = 1, kol = 1, M = N; M/10 > 0; kol++, R *= 10, M /= 10 );
for ( S = 0, M = N, i = 1; i <= kol; S += M%10*R, M /= 10, R /= 10, i++); 
if (N == S) cout << "Число - палинром" << endl;
else 
	cout << "Число не является палиндромом" << endl ;

return 0 ;

}


//	Задача 4.3.

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

#define PI 3.14159 //Определение константы

unsigned int Cmax(unsigned long long int P) 
{
	unsigned int max;
	if (P == 0) max = 0;
	for (int i = 1 ; P != 0; P /= 10)
	{
		if (i == 1) {max = P%10; i++;} 
		if (P % 10 > max) max = P % 10;
	}
	return max; 
}

unsigned int Cmin(unsigned long long int P) 
{
	unsigned int min ;
	if (P == 0) min = 0;
	for ( int i = 1; P != 0; P /= 10)
	{
		if (i == 1) {min = P % 10; i++; } if (P % 10 < min) min = P % 10;
	}
	return min ; 
}

int main(int argc, char * argv[])
{

unsigned int N, k;
unsigned long long int X;
for (cout << "N=", cin >> N, k = 1; k <= N; k++) 
{
	cout << "X=" ; cin >> X;
	cout << "Максимальная цифра=" << Cmax(X) ;
	cout << " Минимальная цифра=" << Cmin(X) << endl ;
}	

return 0 ;

}


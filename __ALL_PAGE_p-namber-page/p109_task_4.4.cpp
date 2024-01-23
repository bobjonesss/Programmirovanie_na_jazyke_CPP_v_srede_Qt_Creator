//	Задача 4.4.

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;


bool palindrom(unsigned long long int N)
{	//Функция определяет, является ли число N палиндромом, возвращает true, если N —
	//палиндром, и false в противном случае
unsigned long int M, R, S;
int kol, i;
for ( R = 1, kol = 1, M = N; M / 10 > 0; kol++, R *= 10, M /= 10);
for ( S = 0 , M = N, i = 1; i <= kol; S += M % 10 * R, M /= 10, R /= 10, i++ ) ;
if ( N == S ) return true;
else return false; 
}

int main(int argc, char * argv[])
{

	unsigned long long int X;
	int K;
	for ( K = 0, cout << "X=" , cin >> X; X != 0; cout << "X=", cin >> X)
	if ( palindrom (X) ) K++;

	cout << "Количество палиндромов равно K=" << K << endl ;

return 0 ;

}


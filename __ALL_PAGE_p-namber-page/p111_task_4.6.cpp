//	Задача 4.6.

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

#define PI 3.14159 //Определение константы

unsigned long long int NC(unsigned long long int N, unsigned int b) 
{
unsigned long long int S, P;
for (S = 0, P = 1; N != 0; S += N % b * P, P *= 10, N /= b) ;
return S ; 
}

int main(int argc, char * argv[])
{
	unsigned long long int X;
	cout << "X="; cin >> X; 	//Ввод числа X. 
			     		//Перевод числа X в заданные системы счисления. 
	cout << X << "(10)=" << NC(X, 2) << "(2)" << endl;
       	cout << X << "(10)=" << NC(X, 5) << "(5)" << endl; 
	cout << X << "(10)=" << NC(X, 7) << "(7)" << endl;

return 0 ;

}


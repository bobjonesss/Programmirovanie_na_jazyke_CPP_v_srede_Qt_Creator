//	Задача 4.5.

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

unsigned long long int DecNC(unsigned long long int N, unsigned int b) 
{
//Функция выполняет перевод числа N, 
//заданного в b-ичной системе счисления,
//в десятичную систему счисления
unsigned long long int S, P;
for (S = 0, P = 1; N != 0; S += N % 10 * P, P *= b, N /= 10); 
return S ;
}

int main(int argc, char * argv[])
{

unsigned long long int X,Y; unsigned int bX,bY;
//Вывод заданных чисел в десятичной с/
cout << "X=" ; cin >> X; 	//Ввод числа X.  
cout << "b=" ; cin >> bX;	//Ввод основания с/с.
cout << "Y=" ; cin >> Y;	//Ввод числа X. 
cout << "b=" ; cin >> bY;	//Ввод основания с/с.

//Вывод заданных чисел в десятичной с/с. 
cout << X << "(" << bX << ")=" << DecNC(X, bX) << "(10)" << endl ; 
cout << Y << "(" << bY << ")=" << DecNC(Y, bY) << "(10)" << endl ; 

//Вычисление суммы и вывод результата. 
cout << X << "(" << bX << ")+" << Y << "(" << bY << ")=" ; 
cout << DecNC(X, bX) + DecNC(Y, bY) << "(10)" << endl ;	

return 0 ;

}


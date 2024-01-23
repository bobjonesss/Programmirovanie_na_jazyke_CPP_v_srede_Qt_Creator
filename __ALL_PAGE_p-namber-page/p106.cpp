
//Имена переменных, указанные 
//в прототипе функции, 
//компилятор игнорирует:
//Записи равносильны.
//int func(int a,int b); 
//int func(int ,int) ;


#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

#define PI 3.14159 //Определение константы

int equation( float a, float b, float c, float *x1, float *x2) 
{ 
	float D = b * b - 4 * a * c;
	if ( a == 0 ) 
		return -1; 
	else if ( D < 0 ) 
		return 1;
	else
	{
	*x1 = ( -b + sqrt(D) ) / 2 / a ; 
	*x2 = ( -b - sqrt(D) ) / 2 / a ; 
	
	return 0 ;
	} 
}

int main(int argc, char * argv[])
{

float A, B, C, X1, X2; int P;

	cout << "Enter the coefficients of the equation:" << endl;
	cout << "A="; cin >> A;
	cout << "B="; cin >> B;
	cout << "C="; cin >> C;

	P = equation( A, B, C, &X1, &X2);
	if (P == -1) cout << " input Error " << endl ;
	else if (P == 1) cout << "No real roots" << endl;
	else cout << "X1=" << X1 << " X2=" << X2 << endl ;

return 0 ;

}


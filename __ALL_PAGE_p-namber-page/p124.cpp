//	
	
#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

float Pow( float a, int k, int m ) //Первая функция
{
	cout << "Функция 1 \t"; 
	if (a == 0)
		return 0;

	else if (k == 0)
		return 1; 

	else if (a > 0)
		return exp((float) k / m * log(a)); 
	
	else if (m % 2 != 0)
		return -(exp((float) k / m * log(-a)));
	// if not return = default;
	return 0;
}

float Pow( float a, int n ) //Вторая функция
{
	float p; int i;
	cout << "Функция 2 \t"; 
	if (a == 0)
		return 0; 
	else if (n == 0)
		return 1;
	else if (n < 0) 
	{
		n = -n ;
		p = 1;
	
	for ( i = 1; i <= n; i++)
	p *= a;

	return (float)1/p;
	}
	else
	{
		p=1;
		for ( i = 1; i <= n; i++) 
		p *= a;
	return p;
	} 
}

float Pow( int a, int n ) //Третья функция
{ 
	int i,p; 

	cout << "Функция 3 \t"; 

	if (a == 0)
		return 0 ; 
	else if (n == 0)
		return 1 ;
	else if (n < 0) 
	{
		n = -n;
		p = 1;

		for ( i = 1; i <= n; i++)
		p *= a;

		return (float)1/p;
	}
	
	else
	{
		p = 1;
		for ( i = 1; i <= n ; i++) 
		p *= a;
		return p;
	}
}

int main(int argc, char * argv[])
{
	float a; int k, n, m;
	cout << "a="; cin >> a;
	cout << "k="; cin >> k; 
	cout << "s=" << Pow(a,k) << "\n"; 	//Вызов 2-й функции. 
	cout << "s=" << Pow((int)a,k) << "\n";	//Вызов 3-й функции.

	cout << "a="; cin >> a;
	cout << "k="; cin >> k;
	cout << "m="; cin >> m;
	cout << "s=" << Pow(a, k, m) << endl;

return 0 ;
}



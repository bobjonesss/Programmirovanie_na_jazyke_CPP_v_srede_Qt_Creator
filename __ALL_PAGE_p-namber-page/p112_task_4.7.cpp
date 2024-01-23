//	Задача 4.7.


// • метод половинного деления, (дихотомии)
// • метод хорд,
// • метод касательных (метод Ньютона),
// • метод простой итерации.

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

//Функция, определяющая левую часть уравнения f(x) = 0. 

double f( double x )
{
	return ( x * x - cos ( 5 * x ) ) ; 
}

//Функция, реализующая метод половинного деления.
int Dichotomy(double a, double b, double *c, double eps) 
{
int k=0;
	do
	{
	*c = (a+b) / 2;
		if (f(*c)*f(a)<0) b = *c; 
		else a=*c;
	k++;
	}
	while (fabs(a-b) >= eps); 

	return k ;
}

//Функция, реализующая метод хорд.
int Chord(double a, double b, double *c, double eps) 
{
int k=0;
	do
	{
	*c = a - f ( a ) / ( f ( b ) - f ( a ) ) * ( b - a ) ;
	if (f( *c ) * f(a) > 0) a = *c; 
	else b = *c;
	k++;
	}
	while (fabs(f(*c)) >= eps); 
	
	return k ;
}

double f1 ( double x ) //Первая производная функции f (x). 
{
return(2*x+5*sin (5*x) ) ; 
}

double f2 ( double x ) //Вторая производная функции f (x). 
{
return(2+25*cos(5*x));
}

//Функция, реализующая метод касательных.
int Tangent(double a, double b, double *c, double eps) 
{
int k=0;
if (f(a)*f2(a)>0) *c=a; 
else *c=b;

	do
	{
	*c=*c-f (*c)/f1 (*c) ;
	k++; }
	while (fabs(f(*c))>=eps);

	return k ; 
}

double fi (double x,double L) //Функция, заданная выражением 4.4. 
{
return ( x+L * f ( x ) ) ; 
}

//Функция, реализующая метод простой итерации.
int Iteration(double *x, double L, double eps) 
{
	int k=0; double x0;
	do
	{
	x0 = *x;
	*x = fi ( x0, L ) ;
	k++; 
	}
	while (fabs(x0-*x) >= eps);
	return k ; 
}

//int main(int argc, char * argv[])
int main()
{

double A, B, X, P;
double ep = 0.001;
int K;
cout << "a=" ; cin >> A;
cout << "b=" ; cin >> B;
cout << "Решение уравнения x^2-cos(5*x)=0."<<endl; 
cout << "Метод дихотомии:"<<endl ;
K = Dichotomy ( A, B , &X , ep ) ;
cout <<" Найденное решение x = "<<X ;
cout<<", количество итераций k="<<K<<endl ; 
cout<<"Метод хорд:"<<endl ;
K = Chord ( A , B , &X , ep ) ;
cout << " Найденное решение x="<<X;
cout<<", количество итераций k="<<K<<endl ; 
cout<<"Метод касательных:"<<endl ;
K = Tangent ( A , B , &X , ep ) ;
cout<<" Найденное решение x="<<X;
cout<<", количество итераций k="<<K<<endl ; 
cout<<"Метод простой итерации:"<<endl ;
X = A;
cout << "L=" ; cin >> P;
K = Iteration ( &X , P , ep ) ;
cout << " Найденное решение x=" << X;
cout << ", количество итераций k=" << K << endl ;

return 0 ;

}



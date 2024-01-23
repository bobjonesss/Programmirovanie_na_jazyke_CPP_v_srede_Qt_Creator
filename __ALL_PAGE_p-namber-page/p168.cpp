//	p168

#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <time.h>

using namespace std ;

//Функция вычисления определённого интеграла методом Чебышёва.
//(a, b) — интервал интегрирования, *fn — указатель на функцию типа double f (double). 
double int_chebishev(double a, double b,
double ( *fn ) (double) )
{
   int i,n=9;
   double s ,
   t[9]={-0.911589, -0.601019, -0.528762, -0.167906, 0, 0.167906, 0.528762,
	0.601019 , 0.911589}; 
   for(s=i=0;i<n; i++)
      s+=fn ((b+a)/2+(b-a)/2*t [ i ]) ; s *= (b-a)/n;
      return s ;
}

//Функция вычисления определённого интеграла методом Гаусса.
//(a, b) — интервал интегрирования, *fn — указатель на функцию типа double f (double) 
double int_gauss(double a, double b, double (*fn)(double))
{
   int i,n=8;
   double s ,
   t [8]={ -0.96028986 , -0.79666648 , -0.52553242 , -0.18343464 , 0.18343464 ,
   0.52553242 , 0.79666648 , 0.96028986} ,
   A[8]={0.10122854 , 0.22238104 , 0.31370664 , 0.36268378 , 0.36268378 ,
   0.31370664 , 0.22238104 , 0.10122854}; 
   for(s=i=0;i<n; i++)
   s+=A[ i ] * fn ((b+a)/2+(b-a)/2*t [ i ]) ; s *= (b-a) /2;
   return s ;
}

//Функции f1 и f2 типа double f(double), указатели на которые будут передаваться //в int_gauss и int_chebishev.
double f1 ( double y )
{
return sin (y)*sin (y)*sin (y)*sin (y) ; }


double f2 ( double y ) {
return pow(2*y-1 ,0.5) ; }

int main(int argc, char * argv[])
{

double a,b;
cout<<"Интеграл sin(x)^4=\n" ;
cout<<"Введите интервал интегрирования\n" ;
cin>>a>>b;
//Вызов функции int_gauss(a, b, f1), f1 — имя функции, интеграл от которой надо посчитать. 
cout<<"МетодГаусса:"<<int_gauss(a, b, f1)<<endl;
//Вызов функции int_chebishev(a, b, f1),
//f1 — имя функции, интеграл от которой надо посчитать.
cout<<"Метод Чебышёва:"<<int_chebishev(a,b,f1)<<endl;
cout<<"Интеграл sqrt(2*x-1)=\n";
cout<<"Введите интервалы интегрирования\n" ;
cin>>a>>b;
//Вызов функции int_gauss(a, b, f2), f2 — имя функции, интеграл от которой надо посчитать. 
cout<<"Метод Гаусса:"<<int_gauss(a, b, f2)<<endl;
//Вызов функции int_chebishev(a, b, f2),
//f2 — имя функции, интеграл от которой надо посчитать.
cout<<"Метод Чебышёва:"<<int_chebishev(a,b,f2)<<endl;

return 0 ;
}

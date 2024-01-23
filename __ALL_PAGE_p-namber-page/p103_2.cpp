
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

double radian ( int deg, int min, int sec )
{
	return (deg*PI/180+min*PI/180/60+sec*PI/180/60/60) ;
}

int main(int argc, char * argv[])
{

int DEG, MIN, SEC; 
double RAD; 
	//Ввод данных.
	//Величина угла: 
	//градусы, 
	//минуты, 
	//секунды.
cout << "Inpout:" << endl; 
cout << "DEG="; cin >> DEG; 
cout << "MIN="; cin >> MIN; 
cout << "SEC="; cin >> SEC;

//Величина угла в радианах.
RAD = radian (DEG, MIN, SEC) ;
cout << "Value in radian A=" << RAD << endl;	

//Вычисление значения выражения и его вывод.
cout << "sin(A)^2+cos(A)^2=";
cout << pow(sin(RAD),2)+pow(cos(RAD),2) << endl ;

return 0 ;

}

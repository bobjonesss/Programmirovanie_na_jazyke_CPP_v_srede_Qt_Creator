//	Задача 2.4.

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

int main(int argc, char * argv[])
{

int i ; 	//Определение целочисленной переменной.
double d ; 	//Определение вещественной переменной.
cout << " i = " ; cin >> i ; //Ввод переменной i .
cout << " d = " ; cin >> d ; //Ввод переменной d .
//Размер памяти , отведённой под переменную i .
cout << "Размер i : " << sizeof i << " \n" ;
//Размер памяти, отведённой под переменную d .
cout << "Размер d : " << sizeof d << " \n" ;
//Размер памяти, отведённой под значение выражения i+d .
cout << "Размер i + d : " << sizeof ( i + d ) << " \n" ;
cout << "Размер строки <С Новым Годом!>:" ;
//Размер памяти, отведённой под строку.
cout << sizeof "С Новым годом!" << " \n" ;
//Вычисление размеров различных типов данных:
cout << "Размер char : " << sizeof ( char ) << " \n" ;
cout << "Размер int : " << sizeof ( int ) << " \n" ;
cout << "Размер short int : " << sizeof ( short int ) << " \n" ;
cout << "Размер long int : " << sizeof ( long int ) << " \n" ;
cout << "Размер long long int : " ;
cout << sizeof ( long long int ) << " \n" ;
cout << "Размер float : " << sizeof ( float ) << " \n" ;
cout << "Размер double : " << sizeof ( double ) << " \n" ;
cout << "Размер longdouble : " << sizeof ( long double ) << " \n" ;

	return 0 ;
}


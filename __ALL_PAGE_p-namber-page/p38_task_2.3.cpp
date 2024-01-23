//	Задача 2.3.

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

int main(int argc, char * argv[])
{

unsigned int P, S ; 		//Определение целочисленных переменных без знака .
cout << " P = " ; 		//Вывод на экран символов P=.
cin >> P ; 			//Ввод заданного числа P .
S = P % 10 * 100 + P / 10 % 10 * 10 + P / 100; //Вычисление нового числа S .
cout << " S = " << S << endl ; 	//Вывод на экран символов S= и значения переменной S .
	return 0 ;
}


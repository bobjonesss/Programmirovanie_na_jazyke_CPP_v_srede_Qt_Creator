//	Задача 4.1

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

#define PI 3.14159 //Определение константы

unsigned int prostoe (unsigned int N) //Описание функции. 
{
	//Функция определяет, является ли число простым. 
	int i, pr;
	for ( pr = 1 , i = 2 ; i <= N / 2 ; i++)
	if (N % i == 0) 
		{ pr = 0; break;}
	return pr ; 
}

unsigned int soversh (unsigned int N) //Описание функции.
{
	//Функция определяет, является ли число совершённым. 
	unsigned int i, S;
	for ( S = 0 , i = 1 ; i <= N / 2 ; i++)
	if (N % i == 0) S += i ; //Сумма делителей. 
	if (S == N) return 1;
	else return 0;
}

int main(int argc, char * argv[])
{

unsigned int i, N, X, S, kp, ks;
long int P;
cout << "N="; cin >> N; 
for( kp = ks = S = 0, P = 1, i = 1; i <= N; i++) 
{
	cout << "X=" ; cin >> X; //Вводится элемент последовательности.
	if ( prostoe (X) ) // X — простое число.
	{
		kp++; 	//Счётчик простых чисел. 
		P *= X; //Произведение простых чисел.
	}

	if ( soversh (X) ) //X — совершённое число.
	{
		ks++; //Счётчик совершённых чисел. 
		S += X; //Сумма совершённых чисел.
	} 
}

if (kp > 0) //Если счётчик простых чисел больше нуля, 
	  //считаем среднее геометрическое и выводим его,

	cout << "Среднее геометрическое=" << pow(P,( float ) 1/kp) << endl ;

else //в противном случае –– сообщение об отсутствии простых чисел. 

cout << "Нет простых чисел\n" ;

if ( ks > 0) //Если счётчик совершённых чисел больше нуля, 
	//считаем среднее арифметическое и выводим его,
	cout << "Среднее арифметическое=" << (float ) S / ks << endl ;
else //в противном случае — сообщение об отсутствии совершённых чисел.

cout << "Нет совершённых чисел\n" ;

return 0 ;

}


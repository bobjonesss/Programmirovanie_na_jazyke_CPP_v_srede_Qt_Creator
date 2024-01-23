//	Задача 4.2.

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

#define PI 3.14159 //Определение константы

unsigned int prostoe (unsigned int N) 
{
	int i,pr;
	for ( pr = 1 , i = 2 ; i <= N / 2 ; i++)
	if (N % i == 0) {pr = 0; cout << N << " ne prostoe\n"; break;} 
	return pr ;
}

int main(int argc, char * argv[])
{

int kp = 0, knp = 0, min, max, N;
for ( cout << "N=", cin >> N; N != 0; cout << "N=", cin >> N )
	//В цикле вводится элемент последовательности N.

	if ( prostoe(N) ) 	//N — простое число ,
	{
		cout << N << " prostoe\n";
		kp++; //счётчик простых чисел.
		if ( kp == 1) min = N; 		
		//Предполагаем, что первое простое число минимально,
		else if (N < min) { min = N; } 	
		//если найдётся меньшее число, сохраняем его. 
	}
	
	else //N — простым не является, 
	{
	knp++; //счётчик чисел не являющихся простыми.

	if (knp == 1) max = N; //Предполагаем, что первое не простое число максимально, 
	else if (N > max) max = N; //если найдётся большее число, сохраняем его.
	}
if (kp > 0) //Если счётчик простых чисел больше нуля,
	cout << " m i n = " << min << " \t " ; //выводим значение минимального простого числа, 
else //в противном случае —
	cout << "Нет простых чисел"; //сообщение об отсутствии простых чисел.
if ( knp > 0) //Если счётчик чисел не являющихся простыми больше нуля,
	cout << " m a x = " << max << endl; 
else //в противном случае —
	cout << "Нет составных чисел" ; 
//выводим значение максимального числа, 
//сообщение об отсутствии чисел
//не являющихся простыми.

return 0 ;

}


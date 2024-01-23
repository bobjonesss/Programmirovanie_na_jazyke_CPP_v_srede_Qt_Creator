//	p147 task 5.3

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

bool prostoe (int N) { 
	int i; 
	bool pr;
if (N<2) pr=false;
else
for ( pr = true, i = 2 ; i <= N / 2 ; i++ )
	if ( N%i == 0) 
	{
	pr=false ;
	break ; 
	}
return pr ; 
}

int main(int argc, char * argv[])
{

int i, k, n, nom, min, *x;

cout << "n="; 
cin >> n; 	//Ввод количества элементов в массиве. 
x = new int [n]; 	//Выделяем память для динамического массива x. 
cout << "Введите элементы массива X:\n" ; //Ввод элементов массива.
for ( i = 0 ; i <n ; i++)
cin >> x [ i ] ;
//С помощью цикла по переменной i, перебираем все элементы в массиве x, 
//k — количество простых чисел в массиве.
for ( i = k = 0; i <n; i++)
//Проверяем, является ли очередной элемент массива простым числом.
if (prostoe(x[i])) 	//Еслиx[i]—простоечисло. 
{
k++; 	//Увеличиваем счётчик количества простых чисел в массиве. 
	//Если текущий элемент является первым простым числом в массиве, 
	// объявляем его минимумом, а его номер сохраняем в перемнной nom.
if (k == 1) 
{
	min=x[i];
	nom=i;
} 
else
//Все последующие простые числа в массиве сравниваем с минимальным простым числом. 
//Если текущее число меньше min, перезаписываем его в переменную min,
//а его номер — в переменную nom.
if (x[i] < min) 
{ 
	min=x[i];
	nom=i;
} 
}
//Если в массиве были простые числа, выводим значение и номер минимального простого числа. 
if (k>0)
cout << "min=" << min << "\tnom=" << nom << endl ;
//Иначе выводим сообщение о том, что в массиве нет простых чисел. 
else 
	cout << "Нет простых чисел в массиве" << endl ;

return 0 ;
}

//	p153 task 5.6

#include <iostream>
#include <stdio.h> 
#include <math.h>


bool prostoe (int N) 
{
int i;
bool pr;

if (N < 2) 
	pr = false; 
else
   for ( pr = true, i = 2 ; i <= N / 2 ; i++ ) 
	if ( N%i == 0)
   {
      pr = false ;
      break ; 
   }
   return
   pr;
}

using namespace std ;


int main(int argc, char * argv[])
{

int i, k, n, nmax, nmin, p, *x;
cout << "n="; 
cin >> n; //Вводколичестваэлементоввмассиве. 
x = new int [n]; //Выделяем память для динамического массива x. 
cout << "Введите элементы массива X" ; //Ввод элементов массива.
for ( i = 0 ; i < n ; i++)
cin >> x [ i ] ;

//Поиск номеров максимального и минимального элементов в массиве. 
for( nmax = nmin = i = 0; i < n; i++)
{
	if (x[i] < x[nmin]) nmin = i ;
	if (x[i] > x[nmax]) nmax = i; 
}
if (nmin<nmax) 
      for(p = 1, k = 0, i = nmin+1; i < nmax; i++)

//Обратите особое внимание на использование в следующей строке фигурной скобки 
//(составного оператора). В цикле всего один оператор!!! При этом, при отсутствии 
//составного оператора, программа начинает считать с ошибками!!!
{
//Проверяем, является ли очередной элемент массива простым числом. 
if (prostoe(x[i])) //Еслиx[i]—простоечисло.
{
//Домножаем y[i] на p, а также увеличиваем счётчик количества простых чисел в массиве.
k++;
p *= x [ i ] ; 
}
}
else
for( p = 1, k = 0, i = nmax+1; i < nmin; i++)
//Проверяем, является ли очередной элемент массива простым числом. 
if (prostoe(x[i])) //Еслиx[i]—простоечисло.
{
//Домножаем y[i] на p, а также увеличиваем счётчик количества простых чисел в массиве. 
	k++;
	p *= x [ i ] ;
}
//Если в массиве были простые числа, выводим среднее геометрическое этих чисел на экран
if (k > 0) 
	cout << "\nSG: " << pow(p,1./k) << endl ;
//Иначе выводим сообщение о том, что в массиве нет простых чисел.
else 
	cout << "Нет простых чисел в массиве" << endl ;

return 0 ;
}

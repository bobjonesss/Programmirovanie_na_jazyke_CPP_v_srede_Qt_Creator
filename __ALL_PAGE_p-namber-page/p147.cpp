//	p147

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

int main(int argc, char * argv[])
{

float *X;
int i, N, nom;

cout << "Введите размер массива " ; 
cin >> N; //Ввод размерности динамического массива
X = new float [N] ; //Выделение памяти для хранения динамического массива X. 
cout << "Введите элементы массива X\n" ; //Ввод динамического массива X.
for ( i = 0 ; i < N ; i++ )
cin >> X [ i ] ;
//В переменной nom будем хранить номер максимального элемента.
nom = 0; //Предположим, что максимальным элементом является элемент с номером 0.
for ( i = 1 ; i < N ; i++ )
//Если очередной элемент больше X[nom], значит nom не является номером максимального //элемента, элемент с номером i больше элемента X[nom], поэтому переписываем
//число i в переменную nom.
if (X[i]>X[nom]) nom=i;
cout << "Максимальный элемент=" << X[nom] << ", его номер=" << nom << endl ;

return 0 ;

}



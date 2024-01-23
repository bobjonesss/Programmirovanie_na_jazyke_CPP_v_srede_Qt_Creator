//	Задача 5.1.

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

//Текст функции prostoe. 
bool prostoe (int N) 
{
	int i;
	bool pr ;
	if (N<2) pr=false;
	else
for ( pr = true, i = 2 ; i <=N / 2 ; i++ )
if (N%i==0) 
{
	pr=false ;
	break ; 
}
return pr;
}

int main() 
{

int *X,i,N,S,P;
cout<<"Введите размер массива " ; 

cin>>N; //Ввод размерности массива.
X=new int [N]; 
//Выделение памяти для хранения динамического массива X. 
cout<<"Ведите массив X\n" ; 
//Ввод массива X.
for ( i = 0 ; i <N ; i++ )
{ 
	cout << " X ( " << i << " ) = " ; 
	cin >>X [ i ] ; 
}

for(P=1,S=i=0;i<N;i++) //Вциклеперебираемвсеэлементымассива 
{
	//Если очередной элемент массива — простое число, добавляем его к сумме. 
	if (prostoe(X[i])) S+=X[i];

	//Если очередной элемент массива отрицателен, умножаем его на P. 
	if (X[i]<0) P*=X[i];
}
cout << "S=" <<S<<"\tP="<<P<< endl ; //Вывод S и P на экран. 

delete [ ] X; //Освобождение занимаемой массивом X памяти.

return 0 ;

}



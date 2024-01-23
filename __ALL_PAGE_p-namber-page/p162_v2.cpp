//	p162

#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <time.h>

using namespace std ;


int main(int argc, char * argv[])
{

int n, i, b, j;
bool pr = true ;
cout << " n="; 
cin >> n;
float y[n];
for (i = 0; i < n; i++) //Вводмассива. 
{
cout << "\n Y[" << i << "]=";
cin >> y [ i ] ; 
}

for(j = 1; pr; j++) //Упорядочиваниеэлементовмассивапоубываниюихзначений. 
{ //Вход в цикл, если массив не отсортирован (pr=true).
for(pr = false, i = 0; i < n-j; i++) //Предполагаем, что массив уже отсортирован 
				////(pr=false ) .
if (y[i] < y[i+1])//Если текущий элемент меньше следующего 
{
b = y [ i ] ; //Сохранить значение текущего элемента
	      //
y [ i ] = y [ i + 1]; //Заменить текущий элемент следующим
y [ i + 1] = b ; //Заменить следующий элемент текущим
pr = true; //Элементы менялись местами, массив ещё не отсортирован (pr=true)
} 
}
for (i = 0; i < n; i++) 
	cout<<y[i]<<"\t";//Выводупорядоченногомассива
				   
return 0 ;
}

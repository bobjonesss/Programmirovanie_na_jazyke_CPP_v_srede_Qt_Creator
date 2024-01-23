//	p161

#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <time.h>

using namespace std ;


int main(int argc, char * argv[])
{

int n, i, b, j;
cout << " n="; 
cin >> n; 
float y[n];

for (i = 0; i < n; i++)
{
//Вводмассива.
cout << "\n Y[" << i << "]=";
cin >> y [ i ] ; 
}

for(j=1;j<n;j++) //Упорядочиваниеэлементоввмассивеповозрастаниюихзначений. 
for ( i = 0 ; i < n - j ; i++)
if (y[ i]>y[ i+1]) //Если текущий элемент больше следующего
{
b = y [ i ] ; //Сохранить значение текущего элемента
y [ i ] = y [ i +1 ]; //Заменить текущий элемент следующим
y [ i +1] = b ; //Заменить следующий элемент на сохранённый в b
}
for (i = 0; i < n; i++) 
	cout<<y[i]<<"\t"; //Выводупорядоченногомассива

return 0 ;
}

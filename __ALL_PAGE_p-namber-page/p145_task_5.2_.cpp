//	Задача 5.1.

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

int main() 
{
	int AA[20] = {123,123,1324,345,3465,345,234,245,346,345,234,345,456,345,2345,2345,2345,234,234,234};


const 	int k = 20;
	int A[k];

for (int i= 1; i < k; i++)
	       A[i] = AA[i];

for (int i= 1; i < k; i++)
	A[i] = A[i] + pow(2, i);

const 	int m = 10;
	int B[m];

for (int m=-1, i=0; i<k; i++) 
{
if(A[ i ] % 2 == 0) 
{
	m++; 
	B[m]=A[ i ] ;
}
}

cout<<"###################"<<endl ;

//Если элемент чётный, то
//увеличить значение индекса массива В
//и записать элемент в массив В.
if (m>-1) //Если чётные элементы найдены, то распечатать сформированный массив. 
	for (int i=0;i<=m;cout<<B[i]<<"\n",i++);
else //иначе, выдать сообщение, 
	cout<<"Массив B не сформирован!"<<endl ;

cout<<"###################"<<endl ;

for (int i= 1; i < 11; i++)
	 cout<<  pow(2, i) << " \n";


return 0 ;

}



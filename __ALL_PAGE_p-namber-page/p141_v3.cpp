//	p141

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

int main(int argc, char * argv[])
{

int *X,N, i ;
cout << "\n N=" ; 
cin >> N; //Ввод размерности массива.

X = new int [N]; //Выделение памяти для динамического массива из N элементов. 

for ( i=0; i<N; i++)
{
cout << "\n X["<<i<<"]="; 	//Сообщение о вводе элемента.
cin  >> X[ i ] ; 			//Ввод элементов массива в цикле. 
}

delete [] X;
				     
cout << " sizeof(x[3]) = " << sizeof(X[1]) << " sizeof(x) = " \
	     << sizeof(X) << "\t  sizeof(*x]) = " << sizeof(*X) << " \n";

//Вариант 1. Вывод массива в виде строки. 
for(i=0;i<N;i++) printf("%d \t",X[i]); 

//Вариант 2. Вывод массива в виде столбца. 
for(i=0;i<N;i++) printf("\n %d ",X[i]); 

//Вариант 3. Вывод массива в виде строки.
for (i=0;i<N;i++) cout <<"\t X["<<i<<"]="<<X[i]; 

//Вариант 4. Вывод массива в виде столбца.
for (i=0;i<N;i++) cout <<"\n X["<<i<<"]="<<X[i];

return 0 ;

}



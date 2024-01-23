// g++ *.cpp -std=c++11 && ./a.out && rm ./a.out
 
//	p318

//Метод класса также можно объявить статическим. Такой метод будет вести себя одинаково для всех объектов, т. е. не будет различать, для какого именно объекта он вызван. По этой причине статическим методам не передаётся скры- тый указатель this.

#include <iostream>
#include <fstream> 
#include <iomanip>

#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <time.h>

//	p256
#include <complex>

using namespace std;


template <class Type, int n> 
class square_matrix
{
Type *data; 
public :
	square_matrix()
		{ data = new Type[n*n]; } 
	void print () ;
	// ...
};

template <class Type, int n>
void square_matrix<Type , n> :: print () 
{
for (int i=0; i<n; i++) 
{
for(int j=0; j<n; j++) 
{
	cout << data[i*n+j] << '\t'; 
}
	cout << endl; 
}
}

int main(int argc, char * argv[])
{

cout << "Матрица 5х5 целых чисел: \n" ; 
square_matrix<int , 5> m1;
m1.print () ;
cout << "Матрица 10х10 значений типа double: \n" ; 
square_matrix<double , 10> m2;
m2.print () ;

return 0 ;
}


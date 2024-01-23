// g++ *.cpp -std=c++11 && ./a.out && rm ./a.out
 
//	p317

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


template <class Type>
class point
{
	Type x, y;
	// . . .
public : 
	point (Type x , Type y) { this->x=x ; this->y=y ; }
	void info () ;
};

template <class Type>
void point<Type>::info() 
{
cout << "Координаты точки: x=" << x << ", y=" << y << endl; 
}


int main(int argc, char * argv[])
{

point<float> f (10.1 , 20.5) ;

f.info(); 

return 0 ;
}


// g++ *.cpp -std=c++11 && ./a.out && rm ./a.out
 
//	p298

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

class vector
{
protected :
	double x, y; 
	
public :
	vector(double x, double y) 
{
       	this->x=x; this->y=y; 
}

virtual double abs () 
{ 
	return sqrt (x*x + y*y) ; 
}

void info() 
{ 
	cout << "Модуль вектора равен " << abs() << endl; 
}
};

class spatial_vector : public vector 
{
protected :
	double z ; 
public : 	
	spatial_vector(double x, double y, double z);
	double abs() 
	{ 
		return sqrt (x*x + y*y + z*z); 
	} 
};

spatial_vector::spatial_vector(double x, double y, double z):vector(x, y) 
{
	this-> z = z ; 
}

int main(int argc, char * argv[])
{
	
cout << "Создаём вектор на плоскости с координатами 1,2\n"; 
vector a(1 ,2) ;
//a.info();
cout << "Создаём пространственный вектор с координатами 1,2,3\n" ; 
spatial_vector b(1 ,2 ,3) ;
//b.info();

return 0 ;
}


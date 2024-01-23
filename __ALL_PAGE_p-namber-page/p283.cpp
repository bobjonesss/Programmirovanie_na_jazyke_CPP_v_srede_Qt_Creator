// g++ *.cpp -std=c++11 && ./a.out && rm ./a.out
 
//	p283

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

class spatial_vector 
{
double x, y, z; 
public :
	spatial_vector () { x=y=z=0; }
	friend ostream& operator<< ( ostream& stream , spatial_vector& b) ; 
	friend istream& operator>> ( istream& stream , spatial_vector& b) ;
}; 

ostream& operator<< ( ostream& stream , spatial_vector& b)
{
	stream << "x = " << b.x << "; y = " << b.y << "; z = " << b.z << endl;
	return stream;
} 
istream& operator>> ( istream& stream , spatial_vector& b)
{
	stream  >> b.x >> b.y >> b.z; 
	return stream;
}

int main(int argc, char * argv[])
{
	system("clear"); // macos
spatial_vector a;
cout << "input vector 1 2 3 :";
cin >> a;
cout << "Был введён вектор: " << a << endl ;

return 0 ;
}


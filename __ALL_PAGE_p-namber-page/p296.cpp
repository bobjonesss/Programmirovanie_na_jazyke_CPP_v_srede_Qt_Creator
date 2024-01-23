// g++ *.cpp -std=c++11 && ./a.out && rm ./a.out
 
//	p296

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

class point
{
protected :
	int x, y, color;

public :
	point (int p1, int p2, int c);
	int p1;
};

point :: point(int p1, int p2, int c)
{
x=p1; 
y=p2; 
color=c ;
}

class vertex : public point 
{
	int z; 
public :
	vertex (int p1, int p2, int p3, int c); 
};

vertex :: vertex(int p1, int p2, int p3, int c) : point(p1, p2, c)
{
	z=p3; 
}

int main(int argc, char * argv[])
{
	
	vertex c1(2 ,3 ,4 ,0) ;
	cout << c1.p1 << " \n";

return 0 ;
}


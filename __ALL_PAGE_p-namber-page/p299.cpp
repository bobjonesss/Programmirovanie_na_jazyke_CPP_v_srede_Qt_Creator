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

class parent {
public :
void parent_method ( ) {}
};
class child : public parent {
public :
void child_method () {}
};



int main(int argc, char * argv[])
{
	
parent *p = new child();
p->parent_method( ) ;
(( child *)p)->child_method () ;


return 0 ;
}


// g++ *.cpp -std=c++11 && ./a.out && rm ./a.out
 
//	p295

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

class parent
{
public :
parent () {cout << "Работа конструктора базового класса\n" ; } 
~parent () {cout << "Работа деструктора базового класса\n" ; }
};

class child : public parent {
public :
child () {cout<<"Работа конструктора производного класса\n" ; }
~child () {cout<<"Работа деструктора производного класса\n" ; } 
};

int main(int argc, char * argv[])
{
	
child c1;

return 0 ;
}


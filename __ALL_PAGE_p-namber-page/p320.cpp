// g++ *.cpp -std=c++11 && ./a.out && rm ./a.out
 
//	p320

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


template<class Type> 
class MatrixTraits
{
// ... 
};

template<>
class MatrixTraits<int> 
{
// ... 
};

template<class Type , class Traits>
 class matrix
{
// ... 
};


matrix <int , MatrixTraits<int> > m1;

int main(int argc, char * argv[])
{


return 0 ;
}


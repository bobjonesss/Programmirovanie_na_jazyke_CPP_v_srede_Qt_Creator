// g++ *.cpp -std=c++11 && ./a.out && rm ./a.out
 
//	p319

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


template< class Type> 
Type min(Type a , Type b) 
{
return a<b?a:b; 
}

char *min (char *a, char *b) 
{
strcmp ( a , b ) <0? a : b ; 
}



template <class Type> 
class matrix
{
// ...
};

template<>
class matrix<long> 
{
// ...
};

template<>
class matrix<int> 
{
// ...
};


int main(int argc, char * argv[])
{


return 0 ;
}


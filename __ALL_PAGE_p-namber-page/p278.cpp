//	p278

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
int x, y;
// . . .
static int count ;

public :
point () 
{
	cout << "Создаётся точка с номером " << ++count << endl ;
} 
~point () 
{
	cout << "Разрушается точка с номером " << count-- << endl ;
}
};

int point::count;

int main(int argc, char * argv[])
{
	
	point a,b,c;

return 0 ;
}


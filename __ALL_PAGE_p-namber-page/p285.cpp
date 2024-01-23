//	p285
		
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

class matrix
{
	double *m; 			//элементы матрицы
	size_t width , height ; 	//число строк и столбцов в матрице 
public:
	matrix(size_t w, size_t h);
	double get_val ( size_t i , size_t j ) ;
	void set_val ( size_t i ,size_t j, double val ) ;
~matrix () ;
};

matrix :: matrix ( size_t w, size_t h )
{
m=new double [w*h]; 
width = w;
height = h;
}

matrix ::~ matrix () 
{
delete[] m; 
}

double matrix :: get_val ( size_t i , size_t j ) 
{
return m[ i *width+j ] ; 
//получить значение элемента матрицы в позиции [i,j] 
}

void matrix :: set_val ( size_t i , size_t j , double val ) 
{
//устанавливаем значение элемента матрицы в позиции [i,j] 
//если координаты не превышают размер матрицы
if ((i<width)&&(j<height)) m[i*width+j]=val; 
}

int main(int argc, char * argv[])
{
	
matrix a(2 , 2) ; //объявляем матрицу размерности 2 х 2
a.set_val (0 ,0 ,100) ; //устанавливаем a[0,0] = 100
matrix b=a ; //присваиваем матрицу
b.set_val(0,0,200); //устанавливаем b[0,0] = 200
cout << "a[0,0] = " << a.get_val(0,0) << "; " << "b[0,0] = " << a.get_val(0 ,0) << endl ;

return 0 ;
}


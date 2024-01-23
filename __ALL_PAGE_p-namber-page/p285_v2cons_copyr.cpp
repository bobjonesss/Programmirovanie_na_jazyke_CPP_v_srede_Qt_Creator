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
	matrix(const matrix &m1);
	double get_val ( size_t i , size_t j ) ;
	void set_val ( size_t i ,size_t j, double val ) ;
~matrix () ;
};

//имя_класса ( const имя_класса & obj ) {
//. . . //тело конструктора }

matrix :: matrix ( size_t w, size_t h )
{
m=new double [w*h]; 
width = w;
height = h;
cout << "matrix :: matrix ( size_t w, size_t h ) \n";
}

matrix :: matrix(const matrix &m1): width (m1.width ) ,height(m1.height)
{

//устанавливаем размер матрицы и выделяем под неё память: 
width = m1.width;
height = m1. height ;
int size=width*height ;
m=new double[size]; //копируем элементы матрицы:
for (int i=0; i < size; i++)
m[ i]=m1.m[ i ];

std::cout << width << " "<<height<< " Copy constructor worked here!\n";
}


matrix ::~ matrix () 
{
delete[] m; 
cout << "matrix ::~ matrix () delete[] m; \n";
}

double matrix :: get_val ( size_t i , size_t j ) 
{
return m[ i * width + j ] ; 
	//получить значение элемента матрицы в позиции [i,j] 
}

void matrix :: set_val ( size_t i , size_t j , double val ) 
{
	//устанавливаем значение элемента матрицы в позиции [i,j] 
	//если координаты не превышают размер матрицы
if ((i<width)&&(j<height)) 
	m[i*width+j]=val; 
}

int main(int argc, char * argv[])
{
	
matrix a(2 , 2) ; 	//объявляем матрицу размерности 2 х 2
a.set_val (0 , 0 , 100) ; //устанавливаем a[0,0] = 100
cout << "a[0,0] = " << a.get_val(0,0) << endl ;
	
matrix *b = &a ; 		//присваиваем матрицу
cout << "b[0,0] = " << b->get_val(0,0) << endl ;

b->set_val(0,0,200); 	//устанавливаем b[0,0] = 200
cout << "b[0,0] = " << b->get_val(0,0) << endl ;

matrix d(a) ; 		//присваиваем матрицу
d.set_val(0,0,300); 	//устанавливаем d[0,0] = 200
cout << "d[0,0] = " << d.get_val(0,0) << endl ;


return 0 ;
}


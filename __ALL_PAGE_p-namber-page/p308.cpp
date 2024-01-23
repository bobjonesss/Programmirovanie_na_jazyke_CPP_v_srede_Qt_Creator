// g++ *.cpp -std=c++11 && ./a.out && rm ./a.out
 
//	p308

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

class general_error 
{
public :
	char * message ;
	general_error(char* message) 
		{ this->message=message; } 
};

class out_of_range {
public :
	size_t i ;
	out_of_range ( size_t i) { this->i=i; }
};

class overflow {}; 
class underflow {}; 
class array
{
	size_t size ; //реальный размер массива
	size_t capacity ; //максимально-допустимый размер 
	double *data ;

public :
	array(size_t capacity);
~array () ;
double operator [ ] ( size_t i ) ; 
	//получить значение i-го элемента 

void push ( double v ) ; //добавить элемент
double pop ( ) ; //убрать последний добавленный элемент
};

array :: array(size_t capacity) 
{
if (capacity==0)
	throw general_error ("массив нулевой вместимости") ;
	this->capacity=capacity ;
	size = 0;
	data = new double [ capacity ] ;
}
array ::~ array () {
	delete [ ] data ; 
}

double array :: operator [ ] ( size_t i ) 
{
if (i < size) 
	return data[i];
else 
	throw out_of_range ( i ) ; 
}

void array::push(double v) 
{
	if (size < capacity) 
		data[size++]=v;
	else 
		throw overflow () ; 
}

double array::pop() 
{
if (size > 0) 
	return data[--size];
else 
	throw underflow () ;
}

int main(int argc, char * argv[])
{

char c;
size_t
double v;
cout << "Введите ёмкость массива: " ; 
cin >> v;
array a(v) ; 
for (;;)
{
cout << "Введите \"+\" для добавления элемента," " \"-\" для извлечения, \"i\" для просмотра " "i-го элемента, \"a\" для выхода: " ;
cin >> c;
try
{
switch ( c ) 
{
	case '+':
		cout << "Введите добавляемое число: " ; cin >> v;
		a.push ( v ) ;
		break ;
	case '-': v=a.pop ( ) ;
		cout << "Извлечено число " << v << endl; 
		break ;
	case 'i':	
		cout << "Введите индекс: " ;
		cin >> i;
		v=a [ i ] ;
		cout << "Искомый элемент равен " << v << endl ; 
		break ;
	case 'a': return break ;
}
}

catch ( const out_of_range& e )
{
	cout << "Попытка доступа к элементу с недопустимым индексом \
		"<< e.i << endl ; 
}

catch( overflow ) 
{
cout << "Операция не выполнена, так как массив переполнен\n"; 
}

catch ( underflow ) 
{
cout << "Операция не выполнена, так как массив пуст\n"; }
}

return 0 ;
}


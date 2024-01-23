// g++ *.cpp -std=c++11 && ./a.out && rm ./a.out
 
//	p311

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
	{ this−>message=message; }
};

class out_of_range : public general_error 
{
public :
	size_t i ;
	out_of_range(size_t i); 
};

out_of_range :: out_of_range ( size_t i)
	: general_error ("Выход индекса за границу массива")
	{ this−>i=i ; }

class overflow : public general_error 
{
public :
	overflow () ; 
};

overflow::overflow():general_error("Переполнение массива") {} 

class underflow : public general_error
{ 
public : underflow () ; 
};

underflow::underflow():general_error("Массив пуст") {} 

class array
{
size_t size ; 
size_t capacity ; 
double *data ;

//реальный размер массива //максимально-допустимый размер
public :
	array ( size_t capacity ) throw ( general_error ) ;
~array () ;

double operator[](size_t i) 
	throw (out_of_range); 	//получитьзначениеi-го элемента
void push(double v) 
	throw ( overflow ) ; 	//добавить элемент
double pop() 
	throw (underflow); 	//убрать последний добавленный элемент
};

array :: array ( size_t capacity ) throw ( general_error ) 
{
if (capacity==0) throw
	general_error ("массив нулевой вместимости") ;
	this−>capacity=capacity ;
	size =0;
	data = new double [ capacity ] ;
}
array ::~ array () 
{
	delete [ ] data ; 
}

double array :: operator [ ] ( size_t i ) throw ( out_of_range ) 
{
	if (i < size) 
		return data[i];
else 
	throw out_of_range ( i ) ; 
}

void array::push(double v) throw (overflow) 
{
if (size < capacity) 
	data[size++]=v;
else 
	throw overflow () ; 
}

double array::pop() throw (underflow) 
{
if (size > 0) 
	return data[--size];
else 
	throw underflow () ; 
}

void main_loop( array& a) 
{
char c; 
double v ; 
size_t i ; 

for (;;) 
{
cout << "Введите \"+\" для добавления элемента," " \" -\" для извлечения, \" i \" для просмотра " "i-го элемента, \"a\" для выхода: " ;
cin >> c; 
try 
{
switch (c) 
{ 
case '+':
	cout << "Введите добавляемое число: " ; 
	cin >> v;
	a.push ( v ) ;
	break ;
case '-':
	v=a.pop ( ) ;
	cout << "Извлечено число " << v << endl;
	break ; 
case 'i':
	cout << "Введите индекс: " ;
	cin >> i;
	v=a [ i ] ;
	cout << "Искомый элемент равен " << v << endl ; 
	break ;
case 'a': 
	return ;
	break ; 
}
}

catch(out_of_range& e) 
{
	out << "Попытка доступа к элементу с недопустимым индексом " \
		<< e.i << endl ;
	throw ; 
}

catch( overflow ) 
{
cout<<"Операция не выполнена, так как массив переполнен\n"; 
}

catch(underflow) 
{
cout << "Операция не выполнена, так как массив пуст\n";
}

}
}


int main(int argc, char * argv[])
{

double v;

try 
{
cout << "Введите ёмкость массива: " ;
cin >> v;
array a(v);
main_loop(a);
}

catch( general_error& e) 
{
cout << "Произошла неустранимая ошибка следующего типа: " << e.message << endl ;
}

return 0 ;
}


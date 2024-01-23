// g++ *.cpp -std=c++11 && ./a.out && rm ./a.out
 
//	p291

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

class spatial_vector 
{
double x, y, z; 
public :
spatial_vector(double x=0, double y=0, double z=0); 
double abs() { return sqrt (x*x + y*y + z*z); } 
double get_x () { return x ; }
double get_y () { return y ; }
double get_z() { return z; }
void set_x(double x) { this->x=x; }

void set_y(double y) { this->y=y; }
void set_z(double z) { this->z=z; }
void info () ;
spatial_vector& operator++(); //префиксная форма 
spatial_vector& operator--();
spatial_vector operator++(int ) ; //постфиксная форма
spatial_vector operator--(int ) ;
friend spatial_vector operator+(spatial_vector a , const spatial_vector& b);
friend spatial_vector operator-(spatial_vector a , const spatial_vector& b);
friend ostream& operator<<(ostream& stream , const spatial_vector& b) ; 
friend istream& operator>>(istream& stream , spatial_vector& b) ;
};
spatial_vector :: spatial_vector(double x1, double y1, double z1) 
{
x = x1; 
y = y1; 
z = z1;
}
void spatial_vector :: info () 
{
cout << "Координаты вектора: x=" << x << "; y=" << y << "; z=" << z << endl ;
cout << "Модуль вектора равен " << abs () << endl ; 
}

spatial_vector& spatial_vector :: operator++() 
{
x++; y++; z++;
return *this ; 
}
spatial_vector& spatial_vector :: operator--() 
{
x--; y--; z--;
return *this ; 
}

spatial_vector spatial_vector :: operator++(int ) 
{
spatial_vector temp=*this ; 
++(*this ) ;
return temp ;
}
spatial_vector spatial_vector :: operator--(int ) 
{
spatial_vector temp=*this ; 
--(*this ) ;
return temp ;
}

spatial_vector operator+ ( spatial_vector a , const spatial_vector& b)
{
//передаём первый аргумент по значению,
//поэтому можем изменять его, не влияя на исходный объект: 
a.x += b.x;
a.y += b.y;
a.z += b.z;
//возвращаем изменённую копию первого аргумента:
return a ;
}

spatial_vector operator-(spatial_vector a , const spatial_vector& b)
{
a.x -= b.x;
a.y -= b.y; 
a.z -= b.z; 
return a;
} 

ostream& operator<<(ostream& stream , const spatial_vector& b)
{
stream << " x = " << b.x << " ; y = " << b.y << " ; z = " << b.z << endl ;

return stream ;
}

istream& operator>>(istream& stream , spatial_vector& b) 
{
stream >> b.x >> b.y >> b.z;
return stream ; 
}


int main(int argc, char * argv[])
{
	
spatial_vector a, b (1,2,3);
cout << "\n1. Заполнение вектора через стандартный ввод\n";
cout << "Введите координаты вектора: " ;
cin >> a;
a.info();
cout << "\n2. Вычитание векторов\n" ;
spatial_vector c = a-b;
cout << "Координаты вектора с=a-b(1,2,3): " << c ;
cout << "\n3. Изменение координаты вектора с помощью геттеров и сеттеров\n"; 
c.set_x ( c.get_x ( ) +1 ) ;
cout << "После инкремента координаты x, координаты вектора c: " << c;
cout << "\n4. Инкремент:\nвывод с++: " << c++;
cout << "Вывод ++с: " << ++c;

return 0 ;
}


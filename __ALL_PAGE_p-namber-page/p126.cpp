//	
	
#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

//Определяем абстрактный тип данных с помощью служебного слова Type . 
template <class Type>
Type minimum(Type a, Type b, Type c, Type d)
{ //Определяем функцию с использованием типа данных Type .
Type min=a ;
if (b<min) min=b; 
if (c<min) min=c; 
if (d<min) min=d; 
return min ;
}

int main(int argc, char * argv[])
{

int ia, ib, ic, id, mini; 
float ra, rb, rc, rd, minr;
cout << "Vvod 4 thelih chisla\t";
cin >> ia >> ib >> ic >> id;
mini = minimum( ia, ib, ic, id ) ; 
	//Вызов функции minimum, в которую передаём
	//4 целых значения.
cout << "\n" << mini << "\n" ;
cout << "Vvod 4 vecshestvenih chisla\t"; 
cin >> ra >> rb >> rc >> rd; 
minr = minimum( ra, rb, rc, rd ) ; 
	//Вызов функции minimum, в которую передаём
	//4 вещественных значения.
cout << "\n" << minr << "\n" ;

return 0 ;
}



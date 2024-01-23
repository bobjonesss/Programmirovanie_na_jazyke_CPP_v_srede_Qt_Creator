//	Текст программы к задаче 3.2:

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

int main(int argc, char * argv[])
{

float X,Y ;
cout << " X = " ; cin >> X ;
cout << " Y = " ; cin >> Y ;
if (X >= -1 && X <= 3 && Y >= -2 && Y <= 4)
cout << "Точка принадлежит области" << endl ;
else
cout << "Точка не принадлежит области" << endl ;

return 0 ;

}


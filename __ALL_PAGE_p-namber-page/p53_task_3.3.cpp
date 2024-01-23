//	Задача 3.3. 

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

int main(int argc, char * argv[])
{

float X,Y;
cout << "X=" ; cin >> X;
cout << "Y=" ; cin >> Y;
if (( Y<= 1+(float)1/2*X && Y <= -2*X+11 && Y >= 1) || (Y <= 1-(float)1/2*X && Y <= 2*X+11 && Y>=1))
cout << "Точка принадлежит области" << endl ; 
else
cout << "Точка не принадлежит области" << endl ;

return 0 ;

}


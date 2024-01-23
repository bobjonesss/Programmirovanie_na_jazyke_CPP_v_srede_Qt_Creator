//	3.11: Блок-схема алгоритма решения задачи 3.1


#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

int main(int argc, char * argv[])
{

float X, Y;
cout << " X = " ; cin >> X ;
if (X <= -2) Y = 4;
else if (X >= 1) Y = 1;
else Y = X * X ;
cout << " Y = " << Y << endl ;
return 0 ;

}

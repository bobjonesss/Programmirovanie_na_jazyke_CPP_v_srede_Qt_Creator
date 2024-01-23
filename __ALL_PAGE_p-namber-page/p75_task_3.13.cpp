//	Задача 3.13.

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

#define PI 3.14159 //Определение константы


int main(int argc, char * argv[])
{

unsigned long long int N,i,S;

cout << "N=" ; 
cin >> N;
S = 0;
i = 2;

while (i <= N) {
S = S + i ; i = i + 2;
}

cout << " S = " << S << " \n " ;

return 0 ;

}


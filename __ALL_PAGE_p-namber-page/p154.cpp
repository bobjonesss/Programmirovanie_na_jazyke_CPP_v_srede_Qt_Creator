//	p154

#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <time.h>

using namespace std ;


int main(int argc, char * argv[])
{

// prepare data for array	
    srand(time(NULL)); // use current time as seed for random generator
    int random_variable = rand();
    int n = rand();

cout << "\n BIG MASSIVE int *X = new int [n]; n=" << n ; 

int *X = new int [n];
for (int i=0; i < n; i++)
	X[i] = (int) i*9999/3;

n = 20;

cout << "\n n = " << n << " \n m=" ; 
int m;
cin >> m; 
//Ввод номера элемента, подлежащего удалению. 
for (int i=m; i<n-1; X[i] = X[i+1], i++); //Удалениеm-гоэлемента.
n--;
for (int i=0;i<n-1;i++)
	cout<<X[i]<<"\n"; //Выводизменённогомассива.

return 0 ;
}

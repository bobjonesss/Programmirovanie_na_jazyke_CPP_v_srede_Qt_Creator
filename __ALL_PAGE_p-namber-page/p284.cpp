//	p284
		
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

class integer
{
int value ; 
public:
	integer () { value = 0; }
	integer& operator++();//префиксный оператор
	integer& operator++(int ) ; //постфиксный оператор
};
integer& integer :: operator++() 
{
value+=1;
cout << "Использован префиксный оператор\n" ; 
return *this ;
}
integer& integer :: operator++(int ) 
{
value+=1;
cout << "Использован постфиксный оператор\n" ; 
return *this ;
}

int main(int argc, char * argv[])
{
	
integer i ;
i++; 
//используется постфиксный оператор 
++i ; 
//используется префиксный оператор

return 0 ;
}


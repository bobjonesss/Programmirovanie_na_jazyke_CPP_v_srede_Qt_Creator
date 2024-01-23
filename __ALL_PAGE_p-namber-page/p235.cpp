//	p235 7.2

#include <iostream>
#include <fstream> 
#include <iomanip>

#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <time.h>

using namespace std ;

int main(int argc, char * argv[])
{

ifstream f ;
float a; int i , n=5; 
f.open ( "abc.txt" ) ; 
if (f)
{
for (i=1; i<=n; f>>a, cout << a << "\t", i++); 

f.close();

}
else 
	cout<<"Файл не найден"<<endl ; 

return 0 ;
}

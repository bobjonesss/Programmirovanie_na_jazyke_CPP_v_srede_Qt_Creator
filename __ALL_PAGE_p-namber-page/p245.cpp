//	p245
	
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

char str[80];
sprintf (str, "%s %d %s", "С Новым ", 2014, "годом!!!");
cout << str << "\n";


cout << "getline(cin,v);" << "\n";
string v("Hello");
getline(cin,v);
cout << v << "\n";

return 0 ;
}


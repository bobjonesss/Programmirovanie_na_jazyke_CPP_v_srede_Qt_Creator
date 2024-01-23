//	p239

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

FILE *f;
int i, n; 
double a = 777.777;

f = fopen("file.dat" ,"w") ;
for ( i = 0 ; i < 15 ; fwrite ( &a, sizeof ( double ), 1, f ), i++) ; 
fclose(f);


f = fopen("file.dat" ,"rb") ;
for ( i = 0 ; i < 15 ; fread ( &a, sizeof ( double ) , 1 , f ), cout << a << "\t" , i++) ; 
fclose(f);

cout << "\n";

f=fopen("file.dat" ,"rb") ;
fread(&a , sizeof (double) ,1 , f ) ;
cout << a << "\t";
fclose(f);

return 0 ;
}

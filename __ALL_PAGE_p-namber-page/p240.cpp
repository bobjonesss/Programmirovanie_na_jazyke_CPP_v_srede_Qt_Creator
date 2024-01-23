//	p240

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

char fio[30]="Махарадзе В."; 
int a=5, b=5, c=4;
float s= (float) (a+b+c)/3; 

FILE *f;
f=fopen("my.txt" ,"w") ;
fprintf(f ,"Оценки студента %s \n", fio);
fprintf(f ,"математика %d, физика %d, химия %d \n", a,b,c); 
fprintf(f,"Среднийбалл = %.2f \n", s);
fprintf(f,"\n");
fclose(f);

return 0 ;
}

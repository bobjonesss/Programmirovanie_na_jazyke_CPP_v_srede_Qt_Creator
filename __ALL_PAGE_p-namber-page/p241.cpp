//	p241

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

int i,nom;
float Ves;
int Rost ;
char fio [15] ,name[15]; 
FILE *f; 
f=fopen("test.txt" ,"r") ; 
for (i=0; i<3; i++)
{

	//Чтение из файла
fscanf(f ,"%d%s%s%d%f \n",&nom, &fio ,&name,&Rost,&Ves); 

//Вывод на экран
printf("%d %s %s %d %.2f \n",nom,fio ,name,Rost,Ves);

} 
fclose(f);

return 0 ;
}

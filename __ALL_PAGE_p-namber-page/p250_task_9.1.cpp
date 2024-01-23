//	p250 task 9.1
	
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

//Структура Комплексное число. 
struct complex
{
//Поля структуры:
double Re ; //Действительная часть. 
double Im ; //Мнимая часть.
};

complex p;
int i,n;
FILE *f;
cout << " n = " ; 
cin >> n ; 
f=fopen("complex.dat" ,"wb") ; 
fwrite (&n , sizeof ( int ), 1, f ) ;
for ( i = 0 ; i <n ; i++)
{
cout<<"Введите комплексное число\n" ;
//Ввод комплексного числа:
cin>>p.Re; //действительная часть, 
cin>>p.Im; //мнимая часть.
//Вывод комплексного числа. 
cout<<p.Re<<"+"<<p.Im<<"i"<<endl ; 
//Запись комплексного числа в двоичный файл. 
fwrite(&p,sizeof(complex), 1, f);
} 

fclose(f);

return 0 ;
}


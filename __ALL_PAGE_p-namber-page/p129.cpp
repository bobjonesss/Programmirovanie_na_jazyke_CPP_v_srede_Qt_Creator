// p 129
	
#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

int main(int argc, char * argv[])
{

//Если количество параметров больше или равно 4, 
//то были введены два числа и знак операции.
if (argc >= 4)

//Если операция ∗, то выводим число1∗число2.
{
if (!strcmp(argv[2] ,"*")) 
	cout<<atof(argv[1])*atof(argv[3])<<endl; 

else
//Если операция +, то выводим число1+число2.
if (!strcmp(argv[2] ,"+")) 
	cout<<atof(argv[1])+atof(argv[3])<<endl; 

else
//Если операция −, то выводим число1−число2.
if (!strcmp(argv[2] ,"-")) 
	cout<<atof(argv[1])-atof(argv[3])<<endl; 
else
//Если операция /, то выводим число1/число2.
if (!strcmp(argv[2] ,"/")) 
	cout<<atof(argv[1])/atof(argv[3])<<endl;

else 
	cout<<"неправильный знак операции"<<endl ;
 }
else
	cout<<"недостаточное количество операндов"<<endl ;

return 0 ;
}



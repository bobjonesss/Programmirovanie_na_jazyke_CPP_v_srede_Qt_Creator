//

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

#define PI 3.14159 //Определение константы


int main(int argc, char * argv[])
{

float x , y ; //Описание переменных
x=0; //Присваивание параметру цикла стартового значения do //Цикл с постусловием

do
{//Выполнять тело цикла
	y = exp ( sin ( x ) ) * cos ( x ) ;
	printf (" \t x=%5.2f \t y=%5.4f \n", x, y) ; 
	x += 0.1; //Изменение параметра цикла
}
while ( x<=PI ) ; //пока параметр цикла не превышает конечное значение

//Конец цикла
	
return 0 ;

}


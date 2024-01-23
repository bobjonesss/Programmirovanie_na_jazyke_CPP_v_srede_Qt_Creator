
//Имена переменных, указанные 
//в прототипе функции, 
//компилятор игнорирует:
//Записи равносильны.
//int func(int a,int b); 
//int func(int ,int) ;


#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

#define PI 3.14159 //Определение константы

void fun()
{
	cout << "Здравствуй, мир!" << endl ; 
}

int main(int argc, char * argv[])
{

//тело_функции_n;

for(int i = 1;i <= 5; fun(), i++);

return 0 ;

}


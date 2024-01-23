
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

void degree (double rad, int* deg, int* min, int* sec) {
	*deg = floor( rad * 180 / PI );
	*min = floor ( ( rad * 180 / PI - ( * deg ) ) * 60 ) ;
	*sec = floor ((( rad * 180 / PI - ( *deg )) * 60 - ( *min )) * 60);
}

int main(int argc, char * argv[])
{

	int DEG, MIN, SEC; double RAD; 
	cout << "Inpout:" << endl ;
	cout << "Value in radian A="; cin >> RAD; 
	degree (RAD, &DEG, &MIN, &SEC) ;
	cout << DEG << " " << MIN << " " << SEC << endl ;
	degree ( PI - RAD, &DEG, &MIN, &SEC) ;
	cout << DEG << " " << MIN << " " << SEC << endl ;

return 0 ;

}

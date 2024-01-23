//	p242

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


char s1 [ 25 ] ; 
	//Описана строка из 25 символов.
	//Элемент s[25] предназначен для хранения символа конца строки.
char s2 [15]= "Привет" ; 
	//Описана строка из 15 символов и ей присвоено значение. 
	////Определён массив из 3 строк по 30 байт в каждой.
char m[3][30]={ "Пример " , "использования" , " строк"};

cout << s1 << "\n" << s2 << "\n" << m[0] << "\n" << m[1] << "\n" << m[2] << "\n";


return 0 ;
}

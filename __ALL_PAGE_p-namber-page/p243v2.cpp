//	p242-243

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

char s2 [25] , *s3 , s4 [30]; 
	//Описываем 3 строки, s3 — указатель. 
cout<<"Введите строку:"<<endl ;
cout<<"s2=" ; 
cin.getline(s2, 255); // cin>>s2 ; 
	//Ввод строки s2.
cout<<"Была введена строка:"<<endl ;
cout<<"s2="<<s2<<endl ;
s3=s4 ; 
	//Запись в s3 адреса строки s4. 
	//Теперь в указателях s3 и s4 хранится один адрес. 
cout<<"Введите строку:"<<endl ;
cout<<"s3="; 
cin.getline(s3, 255); //cin >>s3;  // cin.getline(char *s, int n);
	//Вводстрокиs3.
cout<<"Была введена строка:"<<endl ;

cout<<"s3="<<s3<<endl ; 
	//Вывод на экран s3 и s4, 
cout<<"Сформирована новая строка:"<<endl ; 
cout<<"s4="<<s4<<endl;
	//s3 и s4 — одно и тоже.

return 0 ;
}

//	p232 7.1

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

int i, n; 
double a;
ofstream f ; //Описывает поток для записи данных в файл.
f.open ( "abc.txt" ) ; //Открываем файл в режиме записи,
//режим ios::out устанавливается по умолчанию. 
//cout.setf(ios::flag)
//Для снятия флага применяют конструкцию
//cout.unsetf(ios::flag)
//cout.setf(right|left|boolalpha|dec|oct|hex|showbase|uppercase|showpos|scientific|fixed);
cout.setf(ios::left|ios::boolalpha|ios::hex|ios::showbase|ios::uppercase\
		|ios::showpos|ios::scientific);

cout << "n=";
cin >> n; 
//Ввод количества вещественных чисел. 
for ( i = 0 ; i < n ; i++)
{
cout << "a=" ; 
cin >> a ; //Ввод очередного числа. 
if ( i < n-1) //Если число не последнее,
f << a << "\t"; //записать в файл это число и символ табуляции, иначе 
else 
	f<<a; //записать только число.
}
f.close() ; //Закрытие потока.


//Использование манипуляторов форматирования
int r=253;
cout.setf(ios :: fixed); cout<<"r="<<setw(8)<<r<<endl;

double h=1234.6578; cout.setf(ios :: fixed); cout<<"h="<<setw(15); cout<<setprecision(3); cout<<h<<endl;

cout<<"r="<<hex<<r<<endl;

r=-25;
cout.width(15); cout<<"r="<<setw(15)<<right; cout<<r<<endl;

bool aa=true; cout<<boolalpha<<aa<<endl;

int p=29; cout<<"p="<<showpos<<p<< endl;


cout<<"x="<<right<< setw(10)<<setprecision(4); 
cout<<setfill('!'); 
cout<<(float)1/7<<endl; 
cout<<"x="<<left<<setw(10); 
cout<<setprecision(4); 
cout<<setfill('!'); 
cout<<(float)1/7<<endl;


// управлять шириной поля вывода можно с помощью операторов: • cout.width(n) — устанавливает ширину поля вывода — n позиций;
//• cout.precision(m) — определяет m цифр в дробной части числа.
return 0 ;
}

// g++ *.cpp -std=c++11 && ./a.out && rm ./a.out
 
//	p307

//Метод класса также можно объявить статическим. Такой метод будет вести себя одинаково для всех объектов, т. е. не будет различать, для какого именно объекта он вызван. По этой причине статическим методам не передаётся скры- тый указатель this.

#include <iostream>
#include <fstream> 
#include <iomanip>

#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <time.h>

//	p256
#include <complex>

using namespace std;

class unknown_exception {}; 
class abort_exception {};
bool confirm ( int i )
{
char c;
cout << "Подтвердите команду " << i << " (y/n/a - да/нет/выход): " ; 
cin >> c;
cin.ignore () ; //очищаем буфер если введены лишние символы
switch (c) {
case 'y': return true;
case 'n': return false;
case 'a': throw abort_exception();
default : throw unknown_exception () ;
} 
}


int main(int argc, char * argv[])
{

	cout << " Демонстрация диалога подтверждения при выполнении "<<" 1 0 0 команд \n " ; 
	for (int i = 1; i <= 100; i++)
	{
	
	try
	{
	if (confirm(i)) 
		cout << "КОМАНДА "<< i <<" ВЫПОЛНЕНА\n";

	else 
		cout << "КОМАНДА " << i << " ОТМЕНЕНА\n";
	}
	
	catch ( unknown_exception ) 
	{
		cout << "Неизвестный ответ пользователя\n" ;
		i--; // возвращаемся к предыдущей команде 
	}
	catch(abort_exception) 
	{
		cout << "Выполняется немедленный выход из программы\n" ; 
		return 0 ;
	}
	
	cout << "Продолжение демонстрации диалога\n" ; 
	}

return 0 ;
}


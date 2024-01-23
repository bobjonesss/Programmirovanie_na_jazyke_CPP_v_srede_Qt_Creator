// g++ *.cpp -std=c++11 && ./a.out && rm ./a.out
 
//	p279

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

class alarm
{
time_t alarm_t ; 
public:
static void current_time () ; 
// ....
};

void alarm :: current_time () 
{
time_t t = time (NULL) ; 
//получаем текущее время в нотации Unix, в виде числа секунд, 
////прошедших с 1 января 1970 г.
struct tm tm = *localtime(&t); 
//переводим в местное текущее время
cout << tm.tm_hour << ':' << tm.tm_min << ':' << tm.tm_sec << endl; }

int main(int argc, char * argv[])
{
	
alarm :: current_time () ;

return 0 ;
}


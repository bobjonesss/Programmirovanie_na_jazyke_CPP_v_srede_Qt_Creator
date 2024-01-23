//	p249
	
#include <iostream>
#include <fstream> 
#include <iomanip>

#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <time.h>

using namespace std ;

struct student
{
//Поля структуры:
char fio [30];
char group [8];
int year;
int informatika , math, fizika , history ; 
};

int main(int argc, char * argv[])
{

struct student stNam;
// 	not worked    //  stNam.fio = "aqerwwersdfgsdgfv";
strcpy(stNam.fio,"Sara 25yergher");
cout << stNam.fio << "\n";	
stNam.year = 3453;
cout << stNam.year << "\n\n";


struct student stNam2={"Sara","Black",968};
cout << stNam2.fio  << "\n" << stNam2.group << "\n" << stNam2.year << "\n";


{
student Vasya ; //Переменная Vasya типа student.
}
{
student ES [ 50 ] ; //Массив, элементы которого имеют тип student. 
}
{
student *x ; //Указатель на тип данных student.
}


{
student Vasya ;
Vasya.year = 45645; 
//Обращение к полю year переменной Vasya. 
student ES [ 50 ];
ES [ 4 ].math = 4563; 
//Обращение к полю math элемента ES[4].
}

return 0 ;
}


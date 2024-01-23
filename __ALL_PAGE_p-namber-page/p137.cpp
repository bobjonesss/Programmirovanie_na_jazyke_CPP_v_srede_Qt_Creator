//	p137

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;


int main(int argc, char * argv[])
{

   // void∗ malloc(size_t size);
   
double *h ;    //Описываем указатель на double.
int k;
cin >> k;	       //Ввод целого числа k.
   // Выделение участка памяти для хранения k элементов типа double. 
   // Адрес этого участка хранится в переменной h.

h = (double *) malloc(k*sizeof(double)); 
   // h — адрес начала участка памяти, 
   // h + 1, h + 2, h + 3 и т. д. — адреса последующих элементов типа double.

*(h+1) = 132;
   
cout << h << " " << *(h+1)  << " " << *(h+2) << "\n";


{
// ############### 

   // void *calloc (size_t num, size_t size);

float *h; //Описываем указатель на float.
int k;
cin>>k; //Ввод целого числа k.
   //Выделение участка памяти для хранения k элементов типа float. 
   //Адрес этого участка хранится в переменной h .

h=(float *) calloc(k, sizeof(float)); 
   //h —адресначалаучасткапамяти, 
   //h + 1, h + 2, h + 3 и т. д. — адреса последующих элементов типа float.

*(h+1) = 2132;

cout << h << " " << *(h+1)  << " " << *(h+2) << "\n";
delete []h;

}


// Функция realloc изменяет размер ранее выделенного участка памяти. 
// Обра- щаются к функции так:
// char * realloc(void *p, size_t size);

// void free (void ∗p) ;

delete []h;

return 0 ;

}



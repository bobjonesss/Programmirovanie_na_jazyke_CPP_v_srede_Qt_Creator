//	p166 5.12

#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <time.h>

using namespace std ;


int main(int argc, char * argv[])
{

int i,n;
bool pr ;
cout<<"n=";cin>>n; 	//Ввод размера исходного массива. 
float *a=new float [n]; //Выделение памяти для массива. 
cout<<"Введите массив a\n" ; //Ввод исходного массива.
for ( i = 0 ; i < n ; i++)
cin >>a [ i ] ;
//Предполагаем, что массив упорядочен (pr=true), перебираем все пары соседних значений 
//(i — номер пары), при i равном n − 2 будем сравнивать последнюю пару a[n-2] и a[n-1].
for ( pr=true , i = 0 ; i <n - 1 ; i++)
//Если для очередной пары соседних элементов выяснилось, что предыдущий элемент больше 
//последующего, то массив неупорядочен по возрастанию (pr=false), остальные пары соседних 
//значений, можно не проверять (оператор break)
if (a[i]>a[i+1]) {pr=false;break;}
if ( pr ) cout<<"Массив упорядочен по возрастани\nю" ; 
else 
	cout<<"Массив не упорядочен по возрастанию\n" ;

for (i=0;i<n;i++) cout<<a[i]<<"\t"; //Выводупорядоченногомассива

return 0 ;
}
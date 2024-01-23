//	Задача 3.23.

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

#define PI 3.14159 //Определение константы

int main(int argc, char * argv[])
{

unsigned long int X; unsigned int N;
int i,k,j;
bool Pr ;
for (k=0,cout<<"N=", cin>>N, i=1;i<=N;i++) {
	for (cout<<"X=", cin>>X,Pr=true,j=2;j<=X/2;j++) if (X%j==0)
	{
		Pr=false ; break ;
	}
	if (Pr) k++;
}
if (k==0) cout<<"Простых чисел нет \n";
else cout<<"Количество простых чисел k="<<k<<"\n" ;

return 0 ;

}


//	Задача 3.24.

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

#define PI 3.14159 //Определение константы

int main(int argc, char * argv[])
{

unsigned int K, i, kol, A, B; bool pr;
for (cout<<"K=", cin>>K, kol=0,i=1;i<=K;i++) {
for (pr=true,cout<<"A=",cin>>A;A!=0; A=B) {
cout<<"B=" ; cin>>B;
if (B!=0&&A>=B) pr=false; }
if (pr) kol++; }
cout << "kol=" << kol<<endl;

return 0 ;

}


//	p163

#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <time.h>

using namespace std ;


int main(int argc, char * argv[])
{

int n, i, b, j;
bool pr ;
cout << " n="; 
cin >> n;
float y[n];
for (i = 0; i < n; i++) //Вводмассива. 
{
cout<<"\n Y["<<i<<"]=";
cin >> y [ i ] ; 
}

int nom, max = 0;

for(j=1;j<n;b=y[n-j ] ,y[n-j]=y[nom] ,y[nom]=b, j++) 
for(max=y[0] ,nom=0,i=1;i<=n-j ; i++)
if (y[i]>max) {max=y[i];nom=i;}

for (i=0;i<n;i++) cout<<y[i]<<"\t"; //Выводупорядоченногомассива

return 0 ;
}

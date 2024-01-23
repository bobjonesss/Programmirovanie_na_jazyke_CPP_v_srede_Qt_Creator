//	p165

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

for ( i = 1 ; i <n ; y [ j + 1 ] = b , i++)
for(b=y[i], j=i-1; (j>-1 && b<y[j]);y[j+1]=y[j],j--);

for (i=0;i<n;i++) cout<<y[i]<<"\t"; //Выводупорядоченногомассива

return 0 ;
}

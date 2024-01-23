//	p190

#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <time.h>

using namespace std ;

int main(int argc, char * argv[])
{

int s,i,j,n,m,a[20][20]; 
cout << " N = " ;
cin >> n;
cout << " M = " ;
cin >> m;
cout << "Ввод матрицы A" << endl ; 
for ( i = 0 ; i <n ; i++ )
for ( j = 0 ; j <m ; j++ ) 
	cin >>a [ i ] [ j ] ;
for(s=i=0;i<n; i++) 
	for ( j = 0 ; j <m ; j++ )
//Если элемент лежит выше главной диагонали, то наращиваем сумму. 
if (j>i) s+=a[i][j];
cout<<"S="<<s<<endl ;

return 0 ;
}

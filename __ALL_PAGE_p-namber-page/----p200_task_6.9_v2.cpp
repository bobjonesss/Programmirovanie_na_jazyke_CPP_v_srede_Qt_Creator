//	p196 6.8

#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <time.h>

using namespace std ;

float ∗sum_m(float ∗A, float ∗B, int N, int M) {
int i,j;
float ∗temp;
temp=new float [N∗M]; f o r ( i = 0 ; i <N ; i + + )
f o r ( j = 0 ; j <M ; j + + )
t e m p [ i ∗ M+ j ] = A [ i ∗ M+ j ] + B [ i ∗ M+ j ] ;
return temp ;

}
float ∗minus_m(float ∗A, float ∗B, int N, int M) {int i,j;
float ∗temp;
temp=new float [N∗M]; f o r ( i = 0 ; i <N ; i + + )
f o r ( j = 0 ; j <M ; j + + )
temp[ i∗M+j]=A[ i∗M+j]−B[ i∗M+j ];
return temp ; }
float ∗product_m(float ∗A, float ∗B, int N, int M, int L) {
int i,j,k;
float ∗temp;
temp=new float [N∗L]; f o r ( i = 0 ; i <N ; i + + )
f o r ( j = 0 ; j <L ; j ++)
for(temp[ i∗L+j]=k=0;k<M;k++)
temp[ i∗L+j]+=A[ i∗M+k]∗B[k∗L+j ]; return temp ;
}
float ∗create_m(int N, int M) {
int i,j;
float ∗temp;
temp=new float [N∗M]; cout<<"Ввод матрицы\n" ; f o r ( i = 0 ; i <N ; i + + )
f o r ( j = 0 ; j <M ; j + + ) cin>>temp[ i∗M+j ];
return temp ; }
void output_m(float ∗A, int N, int M) {
int i,j;
f o r ( i = 0 ; i <N ; c o u t << e n d l , i + + )
f o r ( j = 0 ; j <M ; j + + )
c o u t <<A [ i ∗M+ j ] < < " \ t " ;
}

int main(int argc, char * argv[])
{

float ∗A, ∗B, ∗C, ∗D,∗ result ; int N,M;
cout<<"N=" ; cin>>N;
c o u t << " M = " ; c i n >>M ;
A=create_m (N,M) ; B=create_m (N,M) ; C= c r e a t e _ m ( M , N ) ; D= c r e a t e _ m ( M , N ) ;
result=product_m(product_m(sum_m(A,B,N,M) , 
product_m(sum_m(A,B,N,M) , minus_m(C,D,M,N) ,N,M,N) ,N,N,N) ;
output_m( result ,N,N) ;

return 0 ;
}

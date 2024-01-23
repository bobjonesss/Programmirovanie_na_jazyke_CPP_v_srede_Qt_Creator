//	p150 task 5.4

#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

int main(int argc, char * argv[])
{

int p,j ,i ,n, *nmin,k,kvo,nmin_temp; 
bool pr ;
double *x ;
cout << " n = " ; 
cin >> n ;
x=new double [n];
cout<<"Введите элементы массива Х\n" ; 
for ( i = 0 ; i <n ; i ++)
cin >>x [ i ] ;
cout<<"Введите количество минимумов\n" ; cin>>k ;
nmin=new int[k];
for(j=0;j<k;j++) //Циклпопеременнойjдляпоисканомераj+1минимальногоэлемента 
{
   kvo =0;
   for(i=0;i<n;i++) //Перебираемвсеэлементымассива. 
   {
   //Цикл по переменной p проверяет, содержится ли номер i в массиве nmin. 
   pr = false ;
   for( p=0; p<j ;p++)
      if ( i == nmin[p] ) pr=true;
      if ( !pr ) //Если не содержится, то количество элементов увеличить на 1.
      {
      kvo++;
      //Если kvo=1, то найден первый элемент, который не содержится в массиве 
      //nmin, его номер объявляем номером минимального элемента массива
      if ( kvo==1) nmin_temp=i ; 
      else
      //Если kvo>1, сравниваем текущий элемент x[i] с минимальным. 
      if (x[ i]<x[nmin_temp]) nmin_temp=i ;
   } 
}
nmin [j]=nmin_temp ; //Номер очередного минимального элемента записываем в массив. 
}     
for(j=0;j<k;j++) //Выводномеровизначенийkминимальныхэлементовмассива. 
cout<<"nmin1="<<nmin[ j]<<"\tmin1="<<x[nmin[ j]]<<endl ;

return 0 ;
}

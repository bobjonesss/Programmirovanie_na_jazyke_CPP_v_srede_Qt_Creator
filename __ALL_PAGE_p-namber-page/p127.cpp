//	
	
#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std ;

float pr =100.678; //Переменная pr определена глобально. 

int prostoe (int n)
{
int pr=1, i ; //Переменная pr определена локально. 
  if (n<0) pr=0;
  else
  for (i=2;i<=n/2;i++)

  if (n%i==0)
  {pr=0;break;}
    //Вывод локальной переменной.
  cout << "local pr= " << pr << "\n"; 
    //Вывод глобальной переменной.
  cout << " global pr= " << pr << "\n"; 
  return pr ;
}

int main(int argc, char * argv[])
{

  int g;
  cout << "g=" ; cin >> g;
  if (prostoe(g)) 
    cout << "g - prostoe \n"; 
  else 
    cout << "g - ne prostoe \n" ;

  return 0 ;
}



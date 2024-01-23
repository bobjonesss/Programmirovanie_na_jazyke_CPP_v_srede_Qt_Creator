//	p247
	
#include <iostream>
#include <fstream> 
#include <iomanip>

#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <time.h>

using namespace std ;

int main(int argc, char * argv[])
{

ifstream f ;
int p, j, i, kol, m, n=0; 
string S[10];
f.open ( "text.txt" ) ; 
if (f)	
{
while (!f.eof()) {
	getline(f , S[n]) ; 
	cout << S [ n ] << " \n " ; 
	n++;
}
f.close();

cout<<endl ;
cout<<"Количество строк в тексте - "<<n<<endl ; 
for (kol=0, i=0; i<n; i++)
{
m=S [ i ].length ( ) ; 
S[i] += " ";
for (p=0; p<m; )
{
	j=S[i].find(" ",p);
	if (j!=0) 
		{ kol++; p=j+1; } 
else 
	break;
} 
}
cout<<"Количество слов в тексте - "<<kol<<endl ; 
}
else 
	cout<<"Файл не найден"<<endl ;

return 0 ;
}


//	p246
	
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

string a,b; cout<<"a=";
getline(cin ,a);
 cout<<"b=";
 getline(cin ,b);

a+=b ; cout<<"a="<<a<<endl ;

string s1 = a;
string s2 = b;

//if (s1==s2 && s1!=s2 && s1<s2 && s1<=s2 && s1>s2 && s1>=s2)
if (s1==s2) // && s1!=s2 && s1<s2 && s1<=s2 && s1>s2 && s1>=s2)
cout << "s1==s2";//, s1!=s2, s1<s2, s1<=s2, s1>s2, s1>=s2;
else
cout << "!s1==s2 \n";//, s1!=s2, s1<s2, s1<=s2, s1>s2, s1>=s2;

return 0 ;
}


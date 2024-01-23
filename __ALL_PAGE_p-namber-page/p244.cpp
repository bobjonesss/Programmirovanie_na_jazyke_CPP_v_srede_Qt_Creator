//	p244

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

char s[80];
cout<<"strlen(s) s="; 
cin.getline(s,80); 
cout<<"s="<<s<<endl <<"Длина строки\t"<< strlen(s)<<endl;

{
char s1[80],s2[80];   cout << "strcat(s1 ,s2) s1=";
cin.getline (s1,80) ; cout << "s2=";
cin.getline (s2,80) ; cout << "s=" << strcat(s1 ,s2) << "\n";
}

{
char s11[80],s22[80]; cout<<"strcpy(s22,s11) s1=";
cin.getline (s11,80) ; strcpy(s22,s11); cout<<"s2="<<s22 << "\n";
}

{
char s1[80],s2[80]; cout<<"strncat( s1,s2,6) s1=";
cin.getline (s1,80) ; cout<<"s2=";
cin.getline (s2,80) ; cout<<"s="<<strncat( s1,s2,6) << "\n";
}

{
char s1[80],s2[80]; cout<<" strncpy(s2,s1,5) s1=";
cin.getline (s1,80) ; strncpy(s2,s1,5) ; cout<<"s2="<<s2 << "\n";
}

{
char s1[80],s2[80]; cout<<"strcmp(s1,s2) s1=";
cin.getline (s1,80) ; cout<<"s2=";
cin.getline (s2,80) ; cout<<strcmp(s1,s2)<< endl ;
}

{
char s1[80],s2[80]; cout<<"strncmp(s1,s2,6)  s1=";
cin.getline (s1,80) ; cout<<"s2=";
cin.getline (s2,80) ; cout<<strncmp(s1,s2,6)  << "\n";
}

{
char a[10]; cout<<"for atof(a) a=";
cin>>a; cout<<"a="<<atof(a) <<endl;
}

{
char a[10]; cout<<"int atoi(const char∗s) || for atoi(a) a=";
cin>>a; cout<<"a="<<atoi(a) <<endl;
}

{
char a[10]; cout<<" long atol(const char∗s) || atol(a) a=";
cin>>a; cout<<"a="<<atol(a) <<endl;
}

return 0 ;
}

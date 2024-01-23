// g++ *.cpp -std=c++11 && ./a.out && rm ./a.out
 
//	p324

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char * argv[])
{
system("clear");

vector<int> a ;
vector<int >:: iterator it;
//добавляем элементы
a.push_back (1) ;
a.push_back (4) ;
a.push_back (8) ;
for ( it = a.begin ( ) ; it != a.end ( ) ; it++) 
{
//выводим 1 4 8
cout << *it<<" "; 
}

getchar();

return 0 ;
}


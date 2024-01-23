// g++ *.cpp -std=c++11 && ./a.out && rm ./a.out
 
//	p324

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char * argv[])
{
system("clear");

//Объявляем вектор из целых чисел 
vector <int> k;
//Добавляем элементы в конец вектора 
k.push_back (22) ;
k.push_back (11) ;
k.push_back (4) ;
k.push_back (100) ;

vector <int >:: iterator p;
cout << "Вывод неотсортированного вектора:\n" ; 
for (p = k.begin(); p<k.end(); p++) 
{
cout << *p << ' '; 
}

//Сортировка вектора.
sort(k.begin(), k.end());
cout << "\nВывод отсортированного вектора:\n" ; 
for (p = k.begin(); p<k.end(); p++)
{
cout << *p << ' '; 
}
cout << endl;

getchar();

return 0 ;
}


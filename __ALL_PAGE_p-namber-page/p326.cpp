// g++ *.cpp -std=c++11 && ./a.out && rm ./a.out
 
//	p325

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char * argv[])
{
system("clear");

int data [100]= {34,34,34,34,2,3,4,34,3,34,34,34,34,37,4,45,45,5,7,456,5};
 
//...
int *where ;
where = find(data, data+100, 7);
cout << *where << "\n";

{
vector<int> a = {34,34,34,34,3,4,34,3,34,34,34,34,7,4,45,45,5};
//...
vector<int >:: iterator where ;
where = find(a.begin(), a.end(), 7);

}

getchar();

return 0 ;
}


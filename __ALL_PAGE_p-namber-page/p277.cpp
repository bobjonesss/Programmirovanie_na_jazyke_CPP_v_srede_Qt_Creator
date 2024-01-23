//	p277
		
#include <iostream>
#include <fstream> 
#include <iomanip>

#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <time.h>

//	p256
#include <complex>

using namespace std;

class point {
private :
int x, y; 

public:
point(int x, int y) 
{
	this->x=x ; 
	this->y=y ; 
}

friend void find_point(point* first , point *last , point arg); };

void find_point(point* first , point *last , point arg) 
{
point *p=first;
cout << "Точка с координатами " << p->x << ", " << p->y << " ??? \n";
point *pl=last ;
cout << "Точка с координатами " << pl->x << ", " << pl->y << " ??? \n";

if ((p->x == arg.x) && (p->y == arg.y))
cout << "Точка с координатами " << p->x << ", " << p->y << " найдена\n";
else
cout << "Точка с координатами " << p->x << ", " << p->y << "NOT найдена\n";


for (point *p=first; p<=last; p++)
if ((p->x == arg.x) && (p->y == arg.y))
cout << "Точка с координатами " << p->x << ", " << p->y << " найдена\n";
else
cout << "Точка с координатами " << p->x << ", " << p->y << "NOT найдена\n";

}

int main(int argc, char * argv[])
{
	
point a1(4,5);
point a2(5,6);
point arg0(7,8);
find_point(&a1,&a2,arg0);

point a11(4,5);
point a22(1,2);
point arg00(4,5);
find_point(&a11,&a22,arg00);

return 0 ;
}


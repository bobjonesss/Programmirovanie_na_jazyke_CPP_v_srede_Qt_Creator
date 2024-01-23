#include <iostream>
#include <stdio.h> 
#include <math.h>

#include <chrono>
#include <ctime>

using namespace std ;

static	int staticLevelSTACK = 0;
static	int staticLevelMAX=0;

unsigned long long int fibonachi (unsigned int n) 
{
if ((n==0)||(n==1)) 
	return n ;
else
	{
	unsigned long long int  tempStart;
	unsigned long long int  tempEnd;
	unsigned long long int  tempFin;

	tempStart = fibonachi(n-1);

	auto start_time = std::chrono::high_resolution_clock::now();
	std::uint64_t count = 0;
	
	tempEnd = fibonachi(n-2);

	uint64_t tempTimeFin = std::chrono::duration_cast<std::chrono::milliseconds>\
		       (std::chrono::high_resolution_clock::now()-start_time).count();

	staticLevelSTACK++;	

	tempFin = tempStart + tempEnd;

	if (staticLevelMAX < n) 
	{		
	staticLevelMAX = n;
	std::cout << n << "\ttime: " << tempTimeFin << "\tLevel: " << staticLevelSTACK << "\tfib: " << tempFin << "\n";
	}

	return tempFin;
	}
}

int main(int argc, char * argv[])
{
	auto start_time = std::chrono::high_resolution_clock::now();
	std::uint64_t count = 0;
	
	int i; long int f; 
	cout << "i="; cin >> i; 
	f = fibonachi ( i ); 

	uint64_t tempTimeFin = std::chrono::duration_cast<std::chrono::nanoseconds>\
		       (std::chrono::high_resolution_clock::now()-start_time).count();

	cout << "N: " << i << "\tfib= " << f << "\tALLtime: "  <<\
	       	(float)tempTimeFin/1000000000 << " seconds\t" << tempTimeFin << " nanoseconds\n" ;


return 0 ;
}


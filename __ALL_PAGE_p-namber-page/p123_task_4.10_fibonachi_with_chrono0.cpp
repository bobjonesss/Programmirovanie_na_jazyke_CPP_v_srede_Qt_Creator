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

/*
	unsigned long long int  tempstart;
	unsigned long long int  tempend;
	unsigned long long int  tempfin;

	tempstart = fibonachi(n-1);

	auto temptimestart = std::chrono::high_resolution_clock::now();
	std::uint64_t count = 0;
	
	tempend = fibonachi(n-2);

	auto temptimeend = std::chrono::high_resolution_clock::now();

	uint64_t temptimefin = std::chrono::duration_cast<std::chrono::milliseconds>\
			       (temptimeend-temptimestart).count();

	if (temptimefin != 10)
		std::cout << temptimefin << " " << n << " \n";	

*/

/*
 auto start_time = std::chrono::high_resolution_clock::now();
    std::uint64_t count = 0;

    for(int i = 0; i <= 1000000; i++)
    {

        uint64_t aaa = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now()-start_time).count();
        QString vvv = QString("aaa %1").arg(aaa);
            ui->label->setText(vvv);

     qDebug() << std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now()-start_time).count() << "\n";
    }

*/

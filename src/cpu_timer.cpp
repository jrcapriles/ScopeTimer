#include <string>
#include <iostream>
#include <ctime>
#include <unistd.h>
#include "scopeTimer.h"

/*
 * This program meassure the cpu time only.
 */

int waist_time()
{
	int a =0;
	for(int i =0; i < 100000000; i++)
	{
		a = i + 0.1*a;
	}	
	return a;
}

int main()
{
	int b  = 0;
	TIMERCPU("Total for loop:");
	for (int i =0; i < 5; i++)
	{
		TIMERCPU("Inner loop:");
		b = waist_time();
	}
	
	int c = b;
	c++;

	return 0;
}


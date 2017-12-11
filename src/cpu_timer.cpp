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
	SCOPE_CPU_TIMER("Total for loop:");
	for (int i =0; i < 5; i++)
	{
		SCOPE_CPU_TIMER("Inner loop:");
		b = waist_time();
	}
	
	int c = b;
	c++;

	return 0;
}


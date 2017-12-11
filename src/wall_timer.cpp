#include <string>
#include <iostream>
#include <unistd.h>
#include <time.h>
#include <sys/time.h>
#include "scopeTimer.h"

/*
 *  This program meassure wall time.
 */

int main()
{
	SCOPE_WALL_TIMER("Total for loop:");
	for (int i =0; i < 5; i++)
	{
		SCOPE_WALL_TIMER("Inner loop:");
		sleep(1);
	}
	return 0;
}

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
	TIMERWALL("Total for loop:");
	for (int i =0; i < 5; i++)
	{
		TIMERWALL("Inner loop:");
		sleep(1);
	}
	return 0;
}

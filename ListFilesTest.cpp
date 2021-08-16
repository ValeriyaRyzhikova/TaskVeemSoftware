#include "ListFilesTest.h"

void ListFilesTest::Prep()
{
	time_t seconds;
	seconds = time(NULL);
	if (seconds % 2 != 0)
		throw "current system time not multiple of two";
}
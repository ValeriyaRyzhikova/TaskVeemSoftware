#include "RandomFileTest.h"

RandomFileTest::RandomFileTest()
{
	name = new char[16];
	name = "random file test";
	tc_id = 2;
}

void RandomFileTest::Prep()
{
	MEMORYSTATUSEX statex;
	statex.dwLength = sizeof(statex);
	GlobalMemoryStatusEx(&statex);

	int memory_size = statex.ullTotalPhys % (1024*1024*1024);
	if (!memory_size)
		throw "RAM less them a gigabyte";
}
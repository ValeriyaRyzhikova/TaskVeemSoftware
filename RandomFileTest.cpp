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

void RandomFileTest::Run()
{
	std::ofstream file("test.txt");
	std::mt19937_64 gen;
	for (int i = 0; i != 1024 * 1024; i++)
		file << gen() % 2;
	file.close();
}
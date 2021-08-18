#include "RandomFileTest.h"

RandomFileTest::RandomFileTest()
{
	name = "random file";
	tcId = RANDOM;
}

void RandomFileTest::Prep()
{
	MEMORYSTATUSEX statex;
	statex.dwLength = sizeof(statex);
	GlobalMemoryStatusEx(&statex);

	int memory_size = statex.ullTotalPhys / (1024*1024*1024);
	if (!memory_size)
		throw "RAM less them a gigabyte";
}

void RandomFileTest::Run()
{
	std::ofstream file("test.txt", std::ios::binary);
	std::mt19937 gen;
	for (int i = 0; i != 1024 * 1024; i++)
		file << gen() % 2;
	file.close();
}

void RandomFileTest::ClrarUp()
{
	remove("test.txt");
}
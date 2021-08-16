#include "ListFilesTest.h"

void ListFilesTest::Prep()
{
	time_t seconds;
	seconds = time(NULL);
	if (seconds % 2 != 0)
		throw "current system time not multiple of two";
}

void ListFilesTest::Run()
{
	for (const auto& entry : std::filesystem::directory_iterator(getenv("USERPROFILE")))
		std::cout << entry.path() << std::endl; 
}


ListFilesTest::ListFilesTest()
{
	name = new char[12];
	name = "list files test";
	tc_id = 1;
}
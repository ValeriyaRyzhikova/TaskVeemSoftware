#include "VirtualTest.h"

VirtualTest::VirtualTest()
{
	name = new char[12];
	name = "virtual test";
	tc_id = 0;
}

VirtualTest::~VirtualTest()
{
	delete[] name;
}

int VirtualTest::Execute()
{
	try
	{
		Prep();
		Run();
	}
	catch (const char* massange)
	{
		std::cout << "Test " << name << " ended with error: " << massange;
		return -1;
	}

	ClrarUp();
}
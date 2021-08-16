#include "VirtualTest.h"

VirtualTest::VirtualTest()
{
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
		std::cout << "Test " << name << " ended with error: " << massange << std::endl;
		return -1;
	}

	ClrarUp();
}
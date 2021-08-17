#pragma once
#include "VirtualTest.h"
#include<windows.h>

class RandomFileTest : public VirtualTest
{
	void Prep();
	void Run();
	void ClrarUp();
public:
	RandomFileTest();
	~RandomFileTest() {};
};


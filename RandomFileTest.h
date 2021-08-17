#pragma once
#include "VirtualTest.h"
#include<windows.h>
#include<fstream>
#include<random>>

class RandomFileTest : public VirtualTest
{
	void Prep();
	void Run();
	void ClrarUp();
public:
	RandomFileTest();
	~RandomFileTest() {};
};


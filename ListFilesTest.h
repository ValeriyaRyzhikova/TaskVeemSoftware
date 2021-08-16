#pragma once
#include "VirtualTest.h"
#include<time.h>
#include<filesystem>

class ListFilesTest : public VirtualTest
{
	void Prep();
	void Run();
	void ClrarUp() {};
public:
	ListFilesTest();
	~ListFilesTest() {};
};

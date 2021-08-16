#pragma once
#include<iostream>

class VirtualTest
{
protected:
	int tc_id;
	const char* name;
	virtual void Prep() = 0;
	virtual void Run() = 0;
	virtual void ClrarUp() = 0;
public:
	VirtualTest();
	virtual ~VirtualTest();
	int Execute();
};


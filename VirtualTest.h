#pragma once
#include<iostream>
#include<string>

enum Id
{
	VIRTUAL,
	LIST,
	RANDOM
};

class VirtualTest
{
protected:
	int tcId;
	std::string name;
	virtual void Prep() = 0;
	virtual void Run() = 0;
	virtual void ClrarUp() = 0;
public:
	VirtualTest();
	virtual ~VirtualTest() {};
	int Execute();
};


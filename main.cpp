#include"ListFilesTest.h"
#include"RandomFileTest.h"
#include"VirtualTest.h"

void main()
{
	VirtualTest* t;
	ListFilesTest l;
	t = &l;
	t->Execute();
	RandomFileTest r;
	t = &r;
	t->Execute();
}
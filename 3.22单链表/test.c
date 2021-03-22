#include "SList.h"

void test()
{
	LNode* p = NULL;
	SListPushBack(&p, 1);
	SListPushBack(&p, 2);
	SListPushBack(&p, 3);
	printSL(p);
}

int main()
{
	test();
	return 0;
}
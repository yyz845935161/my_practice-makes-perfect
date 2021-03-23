#include "SList.h"

void test()
{
	LNode* p = NULL;
	SListPushBack(&p, 1);
	SListPushBack(&p, 2);
	SListPushBack(&p, 3);
	SListPushBack(&p, -5);
	printSL(p);
	SListPopBack(&p);
	SListPopBack(&p);
	SListPopBack(&p);
	SListPopBack(&p);
	SListPopBack(&p);
	SListPopBack(&p);
}
void test02()
{




}


int main()
{
	test();
	test02();


	return 0;
}
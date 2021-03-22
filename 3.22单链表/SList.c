#pragma once
#include "SList.h"

LNode* BuyLNode(SlistDataType x)
{
	LNode* newNode = (LNode*)malloc(sizeof(LNode));
	if (newNode == NULL)
	{
		printf("³ö´íÁË");
		exit(-1);
	}

	newNode->data = x;
	newNode->next = NULL;

	return newNode;
}

//Î²²å
void SListPushBack(LNode** pphead, SlistDataType x)
{
	LNode* newNode = BuyLNode(x);
	if (!*pphead)
	{
		*pphead = newNode;
		return;

	}
	
	LNode* ptail = *pphead;
	//ÕÒÎ²°Í
	while (ptail->next!=NULL)
	{
		ptail = ptail->next;
	}
	

	ptail->next = newNode; 
}



//´òÓ¡
void printSL(LNode* phead)
{
	LNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}


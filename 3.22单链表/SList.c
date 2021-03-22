#pragma once
#include "SList.h"

LNode* BuyLNode(SlistDataType x)
{
	LNode* newNode = (LNode*)malloc(sizeof(LNode));
	if (newNode == NULL)
	{
		printf("������");
		exit(-1);
	}

	newNode->data = x;
	newNode->next = NULL;

	return newNode;
}

//β��
void SListPushBack(LNode** pphead, SlistDataType x)
{
	LNode* newNode = BuyLNode(x);
	if (!*pphead)
	{
		*pphead = newNode;
		return;

	}
	
	LNode* ptail = *pphead;
	//��β��
	while (ptail->next!=NULL)
	{
		ptail = ptail->next;
	}
	

	ptail->next = newNode; 
}



//��ӡ
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


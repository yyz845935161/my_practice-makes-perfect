#pragma once
#include "SList.h"

//新增节点
LNode* BuyLNode(SlistDataType x)
{
	LNode* newNode = (LNode*)malloc(sizeof(LNode));
	if (newNode == NULL)
	{
		printf("出错了");
		exit(-1);
	}

	newNode->data = x;
	newNode->next = NULL;

	return newNode;
}

//尾插
void SListPushBack(LNode** pphead, SlistDataType x)
{
	LNode* newNode = BuyLNode(x);
	if (!*pphead)
	{
		*pphead = newNode;
		return;

	}
	
	LNode* ptail = *pphead;
	//找尾巴
	while (ptail->next!=NULL)
	{
		ptail = ptail->next;
	}
	

	ptail->next = newNode; 
}

//尾删
void SListPopBack(LNode** pphead)
{
	//1、空
	//2、一个节点
	//3、一个以上'
	if (*pphead == NULL)
	{
		printf("空节点\n");
	}
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
		printf("只有一个空节点\n");
	}

	else
	{
		LNode*p = *pphead;
		while (p->next->next!=NULL)
		{
			p = p->next;
		}
		free(p->next);
		p->next = NULL;
		printf("两个及以上节点\n");
	}
	printSL(*pphead);

}

//头插
void SListPushFront(LNode** phead, SlistDataType x)
{
	LNode* p = BuyLNode(x);
	p->next = *phead;
	*phead = p;
	printSL(*phead);
}

//打印
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


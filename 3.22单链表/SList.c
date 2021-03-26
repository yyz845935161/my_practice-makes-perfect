#pragma once
#include "SList.h"

//�����ڵ�
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

//βɾ
void SListPopBack(LNode** pphead)
{
	//1����
	//2��һ���ڵ�
	//3��һ������'
	if (*pphead == NULL)
	{
		printf("�սڵ�\n");
	}
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
		printf("ֻ��һ���սڵ�\n");
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
		printf("���������Ͻڵ�\n");
	}
	printSL(*pphead);

}

//ͷ��
void SListPushFront(LNode** phead, SlistDataType x)
{
	LNode* p = BuyLNode(x);
	p->next = *phead;
	*phead = p;
	printSL(*phead);
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


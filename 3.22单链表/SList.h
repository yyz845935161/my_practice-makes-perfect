#pragma once
#include<stdio.h>
#include<stdlib.h>

typedef int SlistDataType;

typedef struct SListNode
{
	SlistDataType data;
	struct SListNode* next;

}LNode, *List;

LNode* BuyLNode(SlistDataType x);

//β��
void SListPushBack(LNode** phead,SlistDataType x);

//βɾ
void SListPopBack(LNode* phead);

//ͷ��
void SListPushFront(LNode* phead, SlistDataType x);

//ͷɾ
void SListPopFront(LNode* phead);

//��ӡ
void printSL(LNode* phead);

//������
int SListLength(LNode* phead);
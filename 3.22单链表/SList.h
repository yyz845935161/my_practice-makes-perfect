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

//尾插
void SListPushBack(LNode** phead,SlistDataType x);

//尾删
void SListPopBack(LNode* phead);

//头插
void SListPushFront(LNode* phead, SlistDataType x);

//头删
void SListPopFront(LNode* phead);

//打印
void printSL(LNode* phead);

//链表长度
int SListLength(LNode* phead);
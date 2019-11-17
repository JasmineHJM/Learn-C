#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//顺序表的静态存储
#define N 100
typedef int SLDataType;
/*
typedef struct SeqList
{
	SLDataType array[N];//定长数组
	size_t size;//有效数据的个数
}SeqList;
*/
//顺序表的动态存储
typedef struct SeqList
{
	SLDataType* array;//指向动态开辟的数组
	size_t size;//有效数据的个数
	size_t cacpcity;//容量空间的大小
}SeqList;

// 1、无头单向非循环链表增删查改实现 
typedef int SLTDataType; 
typedef struct SListNode 
{   
	SLTDataType _data;  
	struct SListNode* _next;
}SListNode;

typedef struct SList
{ 
	SListNode* _head;
}SList;

void SListInit(SList* plist); 
void SListDestory(SList* plist);

SListNode* BuySListNode(SLTDataType x);
void SListPushFront(SList* plist, SLTDataType x); 
void SListPopFront(SList* plist); 
SListNode* SListFind(SList* plist, SLTDataType x); 
// 在pos的后面进行插入 void SListInsertAfter(SListNode* pos, SLTDataType x); 
// 在pos的前面进行插入 void SListEraseAfter(SListNode* pos); 
void SListRemove(SList* plist, SLTDataType x);

void SListPrint(SList* plist); void TestSList();
// 2、带头双向循环链表增删查改实现 
typedef int LTDataType; typedef struct ListNode
{   
	LTDataType _data; 
	struct ListNode* _next;  
	struct ListNode* _prev; 
}ListNode;

typedef struct List 
{ 
	ListNode* _head;
}List;

void ListInit(List* plist);
void ListDestory(List* plist);

void ListPushBack(List* plist, LTDataType x);
void ListPushBack(List* plist); 
void ListPushFront(List* plist, LTDataType x); 
void ListPopFront(List* plist);

ListNode* ListFind(List* plist, LTDataType x); 
// 在pos的前面进行插入
void ListInsert(ListNode* pos, LTDataType x);
// 删除pos位置的节点
void ListErase(ListNode* pos);
void ListRemove(List* plist, LTDataType x);

void ListPrint(List* plist);
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//˳���ľ�̬�洢
#define N 100
typedef int SLDataType;
/*
typedef struct SeqList
{
	SLDataType array[N];//��������
	size_t size;//��Ч���ݵĸ���
}SeqList;
*/
//˳���Ķ�̬�洢
typedef struct SeqList
{
	SLDataType* array;//ָ��̬���ٵ�����
	size_t size;//��Ч���ݵĸ���
	size_t cacpcity;//�����ռ�Ĵ�С
}SeqList;

// 1����ͷ�����ѭ��������ɾ���ʵ�� 
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
// ��pos�ĺ�����в��� void SListInsertAfter(SListNode* pos, SLTDataType x); 
// ��pos��ǰ����в��� void SListEraseAfter(SListNode* pos); 
void SListRemove(SList* plist, SLTDataType x);

void SListPrint(SList* plist); void TestSList();
// 2����ͷ˫��ѭ��������ɾ���ʵ�� 
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
// ��pos��ǰ����в���
void ListInsert(ListNode* pos, LTDataType x);
// ɾ��posλ�õĽڵ�
void ListErase(ListNode* pos);
void ListRemove(List* plist, LTDataType x);

void ListPrint(List* plist);
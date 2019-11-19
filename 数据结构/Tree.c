#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

typedef int DataType; 
struct Node 
{
	struct Node* _firstChild1;    // ��һ�����ӽ��   
	struct Node* _pNextBrother;   // ָ������һ���ֵܽ��   
	DataType _data;               // ����е�������
};

/*
// ������
struct BinaryTreeNode
{   
	struct BinTreeNode* _pLeft;   // ָ��ǰ�ڵ�����   
	struct BinTreeNode* _pRight; // ָ��ǰ�ڵ��Һ���  
	BTDataType _data; // ��ǰ�ڵ�ֵ�� 
};

// ������ 
struct BinaryTreeNode
{
	struct BinTreeNode* _pParent; // ָ��ǰ�ڵ��˫�� 
	struct BinTreeNode* _pLeft;   // ָ��ǰ�ڵ�����  
	struct BinTreeNode* _pRight; // ָ��ǰ�ڵ��Һ���   
	BTDataType _data; // ��ǰ�ڵ�ֵ�� 
};
*/
//ʵ�ֶ�����
typedef char BTDataType;

typedef struct BinaryTreeNode 
{
	BTDataType _data; 
	struct BinaryTreeNode* _left;   
	struct BinaryTreeNode* _right;  
}BTNode;

// ͨ��ǰ�����������"ABD##E#H##CF##G##"����������
BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi);
void BinaryTreeDestory(BTNode** root);

int BinaryTreeSize(BTNode* root);
int BinaryTreeLeafSize(BTNode* root);
int BinaryTreeLevelKSize(BTNode* root, int k);
BTNode* BinaryTreeFind(BTNode* root, BTDataType x); 

// ����
void BinaryTreePrevOrder(BTNode* root); 
void BinaryTreeInOrder(BTNode* root); 
void BinaryTreePostOrder(BTNode* root);

// �ǵݹ����
// �������
void BinaryTreeLevelOrder(BTNode* root); 
// �ж϶������Ƿ�����ȫ������ 
int BinaryTreeComplete(BTNode* root);

void BinaryTreePrevOrderNonR(BTNode* root);
void BinaryTreeInOrderNonR(BTNode* root); 
void BinaryTreePostOrderNonR(BTNode* root);

void TestBinaryTree();

//��
typedef int HPDataType;
typedef struct Heap 
{ 
	HPDataType* _a; 
	int _size;   
	int _capacity;
}Heap;

void HeapInit(Heap* hp, HPDataType* a, int n); 
void HeapDestory(Heap* hp);
void HeapPush(Heap* hp, HPDataType x); 
void HeapPop(Heap* hp);
HPDataType HeapTop(Heap* hp); 
int HeapSize(Heap* hp); 
int HeapEmpty(Heap* hp);

// ������
void HeapSort(int* a, int n);

void TestHeap();
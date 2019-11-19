#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

typedef int DataType; 
struct Node 
{
	struct Node* _firstChild1;    // 第一个孩子结点   
	struct Node* _pNextBrother;   // 指向其下一个兄弟结点   
	DataType _data;               // 结点中的数据域
};

/*
// 二叉链
struct BinaryTreeNode
{   
	struct BinTreeNode* _pLeft;   // 指向当前节点左孩子   
	struct BinTreeNode* _pRight; // 指向当前节点右孩子  
	BTDataType _data; // 当前节点值域 
};

// 三叉链 
struct BinaryTreeNode
{
	struct BinTreeNode* _pParent; // 指向当前节点的双亲 
	struct BinTreeNode* _pLeft;   // 指向当前节点左孩子  
	struct BinTreeNode* _pRight; // 指向当前节点右孩子   
	BTDataType _data; // 当前节点值域 
};
*/
//实现二叉树
typedef char BTDataType;

typedef struct BinaryTreeNode 
{
	BTDataType _data; 
	struct BinaryTreeNode* _left;   
	struct BinaryTreeNode* _right;  
}BTNode;

// 通过前序遍历的数组"ABD##E#H##CF##G##"构建二叉树
BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi);
void BinaryTreeDestory(BTNode** root);

int BinaryTreeSize(BTNode* root);
int BinaryTreeLeafSize(BTNode* root);
int BinaryTreeLevelKSize(BTNode* root, int k);
BTNode* BinaryTreeFind(BTNode* root, BTDataType x); 

// 遍历
void BinaryTreePrevOrder(BTNode* root); 
void BinaryTreeInOrder(BTNode* root); 
void BinaryTreePostOrder(BTNode* root);

// 非递归遍历
// 层序遍历
void BinaryTreeLevelOrder(BTNode* root); 
// 判断二叉树是否是完全二叉树 
int BinaryTreeComplete(BTNode* root);

void BinaryTreePrevOrderNonR(BTNode* root);
void BinaryTreeInOrderNonR(BTNode* root); 
void BinaryTreePostOrderNonR(BTNode* root);

void TestBinaryTree();

//堆
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

// 堆排序
void HeapSort(int* a, int n);

void TestHeap();
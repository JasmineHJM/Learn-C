#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int truesize = 10; //实际堆中的元素（此程序堆中元素为10个等于数组元素数量
int parent(int i) //计算关系结点编号
{
	return i / 2;
}
int left(int i)
{
	return 2 * i;
}

int right(int i)
{
	return 2 * i + 1;
}

void maxheap(int a[], int i) //维护最大堆性质
{
	int largest;  //储存最大结点编号
	int l;     //左结点
	int r;     //右 
	int exchange;

	l = left(i);
	r = right(i);
	if (a[l - 1] > a[i - 1] && l <= truesize) //注意 C语言数组下标应该将i-1
		largest = l;
	else
		largest = i;
	if (a[r - 1] > a[largest - 1] && r <= truesize)
		largest = r;
	if (largest != i)
	{
		exchange = a[largest - 1];
		a[largest - 1] = a[i - 1];
		a[i - 1] = exchange;
		maxheap(a, largest);  //逐层维护
	}

}

void buildmaxheap(int a[])  //建立最大堆
{
	int n = 10;
	int i;
	for (i = n / 2; i > 0; i--)
	{

		maxheap(a, i);

	}

}

void heapsort(int a[])  //堆排序
{
	int i = 10;
	int exchange;
	for (; i>1; i--)
	{
		exchange = a[0];
		a[0] = a[i - 1];
		a[i - 1] = exchange;
		truesize--;
		maxheap(a, 1);
	}

}
int main()
{
	int a[10];
	int n, i;
	printf("scanf------------------\n");
	for (i = 0; i < 10; i++) //输入堆中元素
		scanf("%d", &a[i]);

	printf("maxheap------------------\n");

	buildmaxheap(a);    //建立最大堆
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);  //输出
	heapsort(a);       //堆排序
	printf("\nresult------------------\n");
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);   //输出结果

	return 0;
}

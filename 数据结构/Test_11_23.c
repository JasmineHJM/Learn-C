#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int truesize = 10; //ʵ�ʶ��е�Ԫ�أ��˳������Ԫ��Ϊ10����������Ԫ������
int parent(int i) //�����ϵ�����
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

void maxheap(int a[], int i) //ά����������
{
	int largest;  //�����������
	int l;     //����
	int r;     //�� 
	int exchange;

	l = left(i);
	r = right(i);
	if (a[l - 1] > a[i - 1] && l <= truesize) //ע�� C���������±�Ӧ�ý�i-1
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
		maxheap(a, largest);  //���ά��
	}

}

void buildmaxheap(int a[])  //��������
{
	int n = 10;
	int i;
	for (i = n / 2; i > 0; i--)
	{

		maxheap(a, i);

	}

}

void heapsort(int a[])  //������
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
	for (i = 0; i < 10; i++) //�������Ԫ��
		scanf("%d", &a[i]);

	printf("maxheap------------------\n");

	buildmaxheap(a);    //��������
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);  //���
	heapsort(a);       //������
	printf("\nresult------------------\n");
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);   //������

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr1[3];
	int arr2[3];
	int i = 0;
	int size = sizeof(arr1) / sizeof(arr1[0]);
	//printf("%d ", size);
	printf("������arr1�����е�ֵ��");
	for (i = 0; i < size; i++)
	{
		scanf("%d", &arr1[i]);
	}
	printf("������arr2�����е�ֵ��");
	for (i = 0; i < size; i++)
	{
		scanf("%d", &arr2[i]);
	}
	for (i = 0; i < size; i++)
	{
		//������ʱ��������������
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
		//��������ʱ�����������Ƿ�Χ����������
		//arr1[i] = arr1[i] + arr2[i];
		//arr2[i] = arr1[i] - arr2[i];
		//arr1[i] = arr1[i] - arr2[i];
		//��������ʱ���������Ƿ�Χ����������
		//arr1[i] = arr1[i] ^ arr2[i];
		//arr2[i] = arr1[i] ^ arr2[i];
		//arr1[i] = arr1[i] ^ arr2[i];
	}
	printf("arr1���齻�����ֵ:");
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("arr2���齻�����ֵ:");
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}
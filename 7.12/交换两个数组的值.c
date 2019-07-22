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
	printf("请输入arr1数组中的值：");
	for (i = 0; i < size; i++)
	{
		scanf("%d", &arr1[i]);
	}
	printf("请输入arr2数组中的值：");
	for (i = 0; i < size; i++)
	{
		scanf("%d", &arr2[i]);
	}
	for (i = 0; i < size; i++)
	{
		//创建临时变量，交换数组
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
		//不创建临时变量，不考虑范围，交换数组
		//arr1[i] = arr1[i] + arr2[i];
		//arr2[i] = arr1[i] - arr2[i];
		//arr1[i] = arr1[i] - arr2[i];
		//不创建临时变量，考虑范围，交换数组
		//arr1[i] = arr1[i] ^ arr2[i];
		//arr2[i] = arr1[i] ^ arr2[i];
		//arr1[i] = arr1[i] ^ arr2[i];
	}
	printf("arr1数组交换后的值:");
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("arr2数组交换后的值:");
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}
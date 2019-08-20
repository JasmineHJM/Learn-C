#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//在一个二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。即杨氏矩阵
//请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。时间复杂度O(row+col)

int main1s()
{
	int arr[4][4] = {
		1, 2, 8, 9,
		2, 4, 9, 12,
		4, 7, 10, 13,
		6, 8, 11, 15,};
	int num = 0;
	printf("请输入您要查找的数字：\n");
	scanf("%d", &num);
	int ret = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 3; j >= 0; j--)
		{
			if (num == arr[i][j])
			{
				printf("找到了，%d在%d行%d列\n", num, i+1, j+1);
				ret = 1;
				break;
			}
		}
	}
	if (ret != 1)
		printf("数组中没有%d,查找失败\n", num);
	system("pause");
	return 0;
}


//要求写一个函数，将字符串中的空格替换为20%
//样例：“abc defgx yz”转换为“adc%20defgx%20yz”

//size为数组的容量
void Replace(char arr[], int size)
{
	//判断arr是否有效
	if (arr == NULL || size < 0)
		return;
	int i = 0;
	int numBlank = 0;
	int originalLength = 0;//数组的实际长度
	int newLength = 0;//空格被替换后，数组的长度
	int indexOriginal = 0;//初始值为原数组的最后一个元素
	int indexNew = 0;//初始值为空格被替换后，数组的最后一个元素
	//1.遍历数组，计算数组的实际长度和数组中的空格数量
	while (arr[i] != '\0')
	{
		++originalLength;
		if (arr[i] == ' ')
			++numBlank;
		++i;
	}
	//2.替换空格
	newLength = originalLength + numBlank * 2;
	if (newLength < originalLength)
		return;
	indexNew = newLength;
	indexOriginal = originalLength;
	while (indexOriginal >= 0 && indexNew>indexOriginal)
	{
		if (arr[indexOriginal] == ' ')
		{
			arr[indexNew--] = '0';
			arr[indexNew--] = '2';
			arr[indexNew--] = '%';
		}
		else
		{
			arr[indexNew--] = arr[indexOriginal];
		}
		indexOriginal--;
	}
}
int main2s()
{
	char arr[30] = "abc defgx yz";
	int size = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	Replace(arr, size);
	for (; i < size; ++i)
	{
		printf("%c", arr[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}

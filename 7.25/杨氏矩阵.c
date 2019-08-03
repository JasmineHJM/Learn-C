#define _CRT_SECURE_NO_WARNINGS 1

//杨氏矩阵：有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//数组：
//1 2 3
//2 3 4
//3 4 5
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9

#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int arr[3][3] = { { 1, 2, 3 }, { 2, 3, 4 }, { 3, 4, 5 } };
	int i = 0;
	int j = 0;
	int num = 0;
	int count = 0;
	int ret = 0;
	printf("请输入想查找的数字:");
	scanf("%d", &num);
	for (i = 0; i < 3; i++)
	{
		for (j = 2; j >= 0; j--)
		{
			if (num == arr[i][j])
			{
				printf("找到了，数字%d在第%d行第%d列\n", num, i + 1, j + 1);
				ret = 1;
				break;
			}
			else if (num > arr[i][j])
			{   //如果查找数大于某一行最后一个数那么久直接跳过当前行
				count = count + 3;
				break;
			}
			else if (num != arr[i][j])
			{
				count++;
			}
		}
		if (ret == 1)
		{
			break;
		}
	}
	if (count == (3 * 3))
	{
		printf("数组中没有%d,查找失败\n", num);
	}

	system("pause");
	return 0;
}

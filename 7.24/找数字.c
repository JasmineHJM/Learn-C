#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = arr[0];
	for (int i = 1; i < sz; i++)
	{
		ret = ret^arr[i];
	}
	printf("这个数字是%d\n", ret);

	system("pause");
	return 0;
}

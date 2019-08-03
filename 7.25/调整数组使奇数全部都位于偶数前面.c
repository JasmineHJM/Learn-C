#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//调整数组使奇数全部都位于偶数前面。
//题目：输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

//void swep(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = 0;
//	for (left = 0; left < sz; left++)
//	{
//		for (right = sz - 1; right > left; right--)
//		{
//			if ((arr[right] & 1) == 1)
//			{
//				swep(&arr[right - 1], &arr[right]);
//			}
//		}	
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	system("pause");
//	return 0;
//}

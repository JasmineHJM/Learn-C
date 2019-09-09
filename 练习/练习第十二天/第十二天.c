#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int f(int x, int y)
{
	return(x&y) + ((x^y) >> 1);
}
int main121()
{
	int result = f(2, 4);
	printf("%d\n", result);

	system("pause");
	return 0;
}

void fun12(int x, int y, int *c, int *d)
{
	*c = x + y;
	*d = x - y;
}
int main122()
{
	int a = 4, b = 3, c = 0, d = 0;
	fun12(a, b, &c, &d);
	printf("%d, %d\n", c, d);

	system("pause");
	return 0;
}
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次,找出这两个数字
#include <assert.h>
void find_two_diff_num(int arr[], int sz, int*p1, int *p2)
{
	int ret = 0;
	int pos = 0; int i = 0;
	for (i = 0; i<sz; i++)
	{
		ret ^= arr[i];
	}
	//2. 找出异或结果中哪一位为1
	for (i = 0; i<32; i++)
	{
		if (((ret >> i) & 1) == 1)
		{
			pos = i;
			break;
		}
	}
	//3. 分组
	for (i = 0; i<sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
			*p1 ^= arr[i];
	}
	*p2 = *p1^ret;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 1, 2, 3, 4, 5, 6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int num1 = 0;
	int num2 = 0;
	//返回型参数
	find_two_diff_num(arr, sz, &num1, &num2);
	printf("num1 = %d num2 = %d\n", num1, num2);

	return 0;
}

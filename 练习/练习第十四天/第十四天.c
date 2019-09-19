#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main141()
{
	int a = 2, *p1, **p2;
	p2 = &p1;
	p1 = &a;
	a++;
	printf("%d,%d,%d\n", a, *p1, **p2);

	system("pause");
	return 0;
}

int main142()
{
	int k, j, s;
	for (k = 2; k < 6; j++)
	{
		s = 1;
		for (j = k; j < 6; j++)
			s += j;
	}
	printf("%d\n", s);

	system("pause");
	return 0;
}

int main143()
{
	int arr[] = { 6, 7, 8, 9, 10 };
	int *ptr = arr;
	*(ptr++) += 123;
	printf("%d,%d", *ptr, *(++ptr));

	system("pause");
	return 0;
}

//编写一个函数，求一个数字是否是回文数
int main(void)
{
	int num;

	fprintf(stdout, "请输入一个正整数：");

	/* 获取并检查用户输入 */
	while (1)
	{
		if (fscanf(stdin, "%d", &num) != 1)
		{
			fprintf(stderr, "输入错误！请重新输入：");
			while (getchar() != '\n'); // 去掉多余的非法字符 
			continue;
		}
		else if (num <= 0)             // 输入的数不能为负数
		{
			fprintf(stderr, "请输入错误！请输入正整数：");
			continue;
		}
		else
			break;
	}

	/* 回文数判断：翻转法 */
	int temp = num;
	int reverse;

	while (temp != 0)
	{
		reverse *= 10;
		reverse += (temp % 10);
		temp /= 10;
	}

	/* 检查翻转前后数字是否相等 */
	if (reverse == num)
	{
		fprintf(stdout, "%d 为回文数\n", num);
	}
	else
	{
		fprintf(stdout, "%d 不是回文数\n", num);
	}

	return 0;
}
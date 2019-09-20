#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//1.打印100-200之间的素数
int main1()
{
	int i = 0;
	//定义计数器，判断程序运行的结果是否正确
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		//打印一个数字
		//判断是否为素数
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
				break;
		}
		if (i == j)
		{
			printf("%d", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);

	system("pause");
	return 0;
}


int main2()
{
	int i = 0;
	//定义一个数字n，则输出n*n的乘法口诀表。
	int n = 0;
	printf("请输入乘法口诀表的行数，例如：9\n");
	//scanf用户按指定的格式从键盘上把数据输入到指定的变量中
	//其中一定要有取地址符（&），否则会报错
	scanf("%d", &n);
	//打印行
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		//打印列
		for (j = 1; j <= i; j++)
		{
			//为了最后打印结果的美观，进行一定的格式控制
			printf("%-2d*%-2d=%-3d ", i, j, i*j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}

int main3()
{
	int year = 0;
	//输出1000到2000年的所有年份
	for (year = 1000; year <= 2000; year++)
	{
		//判断是否为闰年
		if (year % 4 == 0)
		{
			//判断是否为普通闰年
			if (year % 100 != 0)
			{
				printf("%d ", year);
			}
		}
		//判断是否为世纪闰年
		if (year % 400 == 0)
		{
			printf("%d ", year);
		}
	}

	system("pause");
	return 0;
}


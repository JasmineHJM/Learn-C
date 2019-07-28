#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//1.递归和非递归分别实现求第n个斐波那契数。1，1，2，3，5，8，13
//斐波那契数列由0和1开始，系数就由之前的两数相加。(Fibonacci)

//递归方法实现求第n个斐波那契数

int fib(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}

int main()
{
	int n = 0;
	printf("请输入你想求斐波那契数列的第几项:");
	scanf("%d", &n);
	printf("斐波那契数列第%d项为:%d\n", n, fib(n));

	system("pause");
	return 0;
}

//非递归方法求斐波那契数列的第n项

//int fib(int n)
//{
//	int i = 1;
//	int j = 1;
//	int count = 3;
//	int result = 0;
//	if (n <= 2)
//	{
//		return 1;
//	}while (count <= n)
//	{
//		result = i + j;
//		i = j;
//		j = result;
//		count++;
//	}
//	return result;
//}
//int main()
//{
//	int n;
//	printf("请输入你想求斐波那契数列的第几项:");
//	scanf("%d", &n);
//	fib(n);
//	printf("斐波那契数列第%d项为:%d\n", n, fib(n));
//	return 0;
//}

//2.编写一个函数实现n^k，使用递归实现

//int fun(int n, int k)
//{
//	if (n == 0)
//	{
//		return 0;
//	}
//	if (n == 1)
//	{
//		return 1;
//	}
//	if (k == 1)
//	{
//		return n;
//	}
//	else
//		return n * fun(n, k - 1);
//}
//int main()
//{
//	int n,k;
//	printf("根据公式n^k,输入n,k:");
//	scanf("%d %d", &n, &k);
//	printf("得到的结果为:%d\n", fun(n, k));
//
//	system("pause");
//	return 0;
//}

//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19

//int DigitSum(int n)
//{
//	if (n < 10)
//	{
//		return n;
//	}
//	return n % 10 + DigitSum(n / 10);
//}
//int main()
//{
//	int n;
//	printf("请输入你想求的数:");
//	scanf("%d", &n);
//	printf("%d返回的数字之和为%d\n", n, DigitSum(n));
//
//	system("pause");
//	return 0;
//}


//4. 编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。

//void reverse_string(char* string)
//{
//	if (*(++string) != '\0')
//	{
//		reverse_string(string);
//	}
//	printf("%c", *(string - 1));
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//
//	system("pause");
//	return 0;
//}

//5.递归和非递归分别实现strlen

//非递归代码

//int mystrlen(char* string)
//{
//	int count = 0;
//	while (*string != '\0')
//	{
//		count++;
//		string++;
//	}
//	return count;
//}
//int main()
//{
//	char string[] = "abcdefghijk";
//	int ret = mystrlen(string);
//	printf("%d\n", ret);
//
//  system("pause");
//	return 0;
//}

//递归代码

//int mystrlen(char* string)
//{
//	if (*string != '\0')
//	{
//		return 1 + mystrlen(string + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char string[] = "abcdefghijk";
//	int ret = mystrlen(string);
//	printf("%d\n", ret);
//
//  system("pause");
//	return 0;
//}


//6.递归和非递归分别实现求n的阶乘

//递归实现求n的阶乘

//int fun(int n){
//	if (n == 1){
//		return 1;
//	}
//	else{
//		return n * fun(n - 1);
//	}
//}
//int main(){
//	int n;
//	printf("请输入想求几的阶乘:");
//	scanf("%d", &n);
//	fun(n);
//	printf("%d的阶乘是:%d\n", n, fun(n));
//
//	system("pause");
//	return 0;
//}

//非递归实现求n的阶乘

//int fun(int n)
//{
//	int i = 0, j = 1;
//	if (n == 1)
//	{
//		return 1;
//	}
//	for (i = 1; i <= n; i++)
//	{
//		j = i * j;
//	}
//	return j;
//}
//int main()
//{
//	int n;
//	printf("请输入想求阶乘的数:");
//	scanf("%d", &n);
//	fun(n);
//	printf("%d的阶乘是:%d\n", n, fun(n));
//
//	system("pause");
//	return 0;
//}


//7.递归方式实现打印一个整数的每一位

//void fun(int n)
//{
//	if (n > 9)
//	{
//		fun(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n;
//	printf("请输入数字:");
//	scanf("%d", &n);
//	fun(n);
//
//	system("pause");
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������1��1��2��3��5��8��13
//쳲�����������0��1��ʼ��ϵ������֮ǰ��������ӡ�(Fibonacci)

//�ݹ鷽��ʵ�����n��쳲�������

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
	printf("������������쳲��������еĵڼ���:");
	scanf("%d", &n);
	printf("쳲��������е�%d��Ϊ:%d\n", n, fib(n));

	system("pause");
	return 0;
}

//�ǵݹ鷽����쳲��������еĵ�n��

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
//	printf("������������쳲��������еĵڼ���:");
//	scanf("%d", &n);
//	fib(n);
//	printf("쳲��������е�%d��Ϊ:%d\n", n, fib(n));
//	return 0;
//}

//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��

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
//	printf("���ݹ�ʽn^k,����n,k:");
//	scanf("%d %d", &n, &k);
//	printf("�õ��Ľ��Ϊ:%d\n", fun(n, k));
//
//	system("pause");
//	return 0;
//}

//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19

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
//	printf("���������������:");
//	scanf("%d", &n);
//	printf("%d���ص�����֮��Ϊ%d\n", n, DigitSum(n));
//
//	system("pause");
//	return 0;
//}


//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������

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

//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen

//�ǵݹ����

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

//�ݹ����

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


//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�

//�ݹ�ʵ����n�Ľ׳�

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
//	printf("���������󼸵Ľ׳�:");
//	scanf("%d", &n);
//	fun(n);
//	printf("%d�Ľ׳���:%d\n", n, fun(n));
//
//	system("pause");
//	return 0;
//}

//�ǵݹ�ʵ����n�Ľ׳�

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
//	printf("����������׳˵���:");
//	scanf("%d", &n);
//	fun(n);
//	printf("%d�Ľ׳���:%d\n", n, fun(n));
//
//	system("pause");
//	return 0;
//}


//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ

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
//	printf("����������:");
//	scanf("%d", &n);
//	fun(n);
//
//	system("pause");
//	return 0;
//}

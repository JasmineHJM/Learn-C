#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//д����������������������в�����Ҫ�����֣�
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�

void fun(int arr[], int size, int n)
{
	int left = 0;
	int right = size - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (n > arr[mid])
		{
			left = mid + 1;
		}
		else if (n < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ��ǵ�%d��\n", mid+1);
			break;
		}
		if (left > right)
		{
			printf("-1\n");
		}
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
	int size = sizeof(arr) / sizeof(arr[0]);
	int n = 12;
	fun(arr, size, n);

	system("pause");
	return 0;
}



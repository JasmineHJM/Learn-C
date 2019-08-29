#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int compare(const void* a, const void* b) 
{
	return (*(int*)a - *(int*)b);
}
void swap(int* a, int* b) 
{
	int tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void my_qsort(void* arr, int num, int size, int(*compare)(const void* p1, const void* p2)) 
{
	int bound = 0;
	int cur = num - 1;
	for (cur = num - 1; cur >= 0; cur--) 
	{
		for (bound = 0; bound < cur; bound++)
		{
			//我们这里是升序，所以返回值大于0说明左边大于右边，进行交换
			if (compare((int*)arr + bound, (int*)arr + bound + 1) > 0) 
			{
				swap((int*)arr + bound, (int*)arr + bound + 1);
			}
		}
	}
}
int main() 
{
	int arr[] = { 3, 8, 2, 5, 6, 4, 6, 7, 1, 9 };
	int size = sizeof(arr) / sizeof(arr[0]);
	my_qsort(arr, size, sizeof(arr[0]), compare);
	for (int i = 0; i < size; i++) 
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = arr[0];
	for (int i = 1; i < sz; i++)
	{
		ret = ret^arr[i];
	}
	printf("���������%d\n", ret);

	system("pause");
	return 0;
}

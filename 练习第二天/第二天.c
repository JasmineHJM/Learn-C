#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//��һ����ά�����У�ÿһ�ж����մ����ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳�����򡣼����Ͼ���
//�����һ������������������һ����ά�����һ���������ж��������Ƿ��и�������ʱ�临�Ӷ�O(row+col)

int main1s()
{
	int arr[4][4] = {
		1, 2, 8, 9,
		2, 4, 9, 12,
		4, 7, 10, 13,
		6, 8, 11, 15,};
	int num = 0;
	printf("��������Ҫ���ҵ����֣�\n");
	scanf("%d", &num);
	int ret = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 3; j >= 0; j--)
		{
			if (num == arr[i][j])
			{
				printf("�ҵ��ˣ�%d��%d��%d��\n", num, i+1, j+1);
				ret = 1;
				break;
			}
		}
	}
	if (ret != 1)
		printf("������û��%d,����ʧ��\n", num);
	system("pause");
	return 0;
}


//Ҫ��дһ�����������ַ����еĿո��滻Ϊ20%
//��������abc defgx yz��ת��Ϊ��adc%20defgx%20yz��

//sizeΪ���������
void Replace(char arr[], int size)
{
	//�ж�arr�Ƿ���Ч
	if (arr == NULL || size < 0)
		return;
	int i = 0;
	int numBlank = 0;
	int originalLength = 0;//�����ʵ�ʳ���
	int newLength = 0;//�ո��滻������ĳ���
	int indexOriginal = 0;//��ʼֵΪԭ��������һ��Ԫ��
	int indexNew = 0;//��ʼֵΪ�ո��滻����������һ��Ԫ��
	//1.�������飬���������ʵ�ʳ��Ⱥ������еĿո�����
	while (arr[i] != '\0')
	{
		++originalLength;
		if (arr[i] == ' ')
			++numBlank;
		++i;
	}
	//2.�滻�ո�
	newLength = originalLength + numBlank * 2;
	if (newLength < originalLength)
		return;
	indexNew = newLength;
	indexOriginal = originalLength;
	while (indexOriginal >= 0 && indexNew>indexOriginal)
	{
		if (arr[indexOriginal] == ' ')
		{
			arr[indexNew--] = '0';
			arr[indexNew--] = '2';
			arr[indexNew--] = '%';
		}
		else
		{
			arr[indexNew--] = arr[indexOriginal];
		}
		indexOriginal--;
	}
}
int main2s()
{
	char arr[30] = "abc defgx yz";
	int size = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	Replace(arr, size);
	for (; i < size; ++i)
	{
		printf("%c", arr[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}

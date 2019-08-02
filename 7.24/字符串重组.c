#define _CRT_SECURE_NO_WARNINGS 1

//��һ���ַ����������Ϊ:"student a am i",
//���㽫��������ݸ�Ϊ"i am a student".
//Ҫ�󣺲���ʹ�ÿ⺯����
//ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int my_strlen(const char* arr)
{
	int count = 0;
	assert(arr != NULL);
	while (*arr++ != '\0') 
	{
		count++;
	}
	return count;
}


void reverve_swap(char* left, char* right)
{
	assert(left != NULL); //���Բ��ǿ�ָ��
	assert(right != NULL);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

char* reverve(char* arr)
{
	int len = my_strlen(arr);
	char* start = arr;
	char* end = NULL;
	reverve_swap(arr, arr + len - 1);
	while (*arr)
	{
		start = arr;
		while ((*arr != ' ') && (*arr != '\0')) //�ҵ�һ�鵥��
		{
			arr++;
		}
		end = arr - 1;
		reverve_swap(start, end);//���򵥸�����
		if (*arr == ' ') //�ҵ��ո�
			arr++;
	}

	return arr;
}

int main()
{
	char arr[] = "student a am i";
	printf("%s\n", arr);
	reverve(arr);
	printf("%s\n", arr);
	
	system("pause");
	return 0;
}
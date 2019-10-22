#define _CRT_SECURE_NO_WARNINGS 1

//�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC

#include <stdio.h>
#include <string.h>
#include <assert.h>

int is_left_move(char* str1, char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);

	if(len1 != len2)
		return 0;
	strncat(str1, str1, len1);
	if(strstr(str1, str2) == NULL)
		return 0;
	else
		return 1;
}

int main()
{
	//abcdefabcdef
	//cdefab
	char arr1[20] = "abcdef";//abcdefabcdef
	char arr2[] = "cdefgh";
	if(is_left_move(arr1, arr2) == 1)
		printf("yes\n");
	else
		printf("no\n");

	system("pause");
	return 0;
}

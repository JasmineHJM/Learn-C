#define _CRT_SECURE_NO_WARNINGS 1

//判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC

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

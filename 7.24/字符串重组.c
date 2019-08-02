#define _CRT_SECURE_NO_WARNINGS 1

//有一个字符数组的内容为:"student a am i",
//请你将数组的内容改为"i am a student".
//要求：不能使用库函数。
//只能开辟有限个空间（空间个数和字符串的长度无关）。

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
	assert(left != NULL); //断言不是空指针
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
		while ((*arr != ' ') && (*arr != '\0')) //找到一块单词
		{
			arr++;
		}
		end = arr - 1;
		reverve_swap(start, end);//逆序单个单词
		if (*arr == ' ') //找到空格
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
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main101()
{
	char *str[3] = { "stra", "strb", "strc" };
	char *p = str[0];
	int i = 0;
	while (i<3)
	{
		printf("%s", p++);
		i++;
	}

	system("pause");
	return 0;
}

char *myString()
{
	char buffer[6] = { 0 };
	char *s = "Hello World!";
	for (int i = 0; i < sizeof(buffer)-1; i++)
	{
		buffer[i] = *(s + i);
	}

	return buffer;
}
int main102()
{
	printf("s\n", myString());

	system("pause");
	return 0;
}

int main103()
{
	int i = 1;
	printf("%d, %d\n", sizeof(i++), i);

	system("pause");
	return 0;
}

#include<string.h>
int main104()
{
	char a[1000];
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = (char)(-1 - i);
	}
	printf("%d\n", strlen(a));

	system("pause");
	return 0;
}

//���ַ������ҳ���һ��ֻ����һ�ε��ַ���Ҫ��ʱ�临�Ӷ�ΪO(n)��
//��ϣӳ���
#include<assert.h>
char GetFirstChar(const char* str)
{
	assert(str);
	//26��������Сд��ĸ
	//int HashTable[26] = { 0 };
	//�������ַ�����������Сд������������������ţ�ֻ��Ҫ�ѹ�ϣӳ������ݵ�256���ɡ�
	//��Ϊ�ַ���8bit���ͣ��ܹ���256���ַ���
	int HashTable[256] = { 0 };
	char *ch = str;
	while (*ch)
	{
		HashTable[(unsigned char)*ch]++;
		++ch;
	}
	ch = str;
	while (*ch)
	{
		if (HashTable[(unsigned char)*ch] == 1)
		{
			return *ch;
		}
		++ch;
	}
	return -1;
}
int main()
{
	char str[10] = "abaccdeff";
	char ret = GetFirstChar(str);
	printf("%c\n", ret);

	system("pause");
	return 0;
}




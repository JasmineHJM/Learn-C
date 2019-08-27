#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main21()
{
	printf("Jiamin Hu\n");
	printf("Jiamin\nHu\n");
	printf("Jiamin ");
	printf("Hu\n");

	system("pause");
	return 0;
}

int main22()
{
	printf("name:Jiamin Hu\n");
	printf("address:Shannxi xi'an\n");

	system("pause");
	return 0;
}

int main23()
{
	int age = 22;
	int day = age * 365;
	printf("%d岁的年龄转换成天数为%d天\n", age, day);

	system("pause");
	return 0;
}

void jolly()
{
	printf("For he's a jolly good fellow!\n");
}
void deny()
{
	printf("Which nobody can deny!\n");
}
int main24()
{
	jolly();
	jolly();
	jolly();
	deny();

	system("pause");
	return 0;
}

void br()
{
	printf("Brazil,Russia");
}
void ic()
{
	printf("India,China");
}
int main25()
{
	br();
	printf(",");
	ic();
	printf("\n");
	ic();
	printf(",\n");
	br();
	printf("\n");

	system("pause");
	return 0;
}

int main26()
{
	int toes = 10;
	printf("toes = %d\n", toes);
	printf("toes的两倍为%d\n", toes*2);
	printf("toes的平方%d\n", toes*toes);

	system("pause");
	return 0;
}


void smi()
{
	printf("smile!");
}
int main27()
{
	smi();
	smi();
	smi();
	printf("\n");
	smi();
	smi();
	printf("\n");
	smi();
	printf("\n");

	system("pause");
	return 0;
}

void two()
{
	printf("two\n");
}
void one_three()
{
	printf("one\n");
	two();
	printf("three\n");
}
int main28()
{
	printf("starting now:\n");
	one_three();
	printf("done!\n");

	system("pause");
	return 0;
}

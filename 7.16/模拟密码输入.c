#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，可以重新输入，最多输入三次。
//三次均错，则提示退出程序。

int main()
{
	char password[] = "715921";
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		char input[100] = { 0 };
		scanf("%s", input);
		if (strcmp(password, input) == 0)
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("登陆失败，请重试\n");
		}
	}
	if (i == 3)
	{
		printf("您已输入三次错误密码，登陆失败\n");
	}
	system("pause");
	return 0;
}

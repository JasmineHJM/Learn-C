#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"

void InitContact(Contact* pcon)
{
	assert(pcon);
	pcon->sz = 0;
	memset(pcon->data, 0, MAX * sizeof(PeoInfo));
}

void AddContact(Contact* pcon)
{
	assert(pcon);
	if (pcon->sz == MAX)
		printf("通讯录已满，无法添加\n");
	else
	{
		printf("请输入名字:>");
		scanf("%s", pcon->data[pcon->sz].name);
		printf("请输入年龄:>");
		scanf("%d", &(pcon->data[pcon->sz].age));
		printf("请输入性别:>");
		scanf("%s", pcon->data[pcon->sz].sex);
		printf("请输入电话:>");
		scanf("%s", pcon->data[pcon->sz].tele);
		printf("请输入地址:>");
		scanf("%s", pcon->data[pcon->sz].addr);
		pcon->sz++;
		printf("添加成功\n");
	}
}


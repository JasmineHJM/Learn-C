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
		printf("ͨѶ¼�������޷����\n");
	else
	{
		printf("����������:>");
		scanf("%s", pcon->data[pcon->sz].name);
		printf("����������:>");
		scanf("%d", &(pcon->data[pcon->sz].age));
		printf("�������Ա�:>");
		scanf("%s", pcon->data[pcon->sz].sex);
		printf("������绰:>");
		scanf("%s", pcon->data[pcon->sz].tele);
		printf("�������ַ:>");
		scanf("%s", pcon->data[pcon->sz].addr);
		pcon->sz++;
		printf("��ӳɹ�\n");
	}
}


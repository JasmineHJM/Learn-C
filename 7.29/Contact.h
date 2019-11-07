#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

#define NAME_MAX 20
#define SEX_MAX 5
#define ADDR_MAX 30
#define TELE_MAX 12
#define MAX 1000

//�˵���Ϣ
typedef struct PeoInfo
{
	char name[NAME_MAX];
	short age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}PeoInfo;

//ͨѶ¼�Ľṹ��
typedef struct Contact
{
	PeoInfo data[MAX];//����
	int sz;//��Ч��Ϣ�ĸ���
}Contact;

//��������
void InitContact(Contact* pcon);
void AddContact(Contact* pcon);
void ShowContact(const Contact* pcon);

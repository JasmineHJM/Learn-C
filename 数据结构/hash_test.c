#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <memory.h>
#include <string.h>
#include <stdlib.h>

#define HARSH_TABLE_MAX_SIZE   (1000) // ��ϣ��������Ԫ�ظ���

typedef struct HarshNode_struct HarshNode;

// ����һ����ϣ��Ľڵ�
struct HarshNode_struct
{
	char * sKey;   // [sKey,nvalue]��һ�Լ�ֵ��
	int nValue;
	HarshNode *pNext;
};

HarshNode * harshTable[HARSH_TABLE_MAX_SIZE]; // ��ϣ������
unsigned int g_harsh_table_size = 0x0;



//��ʼ����ϣ��
void harsh_table_init(void)
{
	int i = 0x0;
	memset(harshTable, 0, sizeof(HarshNode *)*HARSH_TABLE_MAX_SIZE);
	g_harsh_table_size = 0x0;

}


// string harsh function
unsigned int harsh_table_harsh_string(const char * sKey)
{
	const unsigned  char* p = (const unsigned  char*)sKey;
	unsigned int value = *p;

	if (value)
	{
		for (p += 1; *p != '\0'; p++)
		{
			value = (value << 5) - value + *p;
		}
	}

	return value;

}


//���ݼ�ֵ�����ϣ������ӽڵ㣬���skey�Ѿ�������ֱ�Ӹ��¼�ֵnValue
//��ӳɹ�����0�����ʧ�ܷ���-1
int harsh_table_insert_node(const char * sKey, int nValue)
{
	HarshNode * pHarshNodeHead = NULL;
	HarshNode * pNewNode = NULL;
	unsigned int pos = 0x0;

	if ((g_harsh_table_size >= HARSH_TABLE_MAX_SIZE) || (NULL == sKey))
		return -1;

	pos = harsh_table_harsh_string(sKey) % HARSH_TABLE_MAX_SIZE; //�����ַ�������sKey�ڹ�ϣ�����ж�Ӧ��λ��

	printf("harsh_table_insert_node : pos = %d\n", pos);

	pHarshNodeHead = harshTable[pos];

	if (NULL == pHarshNodeHead)
		printf("harsh_table_insert_node:NULL == pHarshNodeHead\n");

	while (NULL != pHarshNodeHead)  // ������λ�ö�Ӧ�Ĳ�����һ�������һ���ڵ�Ļ����Ǿ�Ҫ����ƶ���
	{
		if (strcmp(pHarshNodeHead->sKey, sKey) == 0) //��������ֵ���Ѿ����ڣ�ֻ���¼�ֵ����
		{
			pHarshNodeHead->nValue = nValue;

			return 0;
		}

		pHarshNodeHead = pHarshNodeHead->pNext;  //����ƶ�,�϶�����NULL��ʱ��

	}

	pNewNode = (HarshNode *)malloc(sizeof(HarshNode)); //����һ��HarshNode ��С���ڴ�
	if (NULL == pNewNode)
	{
		return -1;
	}
	memset(pNewNode, 0, sizeof(HarshNode));

	pNewNode->sKey = (char *)malloc(strlen(sKey) + 1); //����һ��sKey��С���ڴ�
	if (NULL == pNewNode->sKey)
	{
		return -1;
	}
	memset(pNewNode->sKey, 0, strlen(sKey) + 1);

	strcpy(pNewNode->sKey, sKey); //��sKey�����ݸ��� pNewNode -> sKey
	pNewNode->nValue = nValue; //��ֵҲ���ƹ���

	pNewNode->pNext = NULL; //�������½ڵ㣬Ҳ��β�ڵ㣬����pNextָ��NULL

	pHarshNodeHead = pNewNode;
	harshTable[pos] = pHarshNodeHead; //���һ��Ҫ�������е����λ��ָ�����ͷָ��

	g_harsh_table_size++;

	return 0;


}


//��ӡ�����ж�Ӧ��ĳ��λ�õ���һ����ϣֵ
void print_harsh_node(int pos)
{
	HarshNode * pHarshNodeHead = NULL;

	if (pos >= HARSH_TABLE_MAX_SIZE)
		return;

	pHarshNodeHead = harshTable[pos];

	if (NULL == pHarshNodeHead)
		printf("NULL == pHarshNodeHead\n");
	while (NULL != pHarshNodeHead)
	{
		printf("come here \n");
		printf("Position:%d, sKey:%s, nValue:%d \n", pos, pHarshNodeHead->sKey, pHarshNodeHead->nValue);
		pHarshNodeHead = pHarshNodeHead->pNext;

	}


}

// ���ݼ�ֵsKey�����Ҷ�Ӧ�Ĺ�ϣ�ڵ�
HarshNode * harsh_table_lookup(const char *sKey)
{
	unsigned int pos = 0x0;
	HarshNode * pHarshHead = NULL;

	if (NULL == sKey)
	{
		return NULL;
	}

	pos = harsh_table_harsh_string(sKey) % HARSH_TABLE_MAX_SIZE; //������ڹ�ϣ�����е�λ��

	pHarshHead = harshTable[pos];

	while (NULL != pHarshHead)
	{
		if (strcmp(sKey, pHarshHead->sKey) == 0)//�ҵ���
			return pHarshHead;

		pHarshHead = pHarshHead->pNext; // û���ҵ��Ļ�������һ���ڵ�
	}

	return NULL;

}



int main()
{
	char * pSkey = "abcd";
	int nValue = 1234;
	int ret = -1;
	int pos = 0xffffffff;
	HarshNode * pHarshNode = NULL;

	harsh_table_init();
	ret = harsh_table_insert_node(pSkey, nValue);

	printf("ret = %d\n", ret);


	if (!ret)
	{
		pos = harsh_table_harsh_string(pSkey) % HARSH_TABLE_MAX_SIZE;
		printf("main:  pos = %d\n", pos);
		print_harsh_node(pos);
	}

	pHarshNode = harsh_table_lookup(pSkey);

	if (NULL != pHarshNode)
	{
		printf("Got it: sKey:%s, nValue: %d\n", pHarshNode->sKey, pHarshNode->nValue);
	}

	system("pause");
	return 0;
}
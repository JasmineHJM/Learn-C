#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�

int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	scanf("%d", &money);

	if (money>0)
		total = money * 2 - 1;
	else
		total = 0;

	/*total += money;
	empty = money;
	while(empty>=2)
	{
	total += empty/2;
	empty = empty/2 + empty%2;
	}*/

	printf("%d\n", total);
	return 0;
}

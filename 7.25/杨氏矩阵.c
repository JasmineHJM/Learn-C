#define _CRT_SECURE_NO_WARNINGS 1

//���Ͼ�����һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//���飺
//1 2 3
//2 3 4
//3 4 5
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9

#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int arr[3][3] = { { 1, 2, 3 }, { 2, 3, 4 }, { 3, 4, 5 } };
	int i = 0;
	int j = 0;
	int num = 0;
	int count = 0;
	int ret = 0;
	printf("����������ҵ�����:");
	scanf("%d", &num);
	for (i = 0; i < 3; i++)
	{
		for (j = 2; j >= 0; j--)
		{
			if (num == arr[i][j])
			{
				printf("�ҵ��ˣ�����%d�ڵ�%d�е�%d��\n", num, i + 1, j + 1);
				ret = 1;
				break;
			}
			else if (num > arr[i][j])
			{   //�������������ĳһ�����һ������ô��ֱ��������ǰ��
				count = count + 3;
				break;
			}
			else if (num != arr[i][j])
			{
				count++;
			}
		}
		if (ret == 1)
		{
			break;
		}
	}
	if (count == (3 * 3))
	{
		printf("������û��%d,����ʧ��\n", num);
	}

	system("pause");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。B说：是C。C说：是D。D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
int main()
{
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	//假设凶手为1，其余人为0
	for (A = 0; A < 2; A++)
	{
		for (B = 0; B < 2; B++)
		{
			for (C = 0; C < 2; C++)
			{
				if ((A == 0) + (C == 1) + (D == 1) + (D == 0) == 3)
				{
					if ((A == 0) + (B == 0) + (C == 0) + (D == 0) == 3)
					{
						printf("A = %d, B = %d, C = %d, D = %d\n", A, B, C, D);
					}
				}
			}
		}
	}
	
	system("pause");
	return 0;
}


int main()
{
	char Killer = 0;
	for (Killer = 'A'; Killer <= 'D'; Killer++)
	{
		if ((Killer != 'A') + (Killer == 'C') + (Killer == 'D') + (Killer != 'D') == 3)
		{
			printf("凶手是%c\n", Killer);
		}
	}

	system("pause");
	return 0;
}


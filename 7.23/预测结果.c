#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
int main()
{
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int E = 0;
	for (A = 1; A <= 5; A++)
	{
		for (B = 1; B <= 5; B++)
		{
			for (C = 1; C <= 5; C++)
			{
				for (D = 1; D <= 5; D++)
				{
					for (E = 1; E <= 5; E++)
					{
						if ((B == 2) + (A == 3) == 1)
						{
							if ((B == 2) + (E == 4) == 1)
							{
								if ((C == 2) + (D == 2) == 1)
								{
									if ((C == 5) + (D == 3) == 1)
									{
										if ((E == 4) + (D == 1) == 1)
										{
											if ((A != B) && (A != C) && (A != D) && (A != E) && (B != C) && (B != D) && (B != E) && (C != D) && (C != E) && (D != E))
											{
												printf("A = %d, B = %d, C = %d, D = %d, E = %d\n", A, B, C, D, E);
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	system("pause");
	return 0;
}

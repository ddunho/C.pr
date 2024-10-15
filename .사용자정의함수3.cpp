#include <stdio.h>

int getDays(int month, int day)
{
	int i, sum = 0;
	for (i = 1; i < month, i++)
	{
		if (i == 2) //이 프로그램에서는 윤년을 계산하지 않습니다.
		{
			sum += 28;
		}
		else if (i % 2 == 0)
		{
			sum += 30;
		}

	}
}
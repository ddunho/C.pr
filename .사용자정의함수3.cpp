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
		else
		{
			sum += 31;
		}
	}
	return sum + day;
}

int main(void)
{
	int month, day;
	scanf("%d %d", &month, &day);
	printf("1월 1일부터 해당 날짜까지의 거리는 %d입니다.", getDays(month, day));
	return 0;
	
}
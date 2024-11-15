#include <stdio.h>

int main(void)
{
	int score[5][2];
	int total[2] = { 0 , };
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%d번 학생의 수학, 여어 점수 : ", i + 1);
	}

	return 0;
}
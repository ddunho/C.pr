#include <stdio.h>

int main(void)
{
	int score[5][2];
	int total[2] = { 0 , };
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%d�� �л��� ����, ���� ���� : ", i + 1);
		scanf("%d %d", &score[i][0], &score[i][i]);
	}

	for (i = 0; i < 5; i++)
	{
		
	}

	return 0;
}
#include <stdio.h>

void print(int count)
{
	if (count == 0)
	{
		return;
	}
	else
	{
		printf("���ڿ��� ����մϴ�.\n");
		printf(count - 1);
	}
}

int main(void)
{
	int number;
	printf("���ڿ��� � ����ұ��?");
	scanf("%d", &number);
	print(number);
	return 0;
}
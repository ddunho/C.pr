#include <stdio.h>

int main(void)
{
	char o;
	int x, y;
	while (1)
	{
		printf("수식을 입력하세요 : ");
		scanf("%d %c %d", &x, &o, &y);
		if (o == '+')
		{
			printf("%d %c %d = %d\n", x, o, y, x + y);
		}
		else if (o == '-')
		{
			printf("%d %c %d = %d\n", x, o, y, x - y);
		}
		else if (o == '*')
		{
			printf("%d %c %d = %d\n", x, o, y, x * y);
		}
		else if (o == '/')
		{
			printf("%d %c %d = %d\n", x, o, y, x / y);
		}
		else
		{
			printf("입력이 잘못되었습니다.\n")
		}
	}
	return 0;
}
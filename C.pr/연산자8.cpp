#include <stdio.h>

int main(void)
{
	int x = 50, y = 30;
	int absoluteX = (x > 0) ? x : -x; //참이면 x, 거짓이면 -x를 반환
	return 0;
}
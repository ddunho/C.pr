#include <stdio.h>

int smallest(int number)
{
	int count = 0;
	while (number >= 50000)
	{
		number -= 50000;
		count++;
	}
	while (number >= 10000)
	{
		number -= 10000;
		count++;
	}
	while (number >= 5000)
	{
		number -= 5000;
		count++;
	}
	while (number >= 1000)
	{
		number -= 1000;
		count++;
	}
	while (number >= 500)
	{
		number -= 500;
		count++;
	}
}

int main(void)
{
	return 0;
}
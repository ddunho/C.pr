#include <stdio.h>

//���� ����(���α׷� ��𼭳� ���ٰ���)
int hour;
int minute;
int minuteAdd;

void 0counter() //void�� ��ȯ���� ������
{
	minute += minuteAdd;
	hour += minute / 60;
	minute %= 60;
	hour %= 24;
}

int main(void)
{
	return 0;
}
#include <stdio.h>

//전역 변수(프로그램 어디서나 접근가능)
int hour;
int minute;
int minuteAdd;

void 0counter() //void는 반환값이 없을때
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
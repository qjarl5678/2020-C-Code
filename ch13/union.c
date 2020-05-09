// file : union.c
#include <stdio.h>

union data
{
	char ch;	//문자형
	int cnt;	//정수형
	double real;//실수형
}data1;			//data1은 전역변수

int main(void) {
	union data data2 = { 'A' };
//	union data data2 = { 10.3 };	//컴파일 시 경고 발생
	union data data3 = data2;

	printf("%d %d\n", sizeof(union data), sizeof(data3));

	//멤버 ch에 저장
	data1.ch = 'a';
	printf("%c %d %f\n", data1.ch, data1.cnt, data1.real);
	//멤버 cnt에 저장
	data1.cnt = 100;
	printf("%c %d %f\n", data1.ch, data1.cnt, data1.real);
	//멤버 real에 저장
	data1.real = 3.156759;
	printf("%c %d %f\n", data1.ch, data1.cnt, data1.real);

	return 0;
}
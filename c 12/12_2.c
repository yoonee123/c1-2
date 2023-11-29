#include <stdio.h>
void a(void) {
	int i;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &i);
	if (i % 2 == 0)
	{
		printf("입력하신 정수는 짝수입니다");
	}
	else
	{
		printf("입력하신 정수는 홀수입니다");
	}
}
void main2(void) {
	a();
 }
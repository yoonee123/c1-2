#include <stdio.h>
int aaa() {
	int a;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &a);
	return a % 2;
}
int main5() {
	if (aaa()==0)
	{
		printf("짝수입니다");
	}
	else
	{
		printf("홀수입니다");
	}
}
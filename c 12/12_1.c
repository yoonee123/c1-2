#include <stdio.h>
void hap(void) {
	int i, j, sum = 0;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &j);
	for (i = 1; i <= j; i++)
	{
		sum = sum + i;
	}
	printf("%d까지의 합은 : %d", j, sum);
}
void main1(void) {
	hap();
	return 0;
}
#include <stdio.h>
void hap(void) {
	int i, j, sum = 0;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &j);
	for (i = 1; i <= j; i++)
	{
		sum = sum + i;
	}
	printf("%d������ ���� : %d", j, sum);
}
void main1(void) {
	hap();
	return 0;
}
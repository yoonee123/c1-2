#include <stdio.h>
int c() {
	int sum = 0, i, j; // ���� ����
	scanf_s("%d %d", &i, &j);
	sum = i + j;

	return sum;
}
int main3() {
	int a = c();
	printf("�Է¹��� �ΰ��� ���� ���� : %d", a);
}
#include <stdio.h>
int w() {
	int i, j, sum = 0;
	scanf_s("%d", &j);
	for (i = 1; i <= j; i++)
	{
		sum = sum + i;
	}
	return sum;
}
int main4() {
	int a = w();
	printf("�Է��� �������� �D�� : %d", a);
}
#include <stdio.h>
int input1()
{
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);
	return sum(num1, num2);
}
int sum(int a, int b)
{
	return a + b;
}
int main3()
{
	printf("�հ� : %d", input1());

	return 0;
}
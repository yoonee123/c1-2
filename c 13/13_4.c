#include <stdio.h>
int input2()
{
	int num;
	scanf_s("%d", &num);
	return num;
}
int hap(int a)
{
	int i, sum = 0;
	for (i = 0; i <= a; i++)
	{
		sum = sum + i;
	}
	return sum;
}
int main4()
{
	printf("�Է��� �������� �հ�� : %d", hap(input2()));
}
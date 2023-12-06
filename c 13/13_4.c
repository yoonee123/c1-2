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
	printf("입력한 값까지의 합계는 : %d", hap(input2()));
}
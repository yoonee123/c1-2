#include <stdio.h>
int input3()
{
	int num;
	scanf_s("%d", &num);
	return num;
}
int divisor2(int a)
{
	int i;
	printf("입력한 값의 약수는 : ");
	for (i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			output(i);
		}
	}
}
int output(int b)
{
	printf("%d ", b);
}
int main6()
{
	divisor2(input3());

	return 0;
}
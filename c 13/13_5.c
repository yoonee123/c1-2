#include <stdio.h>
int input()
{
	int num;
	scanf_s("%d", &num);
	return num;
}
int divisor(int a)
{
	int i;
	printf("입력한 값의 약수는 : ");
	for (i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			printf("%d ", i);
		}
	}
}
int main5()
{
	divisor(input());
		
	return 0;
}

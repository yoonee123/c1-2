#include <stdio.h>
void main1() 
{
	int num, i, num1 = 0, num2 = 1, temp;
	printf("피보나치 수열 (3 이상의 정수만 출력) : ");
	scanf_s("%d", &num);

	if (num == 1)
	{
		printf("%d", num1);
		return 0;
	}
	else if (num == 2)
	{
		printf("%2d %2d", num1, num2);
		return 0;
	}

	printf("%2d %2d", num1, num2);
	for (i = 1; i < num - 1; i++)
	{
		temp = num1 + num2;
		printf(" %2d ", temp);
		num1 = num2;
		num2 = temp;
	}
	

	return 0;
}
#include <stdio.h>
void count(int num)
{
	int i, cnt = 0;
	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
			cnt++;
	}
	printf("�Է��� ���� ����� %d", cnt);
}
int main1()
{
	int num;
	scanf_s("%d", &num);
	count(num);

	return 0;
}
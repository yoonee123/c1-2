#include <stdio.h>
int jisu(int x, int y)
{
	int i, sum = x;
	for (i = 1; i < y; i++)
	{
		sum = sum * x;
	}
	return sum;
}
int main2()
{
	int x, y;
	scanf_s("%d %d", &x, &y);
	printf("�Է��� �ΰ��� ���� ������ %d�Դϴ�.", jisu(x, y)); // ���� x, y�� return sum��

	return 0;
}
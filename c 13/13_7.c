#include <stdio.h>
int main()
{
	int x, y;
	scanf_s("%d %d", &x, &y);
	swap(&x, &y);

	printf("�ΰ��� ���� ��ȯ�� ����� %d %d", x, y);
}
int swap(int *a, int *b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;

	return (a, b);
}
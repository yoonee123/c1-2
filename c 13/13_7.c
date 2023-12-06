#include <stdio.h>
int main()
{
	int x, y;
	scanf_s("%d %d", &x, &y);
	swap(&x, &y);

	printf("두개의 값을 변환한 결과는 %d %d", x, y);
}
int swap(int *a, int *b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;

	return (a, b);
}
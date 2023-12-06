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
	printf("입력한 두개의 값의 제곱은 %d입니다.", jisu(x, y)); // 지수 x, y가 return sum값

	return 0;
}
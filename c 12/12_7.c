#include <stdio.h>
void max(int num) {
	printf("입력한 두 값중 큰 값은 : %d", num);
}
int main(void)
{
	int A, B;
	scanf_s("%d %d", &A, &B);
	if (A > B) 
	{
		max(A);
	}
	else
	{
		max(B);
	}
	return 0;
}

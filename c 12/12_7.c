#include <stdio.h>
void max(int num) {
	printf("�Է��� �� ���� ū ���� : %d", num);
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
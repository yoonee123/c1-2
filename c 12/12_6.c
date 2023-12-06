#include <stdio.h>
void sum(int num) {
	int i, hap = 0;
	for (i = 1; i <= num; i++) 
	{
		hap += i;
	}
	printf("입력한 정수까지의 합은 : %d", hap);
}
int main6(void)
{
	int A;
	scanf_s("%d", &A);
	sum(A);
	return 0;
}

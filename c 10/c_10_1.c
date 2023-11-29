#include <stdio.h>
void main() {
	int arr[5];
	int i;
	int* p = arr;
	for (i = 0; i < 5; i++)
	{
		printf("%d번째 값을 입력하세요 :", i + 1);
		scanf_s("%d", p + i);
	}
	printf(" 입력한 값은 : ");
	for (i = 0; i < 5; i++)
	{
		printf(" %d ", p[i]);
	}
	return 0;
}

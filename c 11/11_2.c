#include <stdio.h>
void main2() {
	int arr[3] = { 1,2,3 };
	int brr[3] = { 4,5,6 };
	int crr[3] = { 7,8,9 };
	int* prr[3] = { arr,brr,crr };
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%2d ", prr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

#include <stdio.h>
void main2() {
	int i, j, k;
	int arr[3][3], brr[3][3], krr[3][3];
	int cnt1 = 1, cnt2 = 0;
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++) 
		{
			arr[i][j] = cnt1++;
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			brr[i][j] = cnt2 += 10;
			printf("%2d ", brr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			krr[i][j] = 0;
			for (k = 0; k < 3; k++) {
				krr[i][j] += arr[i][k] * brr[k][j];
			}
			printf("%3d ", krr[i][j]);
		}
		printf("\n");
	}
}

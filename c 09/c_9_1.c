#include <stdio.h>
void main1() {
	int i, j;
	int arr[5][5];
	int cnt = 1;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			arr[i][j] = cnt++;
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
}

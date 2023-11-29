#include <stdio.h>
void main1() {
	int arr[5][5];
	int i, j;
	int* p = arr;
	int cnt = 1;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			*p = cnt++;
			printf(" %2d", *p);
		}
		printf("\n");
	}
}
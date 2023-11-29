#include <stdio.h>
void main()
{
	/*int i, arr[10000], cnt = 1;
	for (i = 0; i < 10000; i++)
	{
		arr[i] = cnt++;
	}
	for (i = 0; i < 10000; i++)
	{
		if (i % 20 == 0) printf("\n");
		printf("%d ", arr[i]);
	}*/

	int i, j;
	int arr[5][5];
	int cnt = 1;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++) {
			arr[i][j] = cnt++;
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
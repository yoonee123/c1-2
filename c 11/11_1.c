#include <stdio.h>
void main1()
{
	int arr[5];
	int i;
	int* p = arr;
	int sum = 0;
	
	for (i = 0; i < 3; i++)
	{
		printf("������ �Է��ϼ��� : ");
		scanf_s("%d", &p[i]);
	}
	for (i = 0; i < 3; i++)
	{
		sum = sum + p[i];
	}
	p[3] = sum;
	p[4] = sum / 3;
	printf("���� : %d ��� : %d", p[3], p[4]);
	return 0;
}
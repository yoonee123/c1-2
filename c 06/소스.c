#include <stdio.h>
void main() {

	/*int num;
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) {
		if (num %i == 0)
			printf("%d ", i);
	}*/

	/*int num;
	int a = 0;
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			printf("%d ", i);
			a++;
		}

	}
	printf("\n����� ������ %d�Դϴ�.", a);*/

	/*int num;
	int a = 0;
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			a++;
		}
	}
	if (a == 2)
		printf("�Ҽ�");
	else
		printf("�Ҽ��ƴ�"); */

	/*int num;
	int i;
	int cnt = 0;
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++) {
		for (int a = 1; a <= i; a++) {
			if (i % a == 0) cnt++;
		}
		if (cnt == 2)
			printf("%d ", i);
		cnt = 0;
	}*/
		
	/*int x, y;
	printf("x�� y�� �Է��Ͻʽÿ�.");
	scanf_s("%d",&x);
	scanf_s("%d",&y);

	if (x > 0 && y > 0)
		printf("1��и�");
	else if (x < 0 && y > 0)
		printf("2��и�");
	else if (x > 0 && y < 0)
		printf("4��и�");
	else
		printf("3��и�");*/

	int arr[5];
	int i, sum = 0, avg;

	for (i = 0; i < 5; i++) {
		printf("%d��° ������ �Է��ϼ��� : ", i + 1);
		scanf_s("%d", &arr[i]);
		sum += arr[i];
	}
	avg = sum / (sizeof(arr)) / (sizeof(int));
	printf("���� : %d, ��� : %d \n", sum, avg);

	return 0;
}
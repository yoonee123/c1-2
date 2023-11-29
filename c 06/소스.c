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
	printf("\n약수의 개수는 %d입니다.", a);*/

	/*int num;
	int a = 0;
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			a++;
		}
	}
	if (a == 2)
		printf("소수");
	else
		printf("소수아님"); */

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
	printf("x와 y를 입력하십시오.");
	scanf_s("%d",&x);
	scanf_s("%d",&y);

	if (x > 0 && y > 0)
		printf("1사분면");
	else if (x < 0 && y > 0)
		printf("2사분면");
	else if (x > 0 && y < 0)
		printf("4사분면");
	else
		printf("3사분면");*/

	int arr[5];
	int i, sum = 0, avg;

	for (i = 0; i < 5; i++) {
		printf("%d번째 정수를 입력하세요 : ", i + 1);
		scanf_s("%d", &arr[i]);
		sum += arr[i];
	}
	avg = sum / (sizeof(arr)) / (sizeof(int));
	printf("총점 : %d, 평균 : %d \n", sum, avg);

	return 0;
}
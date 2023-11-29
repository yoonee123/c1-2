#include <stdio.h>
int c() {
	int sum = 0, i, j; // 지역 변수
	scanf_s("%d %d", &i, &j);
	sum = i + j;

	return sum;
}
int main3() {
	int a = c();
	printf("입력받은 두개의 값의 합은 : %d", a);
}
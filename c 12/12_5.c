#include <stdio.h>
int aaa() {
	int a;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &a);
	return a % 2;
}
int main5() {
	if (aaa()==0)
	{
		printf("¦���Դϴ�");
	}
	else
	{
		printf("Ȧ���Դϴ�");
	}
}
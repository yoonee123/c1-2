#include <stdio.h>
void a(void) {
	int i;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &i);
	if (i % 2 == 0)
	{
		printf("�Է��Ͻ� ������ ¦���Դϴ�");
	}
	else
	{
		printf("�Է��Ͻ� ������ Ȧ���Դϴ�");
	}
}
void main2(void) {
	a();
 }
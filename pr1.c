#include <stdio.h>
//void main() 
//{
//	int arr[5][5];
//	int i, j;
//	int num = 1;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			arr[i][j] = num++;
//			printf("%2d ", arr[i][j]);
//			if (arr[i][j] % 5 == 0)
//			{
//				printf("\n");
//			}
//		}
//	} // 1���� 25���� ���ʴ��
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 4; j >= 0; j--)
//		{
//			printf("%2d ", arr[j][i]);
//		}
//		printf("\n");
//	} // 1�� ������ ������ �Ʒ��� (�Ϻ���ȭ)
//	printf("\n");
//	for (i = 4; i >= 0; i--)
//	{
//		for (j = 4; j >= 0; j--)
//		{
//			printf("%2d ", arr[i][j]);
//		}
//		printf("\n");
//	}
} // 1�� �� ������ �Ʒ����� �������� �ö�
//int input()
//{
//	int num1, num2;
//	scanf_s("%d %d", &num1, &num2);
//	return sum(num1, num2);
//}
//int sum(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	printf("�հ� : %d", input());
//
//	return 0;
//}

//��ǲ�Լ��� ������Ѽ� num1�� num2�� �Է��ϰ� sum�Լ��� ��ȯ�Ѵ�.
//num1�� num2�� a�� b�� ���� a + b���� ��ȯ�Ѵ�.
//�����Լ����� ����Ʈ������ input()�� �ҷ��´�.
//printf sum�� �ȵǴ� ������ ��ǲ�Լ����� �Է����� sum���� ���� �����ϰ�, �ٽ� sum�Լ�����
//�հ谪�� ��ȯ �޾ƾ� �ϱ� �����̴�.

//int input()
//{
//	int num;
//	scanf_s("%d", &num);
//	return hap(num);
//}
//int hap(int a)
//{
//	int i, sum = 0;
//	for (i = 0; i <= a; i++)
//	{
//		sum = sum + i;
//	}
//	return sum;
//}
//int main()
//{
//	printf("�Է��� �������� �հ�� : %d", input());
//}

// ���α׷��� ������ main() -> input() -> hap() -> input() -> main()
// input�Լ����� hap�Լ��� �ҷ����� �ʾҴٸ� ����Ʈ���ȿ� hap(input())�̶�� �������.

//int input()
//{
//	int num;
//	scanf_s("%d", &num);
//	return num;
//}
//int divisor(int a)
//{
//	int i;
//	printf("�Է��� ���� ����� : ");
//	for (i = 1; i <= a; i++)
//	{
//		if (a % i == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//}
//int main()
//{
//	divisor(input());
//
//	return 0;
//}

//main �Լ����� input�� ���� �ҷ�����, �Է¹��� ���� divisor(int a)�� ��ȯ�Ѵ�.
//divisor�Լ����� ����Ʈ ���� ������� ������ ����Ʈ���� ���� ���
//���α׷��� ������ main() -> input() -> divisor()
//divisor�Լ����� ��ȯ������ ���⿡ ���α׷��� divisor���� ����.

//int input()
//{
//	int num;
//	scanf_s("%d", &num);
//	return divisor(num);
//}
//int divisor(int a)
//{
//	int i;
//	printf("�Է��� ���� ����� : ");
//	for (i = 1; i <= a; i++)
//	{
//		if (a % i == 0)
//		{
//			output(i);
//		}
//	}
//}
//int output(int b)
//{
//	printf("%d ", b);
//}
//int main()
//{
//	input();
//
//	return 0;
//}

//main�Լ����� input�Լ��� �ҷ���. ��ǲ�Լ����� num���� �Է��ϰ� divisor �Լ��� ���±⿡
//divisor�Լ����� ������ �۵���. divisor�Լ��ȿ��� ����� ���� output���� ������ 
//output�Լ��ȿ� ����Ʈ ���� �ҷ����� �ڵ尡 ����.
//���α׷��� ��������� main() -> input -> divisor() -> output()

//void swap(int* a, int* b)
//{
//	int temp = 0;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//
//}
//int main()
//{
//	int x, y;
//	scanf_s("%d %d", &x, &y);
//	swap(&x, &y);
//
//	printf("�ΰ��� ���� ��ȯ�� ����� %d %d", x, y);
//}

// a�� �ּҰ� �ű�� *�� �ٿ��� �� �ּ� �ȿ� ���� ���� ��.
// �׷��Ƿ� ������ �� ���� *�� �ٿ��� �� �ּ� �ȿ� ������

//void main() {
//	int arr[5];
//	int i;
//	int* p = arr;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d��° ���� �Է��ϼ��� : ", i + 1);
//		scanf_s("%d", p + i);
//	}
//	printf(" �Է��� ���� : ");
//	for (i = 0; i < 5; i++)
//	{
//		printf(" %d ", p[i]);
//	}
//	return 0;
//}
//}
//* �����ڷ� arr�� ù ��° �ּҷ� ����, �ݺ��� �ȿ� scanf�� p�� ���� ���������� �Է���.
//�Է��� ���� p�迭�� �״�� ���
//*p = arr�� p�� arr�� �Ǿ��ٰ� �����ϸ� ��(������ ô �ϴ� ����)
//���� �ڵ忡 *�� �ȵǴ� ������ scanf�� ��� ����

//void main() {
//	int arr[5][5];
//	int i, j;
//	int* p = arr; //2���� �迭�� 1�������� ��źȭ �ϴ� ����
//	int cnt = 1;
//
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			*p = cnt++; //p�� ����Ű�� ��ġ�� cnt���� ������
//			printf(" %2d", *p);
//		}
//		printf("\n");
//	}
//}
//���� �ڵ忡 *�����ڸ� p�տ� ���� ������ ���߹迭�̶� [i][j]�� �Ұ����ϱ� �����̴�.

//*�� �ּ� �տ� ����
//int *ip == arr; �� �� 
//*ip == arr[0]
//*(ip + i) == arr[i]
//����
//*ip == *arr
//*(ip + i) == *(arr + i)

//int sum(int *p)
//{
//	int hap = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		hap = hap + p[i];
//	}
//	return hap;
//}
//int main()
//{
//	int arr[10];
//	int cnt = 10;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = cnt;
//		cnt = cnt + 10;
//	}
//	sum(&arr);
//	printf("1���� 10 ������ �հ� : %d", sum(&arr));
//}
//int *p�� arr�� �ּҷ� ���� ������ print�� sum �Լ� �ȿ��� 
//�迭�� �����Ѵ�. �� ���� hap�� �־��� ������
//sum�ڿ� arr�� ���ش�.

//int main()
//{
//	int arr[5];
//	input(arr);
//	output(arr);
//}
//int input(int *p)
//{
//	int i, j;
//	for (i = 0; i < 5; i++)
//	{
//		scanf_s("%d", &p[i]);
//	}
//}
//int output(int *o)
//{
//	printf("�Է��� ���� : ");
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d, ", o[i]);
//	}
//}
//main�Լ����� arr�迭�� ����� input���� ��������.
//input�Լ��� *p�� arr�迭�� �ؼ��ϰ� scanf�� p�� �ּҸ� �ϳ��� �ҷ��� �Է�
//�ٽ� main���� ���� �Էµ� arr�� output���� ��������.
//output�� o�� �ؼ��ϰ� �Է��� ���� �ϳ��� ����Ѵ�.
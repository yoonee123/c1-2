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
//	} // 1부터 25까지 차례대로
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 4; j >= 0; j--)
//		{
//			printf("%2d ", arr[j][i]);
//		}
//		printf("\n");
//	} // 1이 오른쪽 위부터 아래로 (일본만화)
//	printf("\n");
//	for (i = 4; i >= 0; i--)
//	{
//		for (j = 4; j >= 0; j--)
//		{
//			printf("%2d ", arr[i][j]);
//		}
//		printf("\n");
//	}
} // 1이 맨 오른쪽 아래에서 왼쪽으로 올라감
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
//	printf("합계 : %d", input());
//
//	return 0;
//}

//인풋함수를 실행시켜서 num1과 num2를 입력하고 sum함수에 반환한다.
//num1과 num2가 a와 b로 들어가서 a + b값을 반환한다.
//메인함수에서 프린트문으로 input()을 불러온다.
//printf sum이 안되는 이유는 인풋함수에서 입력한후 sum에다 값을 전달하고, 다시 sum함수에서
//합계값을 반환 받아야 하기 때문이다.

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
//	printf("입력한 값까지의 합계는 : %d", input());
//}

// 프로그램의 순서는 main() -> input() -> hap() -> input() -> main()
// input함수에서 hap함수를 불러오지 않았다면 프린트문안에 hap(input())이라고 써줘야함.

//int input()
//{
//	int num;
//	scanf_s("%d", &num);
//	return num;
//}
//int divisor(int a)
//{
//	int i;
//	printf("입력한 값의 약수는 : ");
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

//main 함수에서 input을 먼저 불러오고, 입력받은 값을 divisor(int a)에 반환한다.
//divisor함수에서 프린트 문을 만들었기 때문에 프린트문이 정상 출력
//프로그램의 순서는 main() -> input() -> divisor()
//divisor함수에서 반환문장이 없기에 프로그램은 divisor에서 끝남.

//int input()
//{
//	int num;
//	scanf_s("%d", &num);
//	return divisor(num);
//}
//int divisor(int a)
//{
//	int i;
//	printf("입력한 값의 약수는 : ");
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

//main함수에서 input함수를 불러옴. 인풋함수에서 num값을 입력하고 divisor 함수로 보냈기에
//divisor함수에서 포문을 작동함. divisor함수안에서 약수의 값을 output으로 보내고 
//output함수안에 프린트 문을 불러오며 코드가 끝남.
//프로그램의 진행순서는 main() -> input -> divisor() -> output()

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
//	printf("두개의 값을 변환한 결과는 %d %d", x, y);
//}

// a는 주소고 거기다 *을 붙여서 그 주소 안에 값을 넣은 것.
// 그러므로 스왑을 할 때도 *을 붙여서 그 주소 안에 들어가야함

//void main() {
//	int arr[5];
//	int i;
//	int* p = arr;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d번째 값을 입력하세요 : ", i + 1);
//		scanf_s("%d", p + i);
//	}
//	printf(" 입력한 값은 : ");
//	for (i = 0; i < 5; i++)
//	{
//		printf(" %d ", p[i]);
//	}
//	return 0;
//}
//}
//* 연산자로 arr의 첫 번째 주소로 갔음, 반복문 안에 scanf로 p의 값에 순차적으로 입력함.
//입력한 값을 p배열로 그대로 출력
//*p = arr은 p가 arr이 되었다고 생각하면 됨(서로인 척 하는 관계)
//위에 코드에 *이 안되는 이유는 scanf를 썼기 때문

//void main() {
//	int arr[5][5];
//	int i, j;
//	int* p = arr; //2차원 배열을 1차원으로 평탄화 하는 역할
//	int cnt = 1;
//
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			*p = cnt++; //p가 가리키는 위치에 cnt값을 저장함
//			printf(" %2d", *p);
//		}
//		printf("\n");
//	}
//}
//위에 코드에 *연산자를 p앞에 붙인 이유는 이중배열이라 [i][j]가 불가능하기 때문이다.

//*은 주소 앞에 쓰임
//int *ip == arr; 일 때 
//*ip == arr[0]
//*(ip + i) == arr[i]
//또한
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
//	printf("1부터 10 까지의 합계 : %d", sum(&arr));
//}
//int *p로 arr의 주소로 들어갔기 때문에 print문 sum 함수 안에도 
//배열이 들어가야한다. 그 값에 hap을 넣었기 때문에
//sum뒤에 arr을 써준다.

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
//	printf("입력한 값은 : ");
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d, ", o[i]);
//	}
//}
//main함수에서 arr배열을 만들어 input으로 가져간다.
//input함수는 *p로 arr배열을 해석하고 scanf로 p의 주소를 하나씩 불러와 입력
//다시 main으로 가서 입력된 arr을 output으로 가져간다.
//output은 o로 해석하고 입력한 값을 하나씩 출력한다.
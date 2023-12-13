#include <stdio.h>
//main 함수에서 10개의 방을 가지는 배열을 생성한 후 10~100까지의 값을 10 간격으로
//저장한 후 sum 함수에서 배열의 값들의 합계를 구하고 합계의 출력을 main 함수에서 하시오.
//int main()
//{
//	int arr[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
//	sum(&arr);
//	printf("\n합계 : %d", sum(arr));
//}
//	// int *p == int p[]
//int sum(int *p) // p는 포인터 변수이고, arr는 main에서 만든 배열의 주소 (0번방 주소)
//{
//	int hap = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]); // *(p+i) == p[i]
//		hap = hap + p[i];
//	}
//	return (hap);
//}
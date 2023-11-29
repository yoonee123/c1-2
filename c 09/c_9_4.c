#include <stdio.h>
int main() {
	int arr[5][5];
	int a = 1;
	int b = 1;

	for (int i = 0; i < 5; i++) {
		if (i % 2 == 0) {//È¦¼ö¹øÂ° ÁÙ
			for (int j = 0; j < 5; j++) {
					arr[i][j] = a++;
				printf(" %2d", arr[i][j]);
				b++;
			}
			printf("\n");
		}

		if (i % 2 != 0) {//Â¦¼ö¹øÂ° ÁÙ
			b = a+4;
			for (int j = 0; j < 5; j++) {
				arr[i][j] = b--;
				printf(" %2d", arr[i][j]);
				a++;
			}
			printf("\n");
		}
	}

	return 0;
}

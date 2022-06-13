#include <stdio.h>
int main(void)
{
/*
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			printf("*");
		}
		printf("\n");
	}
*/
/*
	int i, j;
	
	for (i = 2; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %d \n", i, j, i*j);
		}
		printf("\n");
	}
*/
/*
	int i;
	int sum = 0;

	for (i = 1; i <= 10; i++) {
		sum += i;
		if (sum > 30) break;     // 자기코드의 1차 반복문만 탈출한다.
	}
	printf("누적한 값 : %d \n", sum);
	printf("마지막으로 더한 값 : %d \n", i);
*/
/*
	int i;
	int sum = 0;

	for (i = 1; i <= 100; i++) {
		if (i % 3 == 0)   // 3의 배수는 제외하고 합산하는 코드임
			continue;     // 자기코드의 1차 반복문만 증감값으로 이동한다.
		sum += i;
	}
	printf("%d \n", sum);
*/
	int i = 1;
	int sum = 0;

	while (i++ <= 100) {
		if ((i % 3) == 0) {
			continue;
		}
		sum += i;
		//i++;
	}
	printf("%d \n", sum);

	return 0;
}
// [문제]
// 사용자가 계속 정수를 입력받고, 계속 더해 나간다.
// 0을 입력하면 더해나가던 작업을 끝낸다.
#include <stdio.h>
int main(void)
{
/*
	int num;
	int total;

	while (num != 0) {
		printf("정수입력(0:quit): >>");
		scanf_s("%d \n", num);

		total += num;
	}
	printf("%d \n", total);
*/
// [문제]
// 사용자가 계속 정수를 입력받고, 계속 더해 평균을 구한다.
// 몇 개의 정수를 입력하는 갯수를 입력받고
// 평균은 소수 2자리까지 구한다.
/*
	int count, number;
	int total = 0;
	int i = 0;
	double avr;

	printf("입력 정수의 갯수 : >>");
	scanf_s("%d", &count);
	while (i++ < count) {
		printf("정수 입력: >>");
		scanf_s("%d", &number);
		total += number;
	}
	avr = (double)total / count;
	printf("%.2lf \n", avr);
*/
// [문제]
// *****
// ****
// **
// *

	int i = 0, j = 0;
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5-i; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
//[문제]
// 길이10개 배열 선언하고 10개 정수 입력하고, 홀수, 짝수 구분지어
// 출력하는 프로그램을 작성하라
// 홀수 먼저 출력하고, 홀수만 출력하는 함수, 짝수만 출력하는 함수
// 각각 정의하고 호출하는 방식 적용할 것
#include <stdio.h>
/*
void Odd(int *ar, int size);
void Even(int *ar, int size);
int main(void)
{
	int ar[10];

	for (int i = 0; i < sizeof(ar) / sizeof(ar[0]); i++) {
		printf("정수 입력 : >>");
		scanf_s("%d", &ar[i]);
	}
	Odd(ar, sizeof(ar) / sizeof(ar[0]));
	Even(ar, sizeof(ar) / sizeof(ar[0]));

	return 0;
}
void Odd(int *ar, int size)
{
	printf("홀수값 : ");
	for (int i = 0; i < size; i++) {
		if (ar[i] % 2 == 1)
			printf("%d ", ar[i]);
	}
	printf("\n");
}
void Even(int *ar, int size)
{
	printf("짝수값 : ");
	for (int i = 0; i < size; i++) {
		if (ar[i] % 2 == 0)
			printf("%d ", ar[i]);
	}
	printf("\n");
}
*/
//[문제]
// 사용자로부터 10진수로 정수 하나를 입력 받아, 이를 2진수로 변환하여
// 출력한는 프로그램을 작성하라 (Ex. 12 --> 1100)
int main(void)
{
	int ar[10] = { 0, }; int count = 0; int num;

	printf("10진수 정수 입력 : >>");
	scanf_s("%d", &num);       // 41
	while (num > 0) {          // 2진수 --> 저장
		ar[count++] = num % 2;   // 나머지 --> 저장
		//count++;
		num /= 2;              // 새로운 몫
	}
	while(count > 0) {
		//--count;
		printf("%d", ar[--count]);
	}
	printf("\n");

	return 0;
}
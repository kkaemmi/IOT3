// [문제]
// 길이가 5인 int형 배열을 선언하고, 사용자로부터 총 5개의 정수를 입력받자!
// -최대값, 최소값, 총합계 계산하라
/*
#include <stdio.h>
int main(void)
{
	int ar[5];
	int max, min;
	int sum = 0;

	for (int i = 0; i < sizeof(ar) / sizeof(int); i++) {
		printf("정수 입력 : >>");
		scanf_s("%d", (ar + i));
		sum += ar[i];
	}

	max = ar[0];
	min = ar[0];

	for (int i = 1; i < sizeof(ar) / sizeof(int); i++) {
		if (max < ar[i]) max = ar[i];
		if (min > ar[i]) min = ar[i];
	}

	printf("최대값 : %d, 최소값 : %d, 총합계 : %d", max, min, sum);

	return 0;
}
*/
// [문제]
// char형 1차원 배열을 선언과 동시에 "Good Time"으로 내용을 초기화라고,
// 그리고 한 자씩 출력시켜라
#include <stdio.h>
int main(void)
{
	char str[] = "Good Time";   // {'G','o','o','d','','T','i','m','e'};

	printf("%d \n",sizeof(str));
	printf("%d \n",strlen(str));
	//for (int i = 0; i <= strlen(str); i++)
	for (int i = 0; i < strlen(str); i++)
		printf("%c", str[i]);
	printf("\n");

	return 0;
}
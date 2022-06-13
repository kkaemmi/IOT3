//[문제]
// 정렬 알고리즘 : 오름차순, 내림차순 -> 가장 쉬운 버블 정렬 알고리즘을 구현하라
// (3,2,4,1) --> 2 3 4 1 --> 2 3 1 4 --> 2 1 3 4 --> 1 2 3 4)
/*
#include <stdio.h>
int AcenSort(int* ar, int size);
int main(void)
{
	int ar[5];
	int i;

	for (i = 0; i < 5; i++) {
		printf("숫자 입력");
		scanf_s("%d", &ar[i]);
	}
	AcenSort(ar, sizeof(ar) / sizeof(int));
	for (i = 0; i < 5; i++) {                  // i -> 0, 1, 2, 3,          ar[0],ar[1],ar[2],ar[3],ar[4]
		printf("%5d", ar[i]);                  // i = 0, j -> 0, 1, 2, 3
	}                                          // i = 1, j -> 0, 1, 2 
	                                           // i = 2, j -> 0, 1
	return 0;                                  // i = 3, j -> 0
}
int AcenSort(int* ar, int size)   // int *ar = ar, int size = sizeof(ar) / sizeof(int) = 5
{
	int temp;
	int len = size - 1;   // 4 -> 3   2   4   1
	int i,j;

	for (i = 0; i < len; i++) {
		for (j = 0; j < len - i; j++) {
			if (ar[j] > ar[j + 1]) {
				temp = ar[j + 1];
				ar[j + 1] = ar[j];
				ar[j] = temp;
			}
		}
	}
}
*/
//[문제]
// 성적관리프로그램을 작성하라 과목은 국어, 영어, 수학, 국사 이고,
// 학생은 철희, 영희, 영수이다. 개인별 총점과 과목별 총점이 있다.
#include <stdio.h>
int score[5][5];
void writeRecord(void);
void writeSumRecord(void);
void showAllRecord(void);
int main(void)
{
	writeRecord();       // 입력 score[0], score[1], score[2], score[3], score[4]
	writeSumRecord();    // 처리
	showAllRecord();     // 출력

	return 0;
}
void writeRecord(void)
{
	int sum = 0;
	int i,j;

	for (i = 0; i < 4; i++) {
		sum = 0;
		printf("%d번째 학생 성적 입력 \n", i + 1);
		for (j = 0; j < 4; j++) {
			printf("과목 %d:", j + 1);
			scanf_s("%d", &score[i][j], sizeof(score));
			sum += score[i][j];
		}
		score[i][4] = sum;
	}
}
void writeSumRecord(void)
{
	int verticalsum = 0;
	int i, j;

	for (i = 0; i < 4; i++) {
		verticalsum = 0;
		for (j = 0; j < 4; j++) {
			verticalsum += score[j][i];
		}
		score[4][i] = verticalsum;
	}
	score[4][i] = verticalsum;
	score[4][4] += verticalsum;
}
void showAllRecord(void)
{
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%5d", score[i][j]);
		}
		printf("\n");
	}
}
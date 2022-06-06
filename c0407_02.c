#include <stdio.h>
/*
void main(void)
{
	int score[5]; int i; int total = 0; double avg; int count;
	//  --------  -----  -------------  ----------  ----------
	count = sizeof(score) / sizeof(score[0]);
	for (i = 0; i < count; i++) 
		scanf_s("%d", &score[i]);
	for (i = 0; i < count; i++)
		total += score[i];
	avg = total / (double)count;
	for (i = 0; i < count; i++)
		printf("%5d", score[i]);
	printf("\n");
	printf("총점 : %d\t", total);
	printf("평균 : %.2f\n", avg);
}
*/

void main(void)
{
	// 1.문제
	// 배열 이용 : 1 ~ 10 중 짝수만 입력시키고 --> 출력
	int arData[5] = {0,};
	for (int i = 0; i < 5; i++) {
		arData[i] = (i + 1) * 2;
		//printf("%d\t", arData[i]);
		printf("%d\t", *(arData+i));
	}
	printf("\n----------\n");
	// 2.문제
	// 1 ~ 100까지 --> 짝수의 합 : 출력, i = 0출력
	int ardata[100] = {0,};
	int total = 0;
	for (int i = 0; i < 100; i++) {
		ardata[i] = (i + 1);
		if (ardata[i] % 2 == 0)
			total += ardata[i];
	}
	printf("%d\n", total);
	printf("\n----------\n");
	// 3.문제
	// A, B, D, E, F  --> C : 제외 --> 출력,배열이용(char archar[5])
	// 0  1  2  3  4      2  <-- i
	// 65 66 68 69 70 --> 67
	char archar[5] = {' ', };
	for (int i = 0; i < 5; i++) {
		archar[i] = (i > 1) ? (66 + i) : (65 + i);
		printf("%c", archar[i]);
	}
	printf("\n----------\n");
	// 4.문제
	// aBcDeFgHiJkLmNoPqRsTuVwXyZ  <-- 배열 저장,출력 3항연산자
	// 012345 <-- 짝수 : 소문자(97), 홀수 : 대문자(65)
	char arChar[26] = { " ", };
	for (int i = 0; i < 26; i++) {
		arChar[i] = (i % 2 == 0) ? (97 + i) : (65 + i);
		printf("%c", arChar[i]);
	}
	// printf("\n%s", arChar);
	

}
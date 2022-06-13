#include <stdio.h>
#include <string.h>
int main(void)
{
	/*
		int ar1[5] = { 1,2,3,4,5 };
		int ar2[5] = { 1, };
		int ar3[5] = { 0, };
		double ar4[5] = { 0.0, };
		char ar5[5] = { 'a','p','p','l','e', '\0' };
		char ar6[6] = "apple";
	*/
	/*
		int score[5];
		int i;
		int total = 0;
		double avg;

		for (i = 0; i < 5; i++) {
			scanf_s("%d", &score[i]);
		}
		for (i = 0; i < 5; i++) {
			total += score[i];
		}
		avg = (double)total / (sizeof(score) / sizeof(int));

		for (i = 0; i < 5; i++) {
			printf("%5d", score[i]);
		}
		printf("\n");

		printf("평균 : %.1lf \n", avg);

		return 0;
	*/
	/*
		char str[80] = "applejam";
		char str1[3][80] = { "applejam", "orange", "banana" };
	//						   str[0]     str[1]    str[2]
		printf("%s \n", str);
		str[5] = '\0';
		printf("%s \n", str);
		printf("%s \n", str1[0]);
		printf("%s \n", str1[1]);
		printf("%s \n", str1[2]);
		//scanf_s("%s", str, sizeof(str));   // beargrape
		//printf("%s \n", str);

		return 0;
	*/
	char str1[80] = "cat dog";
	char str2[80];

	//*str2 = *str1; --> 문제가 있으니, 문자열끼리의 대입은 --> strcpy()를 사용함
	// 구조체에서 문자열 입력은 --> strcpy() 사용함

	strcpy_s(str2, sizeof(str2),str1);
	printf("%s, %s \n", str1, str2);
	strcpy_s(str1, sizeof(str1), "tiger lion");
	strcpy_s(str2, sizeof(str2), "tiger1 lion1");
	printf("%s, %s \n", str1, str2);

	return 0;
}
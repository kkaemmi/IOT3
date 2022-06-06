#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main(void)
{
	int i; float f; double d; char c; char * s = ""; char ss[15];
	printf("정수 입력 방법 : >>"); scanf_s("%d", &i, sizeof(i)); printf("%d \n", i);
	printf("실수 입력 방법 : >>"); scanf_s("%f", &f, sizeof(f)); printf("%f \n", f);
    printf("확정실수 입력 방법 : >>"); scanf_s("%lf", &d, sizeof(d)); printf("%lf \n", d); // 10.5enter
	getchar();  // enter받아서 
	printf("문자 입력 방법 : >>"); scanf_s("%c", &c, sizeof(c)); printf("%c \n", c);
	// printf("문자열 입력 방법1 : >>"); scanf_s("%s", s); printf("%s \n", s);
	printf("문자열 입력 방법2 : >>"); scanf_s("%s", ss, sizeof(ss)); printf("%s \n", ss);
	// 배열명 --> 주소 --> ss주소(&ss -> NO), 포인터 변수 --> 주소 --> s주소(&s -> NO)
	getchar();  // enter받아서 
	printf("문자열 입력 방법3 : >>"); gets(ss); printf("%s \n", ss);
}
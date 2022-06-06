#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// 제어문자 : \n ㅡㅡ> 줄바꿈, \t --> tab key = 8칸,4칸
//            출력시 : \\ --> (\), \", \', %%(%)
//            입력,출력에서 많이 사용, 이유 --> 형식을 적용
void main(void)
{
	char* name = "고양이";   // char* name,char * name,char *name
	int age = 3;
	char gender = 'M';
	float weight = 6.3;
	char data = 67;
	// 제어문자
	printf("%s \n", name);   // %s <-- 문자열의 주소를 받는다.
	puts(name);
	printf("\"나이:%d살\"\n", age);
	printf("\\몸무게:%.1fkg\\ \n", weight);
	// 자동형변환
	printf("%d \n", 11 / 9);     // 정수(몫) <-- 정수/정수
	printf("%lf\n", 11.0 / 9);   // 실수(소숫점) <-- 실수/실수
	printf("%c \n", data);
	printf("%d \n", data);
	// 강제형변환
	printf("%lf \n", 11 / (double)9);
	printf("%.2lf \n", 8.43 + 2.59);
	printf("%.2lf \n", (int)8.43 + 2.59);
	printf("%d \n", (int)(8.43 + 2.59));
	printf("%d \n", (int)8.43 + (int)2.59);
	// 문자형변환
	printf("%d \n", 'A' + 1);
	printf("%c \n", 'A' + 1);





}
#include <stdio.h>
void main(void)
{
	int age = 20;
	float height = 170.5F;
	double weight = 70.956;
	char grade = 'A';
	char * name = "대한민국";

	printf("나이 : %d살 \n", age);
	printf("키 : %.1fcm \n", height);
	printf("몸무게 : %.2fkg \n", weight);
	printf("수행평가 : %c등급 \n", grade);
	printf("국적 : %s \n", name);

	// 자동형변환 : 정수 <-- 정수 + 정수
	//              실수 <-- 정수 + 실수
	//              정수 <-- 문자
	//              (아스키코드)
	//              문자 <-- 정수
	// 강제형변환 : (int) 3.567 --> 3
	//              (float)  3  --> 3.0
	// 변수를 만드는 방법 --> man_boy, manBoy(많이 사용함, 카멜표기법)
}
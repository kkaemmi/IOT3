// 함수 정의(선언) <-- 함수 원형
// 함수 실행 <-- main()
// 함수 구현(설계)
#include <stdio.h>
/*
int sum(int x, int y);                // 함수 --> return : be(자료형 제시), not(void)
int main(void)                        //      --> 매개변수 : be(자료형 변수 선언), not(void)
{                                     //      --> 구현해야하는 알고리즘 굿 
	int a = 10, b = 20;
	int result;

	result = sum(a, b);
	printf("result : %d \n", result);

	return 0;
}
int sum(int x, int y)     // int x = a = 10, int y = b = 20, return = 30 <-- RAM stack
{
	int temp;             // <-- 지역 변수

	temp = x + y;

	return temp;
}
*/
/*
int* get_num(void);
void main(void)
{
	int* result;

	result = get_num();
	printf("반환값 : %d \n", *result);
}
int* get_num(void)
{
	int* num;

	printf("양수 입력 : >>");
	scanf_s("%d", &num);
	while (num < 0) {
		printf("양수값만 받습니다. \n");
		printf("양수 입력 : >>"); 
		scanf_s("%d", &num);
	}
	return &num;
}
*/

void print_char(char ch, int count);
void main(void)
{
	print_char('@', 5);
}
void print_char(char ch, int count)
{
	int i;

	for (i = 0; i < count; i++)
	{
		printf("%c", ch);
	}
}
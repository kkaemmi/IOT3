// 함수 : 3가지
// 1. 함수의 정의(선언)
// 2. 함수 구현(설계)
// 3. 함수 실행(호출하는 쪽에 실행, main)
// 함수명( ) --> 변수명, 함수명 --> 주소 --> *(포인터 변수) / char* / 배열명 / 함수명
#include <stdio.h>
int sum(int x, int y); // 매개변수 2개(인자값 2개),함수처리,결과값 --> int전달
// void sum(void);           <-- 받을 데이터는 없고, 처리해서, 결과값 전달하는 것도 없다.
// void sum(int x, int y);   <-- 받을 데이터는 있고, 처리해서, 결과값 전달하는 것은 없다. 
// int sum(void);            <-- 받을 데이터는 없고, 처리해서, 결과값 전달할 것은 있다.
void main(void)
{
	int a = 100, b = 200; int result;
	result = sum(a, b); // 함수의 실행
	printf("result : %d \n", result);
}
int sum(int x, int y)  // 함수의 구현, int x = 100 , int y = 200
{
	int temp;
	temp = x + y;
	return temp;
}
/*
함수
   - 변수이름처럼 뒤에 항상()가 있다.
   - 사용자가 만들기도 하고, 내장함수도 있다.
   - 예약어 = 키워드 뒤에 ()가 있는 것은 함수가 아니다.
     (if(), switch(), for(), while(), ...
   - 함수 안에 함수를 설계 또는 구현할 수 없다.

함수의 요소
   - 함수명(변수명 처럼 사용, 명사 < 동사)
   - 리턴타입 함수명(매개변수,매개변수,...) <-- 구현,...
     {
	   실행할 문장;
	   (return;) <-- 생략가능(리턴타입 : void)
	   return ★(값 or 주소);      리턴타입 : char,char*,int,long,float,double
	 }

1) 함수 선언(정의) <-- 함수명 무엇으로 했으면 좋겠다.
                   <-- 매개변수를 몇 개 만들어야지?
				   <-- 리턴값을 어떻게 정할 것인가?

2) 함수 구현(설계) <-- 실행할 문장을 어떻게 구사할 것인지?
                   <-- 리턴값을 고려해서 실행할 문장을 작성한다.
				   <-- 리턴 타입도 고려해야 한다.

3) 함수 실행(결과)
*/
/*
#include <stdio.h>
int func(int a);
void main(void)
{
	int x;
	x = func(3);
	printf("%d\n", x);
}
int func(int a) {
	int y;
	y = 2 * a + 1;
	return y;
}
*/
#include <stdio.h>
void printFrom1To10(void);
int getTootalFrom(int num);
int change(int num);
// 5개 정수 입력을 받아서 -> 최대값, 최소값 : 배열, 포인터
int* getMaxandMin(int arData[]);

void main(void)
{
	//printFrom1To10();
	//printf("%d\n", getTootalFrom(10));
	//printf("%d\n", change(10));
	//printf("%d\n", change(9));
	int arData[5] = { 30,20,50,40,90 };
	int* Max_Min = getMaxandMin(arData);

	printf("최대값 : %d, 최소값 : %d \n", Max_Min[0], Max_Min[1]);
}
int* getMaxandMin(int arData[]) // int arData[] = arData;
{
	int maxandmin[2] = { 0, };
	int max = arData[0]; // 30
	int min = arData[0]; // 30
	for (int i = 0; i < 5; i++) {
		if (max < arData[i]) { max = arData[i]; }
		if (min > arData[i]) { min = arData[i]; }
	}
	maxandmin[0] = max;
	maxandmin[1] = min;
	return maxandmin;
}
void printFrom1To10(void)
{
	for (int i = 0; i < 10; i++) {
		printf("%d\n", i + 1);
	}
}
int getTootalFrom(int num)
{
	int total = 0;
	for (int i = 0; i < num; i++) {
		total += (i + 1);
	}
	return total;
}
int change(int num)  // 짝수 -> 홀수, 홀수 -> 짝수
{
	return ++num;
}
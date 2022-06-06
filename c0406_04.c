/*
#include <stdio.h>
int get_num(void);
void main(void)
{
	int result;
	result = get_num();
	printf("result : %d \n", result);
	result = get_num();
	printf("result : %d \n", result);
}
int get_num(void)
{
	int num;
	printf("양수 입력 >>"); scanf_s("%d", &num);
	return num;
}
*/
//    RAM 영역
//  stack영역        heap영역          data영역
//  지역변수        동적메모리         전역변수(main문 밖에서 정의)
//  일반함수        (malloc())         정적변수(static)
// (호출종료)     (회수하고싶을때)     (main프로그램 종료)  <-- 생명주기

#include <stdio.h>
/*
void print_char(char ch, int couint);
void main(void)
{
	print_char('@', 5);
}
void print_char(char ch, int count)
{
	int i;
	for (i = 0; i < count; i++) {
		printf("%c", ch);
		ch++;
	}
}
*/
/*
void print_line(void);
void main(void)
{
	print_line();
	printf("학번\t이름\t전공\t학점\n");
	print_line();
}
void print_line(void)
{
	for (int i = 0; i < 50; i++) {
		printf("-");
	}
	printf("\n");
}
*/
/*
void fruit(void);
void main(void)
{
	fruit();
}
void fruit(void)  // 재귀함수 --> 자기함수에서 --> 자기함수를 또 호출할 때를 말함 
{                 // 항상 탈출구를 염두해 두어야 함
	printf("Apple\n");
	fruit();
}
*/

void fruit(int count);
void main(void)
{
	fruit(1);
}
void fruit(int count) 
{               
	printf("Apple\n");
	if (count == 5) return;
	fruit(count + 1);
	printf("Jam\n");
}
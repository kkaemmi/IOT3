#include <stdio.h>
int main(void)
{
	int a = 10;
	double b = 20.0;
	char c = 'x';

	int* pa = &a;
	double* pb = &b;
	char* pc = &c;

	printf("int : %#X \n", &a);
	printf("double : %#X \n", &b);
	printf("char : %#X \n", &c);

	printf("int* : %#X \n", &pa);
	printf("double* : %#X \n", &pb);
	printf("char* : %#X \n", &pc);

	printf("int : %#X \n", pa);
	printf("double : %#X \n", pb);
	printf("char : %#X \n", pc);
	printf("----------\n");

	printf("%d, %f, %c \n", a, b, c);
	printf("%d, %f, %c \n", *pa, *pb, *pc);
	printf("----------\n");

	*pa = 111;
	*pb = 222;
	*pc = 'y';

	printf("%d, %f, %c \n", a, b, c);
	printf("%d, %f, %c \n", *pa, *pb, *pc);
	printf("----------\n");
//  포인터변수의 주소 증가, 감소는 --> 포인터 배열에서 설명합니다.
	return 0;
}
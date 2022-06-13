#include <stdio.h>
void main(void)
{
/*
	int n1 = 2;
	int n2 = 4;
	int n3 = 6;

	printf("%d * %d + %d = %d", n1, n2, n3, n1*n2 + n3);
*/
	int n1, n2, n3;
	int resuit;

	printf("세 개의 정수 입력:>>");
	scanf_s("%d %d %d", &n1, &n2, &n3);
	resuit = n1 * n2 + n3;
	printf("%d x %d + %d = %d \n", n1, n2, n3, resuit);
}
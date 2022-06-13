#include <stdio.h>

void func(int(*fp)(int a, int b))
{
	int a, b;
	int res;

	printf("두 정수 입력 : >>");
	scanf_s("%d,%d", &a, &b);
	res = fp(a, b);
	printf("결과값 : %d \n", res);
}
int sum(int a, int b)
{
	return a + b;
}
int mul(int a, int b)
{
	return a * b;
}
int max(int a, int b)
{
	if (a > b) return a;
	else return b;
}
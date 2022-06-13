#include <stdio.h>
int main(void)
{
/*
	char ch;
	int in;
	double db;

	char *pc = &ch;
	int *pi = &in;
	double *pd = &db;

	printf("%d, %d, %d \n", sizeof(&ch), sizeof(&in), sizeof(&db));   // 변수 - 자신 주소
	printf("%d, %d, %d \n", sizeof(pc), sizeof(pi), sizeof(pd));      // 기억하고 있는것 - 주소
	printf("%d, %d, %d \n", sizeof(*pc), sizeof(*pi), sizeof(*pd));   // 값을읽은값 - 크기
*/
/*
	int a = 10;
	int *p = &a;
	double *pd;

	pd = p;   // pd(double형) = p(int형)
	printf("%lf \n", *pd);   // 실패
*/
/*
	double a = 3.4;
	double *pd = &a;
	int *pi;
	pi = (int *)pd;

	printf("%d \n", *pi); // 실패
*/
	int *p;
	p = (int *)100;   // (int *)100 <-- 주소임 <-- 임베디드용 코딩에선는 많이 사용함.
	*p = 200;         // 200 <-- 값
	printf("%d, %d \n", p, *p);

	return 0;
}
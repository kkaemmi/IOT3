#include <stdio.h>
int main(void)
{
	/*
	char ch; int in; double dou;
	char*pc = &ch;
	int*pi = &in;
	double*pd = &dou;
	printf("%d,%d,%d\n", sizeof(&ch), sizeof(&in), sizeof(&dou));
	printf("%d,%d,%d\n", sizeof(pc), sizeof(pi), sizeof(pd));
	printf("%d,%d,%d\n", sizeof(*pc), sizeof(*pi), sizeof(*pd));
	*/
	// =============================================================
	/*
	int a = 10; int*p = &a;
	double*pd;
	pd = p;            // pd <-- p(int), 잘못된 코드임
	pd = (double*)p;   // double : pd <-- p(int), 잘못된 코드임
	printf("%#X,%#X\n", pd, p);
	printf("%.1lf,%d\n", *pd,*p);
	*/
	// =============================================================
	/*
	double a = 3.14;
	double*pd = &a;
	int*pi;
	pi = pd;          // 잘못된 코드임
	printf("%d\n", *pi);
	*/
	// =============================================================
	int*p;
	p = (int*)100;             // 100이 주소가 된것임 임베디드 장비에서 직접 주소를 설정할 수 있음
	*p = 10;
	printf("%d,%#X\n",*p,p);   // Windows프로그램에서는 잘못된 코드임
							   // 임베디드 장비쪽에서는 --> 이러한 코드가 즐비함
	// =============================================================
	return 0;

}
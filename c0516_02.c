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

	printf("%d, %d, %d \n", sizeof(&ch), sizeof(&in), sizeof(&db));   // ���� - �ڽ� �ּ�
	printf("%d, %d, %d \n", sizeof(pc), sizeof(pi), sizeof(pd));      // ����ϰ� �ִ°� - �ּ�
	printf("%d, %d, %d \n", sizeof(*pc), sizeof(*pi), sizeof(*pd));   // ���������� - ũ��
*/
/*
	int a = 10;
	int *p = &a;
	double *pd;

	pd = p;   // pd(double��) = p(int��)
	printf("%lf \n", *pd);   // ����
*/
/*
	double a = 3.4;
	double *pd = &a;
	int *pi;
	pi = (int *)pd;

	printf("%d \n", *pi); // ����
*/
	int *p;
	p = (int *)100;   // (int *)100 <-- �ּ��� <-- �Ӻ����� �ڵ������� ���� �����.
	*p = 200;         // 200 <-- ��
	printf("%d, %d \n", p, *p);

	return 0;
}
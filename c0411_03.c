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
	pd = p;            // pd <-- p(int), �߸��� �ڵ���
	pd = (double*)p;   // double : pd <-- p(int), �߸��� �ڵ���
	printf("%#X,%#X\n", pd, p);
	printf("%.1lf,%d\n", *pd,*p);
	*/
	// =============================================================
	/*
	double a = 3.14;
	double*pd = &a;
	int*pi;
	pi = pd;          // �߸��� �ڵ���
	printf("%d\n", *pi);
	*/
	// =============================================================
	int*p;
	p = (int*)100;             // 100�� �ּҰ� �Ȱ��� �Ӻ���� ��񿡼� ���� �ּҸ� ������ �� ����
	*p = 10;
	printf("%d,%#X\n",*p,p);   // Windows���α׷������� �߸��� �ڵ���
							   // �Ӻ���� ����ʿ����� --> �̷��� �ڵ尡 �����
	// =============================================================
	return 0;

}
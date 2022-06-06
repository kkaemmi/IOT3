// 1���� ������
//                   int a[&a] = 100;  & --> �ּ�
//                   int b[&b] = 200;
// 1. ����(����) --> int * num[&num] = &a; <-- �ʱⰪ
//                 - int * num1[&num1];
//                   num1 = &b;
// 2. read(�б�)     *num  --> 100����ϰ� ����(��)
//                   = *num1  --> 200����ϰ� ����(��)
// 3. write(����)    *num = 1000; --> a = 1000���� �����
//                   *num1 = 2000; --> b = 2000���� �����
// 4. �ּ��� ���� ����
//                   num <-- a���ּ�
//                   num++; <-- �ּҸ� ������ ������ �� �� ����
//                   num1 <-- b���ּ�
//                   --num1; <-- �ּҸ� ������ ������ �� �� ����
// 1���� �迭 <--> 1���� �����Ϳ� �����͸� �ְŴ� �ްŴ��� �� ����(level�� ���� ��ġ)
#include <stdio.h>
/*
void main(void)
{
	int num = 100;
	int*ptr = &num;
	printf("%#X,%#X\n", &num, ptr);   // �ּ�, �ּ�
	printf("%d,%d\n", num, *ptr);     //  100, 100
	*ptr = 1234;
	printf("%d,%d\n", num, *ptr);     // 1234. 1234
	*ptr = *ptr + 1000;               // 2234
	printf("%d,%d\n", num, *ptr);     // 2234, 2234
	num = num - 1000;                 // 1234
	printf("%d,%d\n", num, *ptr);     // 1234, 1234
	
 // *ptr++;                           // 1�� : ++(�ּҸ� 1ĭ ����) --> 2�� : *(�� read)
 //  prt++;                              1�� : ++(�ּҸ� 1ĭ ����)
	(*ptr)++;                         // 1235

	printf("%d,%d\n", num, *ptr);     // 1235, 1235
}
*/
/*
void main(void)
{
	int a = 10, b = 15, total;
	double avg = 123.35;
	int*pa, *pb;
	int*pt = &total;
	double*pg = &avg;

	// double pi = 3.141592;
    const double pi = 3.141592; // ������ --> ����� �ٲ���(���ȭ�� ����)pi = 3.141592

	pa = &a; 
	pb = &b;

	*pt = *pa + *pb; 
	*pg = *pt / 2.0;

	printf("�� ������ : %d,%d\n", *pa, *pb);
	printf("�� ������ �� : %d\n", *pt);
	printf("�� ������ ��� : %2lf\n", *pg);
	// pi = 200.0;
	printf("%.1f\n", pi);
}
*/
void main(void)
{
	int a = 100; int b = 200; int c = 300;
	const int x = 100;
	const int *pa = &a;   // const *�����ͺ��� = &�ּ�; <-- *�����ͺ����� ���� ������ �� ����
	a = 999;
	*pa = 888;
	int*const pc = &c;
	pc = &a;              // �ڷ���*const����� = &�ּ�; <-- ������ �ٸ� �ּҸ� ������ �� ����

	const int* const pd = &c;
//  1. &pd = c�� ���� ������ �� ����(�� ���� �Ұ�)   <-- �� �Һ�
//  2. pd = &aó�� �ּҸ� ������ �� ����(�ּ� ���� �Ұ�) <-- �ּ� �Һ�

	printf("%d\n", *pa);
	printf("%d\n", *pc);

}
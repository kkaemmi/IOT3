#include <stdio.h>
void main(void)
{
	int a = 10; int b = a; int c = a + 20; double da = 3.5; char ch = 'A';
	printf("a : %d \n", a); printf("b : %d \n", b);
	printf("c :%d \n", c); printf("da : %.1lf \n", da);
	printf("ch : %C \n", ch);
	printf("%ld \n", sizeof(long long));
	printf("---------- \n");
	short sh = 32767;                          // short ���� �ִ� �ʱ�ȭ - 32768, 0 ~ 65535
	int in = 2147483647;                       // int ���� �ִ� �ʱ�ȭ - 2147483648
	long ln = 2147483647;                      // long ���� �ִ� �ʱ�ȭ - -2147483648
	long long lln = 123451234512345;           // ���� ū �� �ʱ�ȭ
	char x = -128;
	char y = -129;
	char x1 = 127;
	char y1 = 128;
	printf("%d, %d \n", x, y);
	printf("%d, %d \n", x1, y1);
	printf("short�� ���� ��� : %d \n", sh);
	printf("int�� ���� ��� : %d \n", in);
	printf("long�� ���� ��� : %d \n", ln);
	printf("long long�� ���� ��� : %d \n", lln);  // long long ���� lld�� ���

}
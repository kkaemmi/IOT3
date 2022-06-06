#include <stdio.h>
void main(void)
{
	char a = 'A';   unsigned char b = 'B';  // ���ں��� --> �ʱⰪ
	char c[10] = "Ansan";                   // ���ڿ����� --> �ʱⰪ, �迭([])
	char * d = "KOREA";                     // ���ڿ����� --> �ʱⰪ, ������(*), �ּ� --> 4byte

	int e = 1000;                           // ���������� --> �ʱⰪ(default)
	long f = 10000L;                        // ���������� --> �ʱⰪ(L)

	float g = 3.141592F;                    // �Ǽ������� --> �ʱⰪ(F)
	double h = 312.141592567;               // �Ǽ������� --> �ʱⰪ(default)

	printf("%d, %d \n", sizeof(char), sizeof(a));     // 1byte
	printf("%d, %d \n", sizeof(c), sizeof(d));        // 1byte
	printf("%d, \n", sizeof("KOREA"));                // ?byte
	printf("%d, %d \n", sizeof(int), sizeof(e));      // 4byte
	printf("%d, %d \n", sizeof(long), sizeof(f));     // 4byte
	printf("%d, %d \n", sizeof(float), sizeof(g));    // 4byte
	printf("%d, %d \n", sizeof(double), sizeof(h));   // 8byte
	// sizeof(����) --> �ڷ����� ũ�⸦ ����ؼ� ��ȯ��
	printf("%d, %c, %u \n", a, a, a);
	printf("%d, %c, %u \n", b, b, b);
	printf("%s, %c, %c, %c, %c, %c, %c \n", c, c[0], c[1], c[2], c[3], c[4], c[5]);
	printf("%s \n", d);
	printf("======================\n");

	printf("%d, %#X, %u \n", e, e, e);
	printf("%ld, %#X, %u \n", f, f, f);
	printf("======================\n"); 
	printf("%f, %5.2f, %.3f %u \n", g, g, g);
	printf("%lf, %6.2f, %.3f \n", h, h, h);
}
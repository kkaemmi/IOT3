#include <stdio.h>
void main(void)
{
	char a = 'A';   unsigned char b = 'B';  // 문자변수 --> 초기값
	char c[10] = "Ansan";                   // 문자열변수 --> 초기값, 배열([])
	char * d = "KOREA";                     // 문자열변수 --> 초기값, 포인터(*), 주소 --> 4byte

	int e = 1000;                           // 정수형변수 --> 초기값(default)
	long f = 10000L;                        // 정수형변수 --> 초기값(L)

	float g = 3.141592F;                    // 실수형변수 --> 초기값(F)
	double h = 312.141592567;               // 실수형변수 --> 초기값(default)

	printf("%d, %d \n", sizeof(char), sizeof(a));     // 1byte
	printf("%d, %d \n", sizeof(c), sizeof(d));        // 1byte
	printf("%d, \n", sizeof("KOREA"));                // ?byte
	printf("%d, %d \n", sizeof(int), sizeof(e));      // 4byte
	printf("%d, %d \n", sizeof(long), sizeof(f));     // 4byte
	printf("%d, %d \n", sizeof(float), sizeof(g));    // 4byte
	printf("%d, %d \n", sizeof(double), sizeof(h));   // 8byte
	// sizeof(인자) --> 자료형의 크기를 계산해서 반환함
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
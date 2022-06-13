#include <stdio.h>
void main(void)
{
	printf("%d \n", 12);
	printf("%d,%#o, %o \n", 014, 014, 014);
	printf("%d,%#X, %x \n", 0xc, 0xc, 0xc);
	printf("1. ---------- \n");
	printf("%.1lf \n", 1e6);           // 1 x 10 ** 6
	printf("%.7lf \n", 3.14e5);       // 3.14 x 10 ** -5
	printf("%.le \n", 0.00000314);     // 지수형태로 출력하라
	printf("%.2le \n", 0.00000314);    // 자수형태로 출력하라
	printf("2. ---------- \n");
	printf("%c, %d \n", 'A', 'A');
	printf("%s, %s \n", "A", "KOREA");              // 'k','o','r','e','a' = "korea"
	printf("%c는 %s입니다. \n", '1', "first");
	printf("3. ---------- \n");
}
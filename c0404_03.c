#include <stdio.h>
void main(void)
{ // 연산자 --> 증감연산자
  //            int a = 10
  //            a = a + 1; --> (축약대입연산자) a += 1;  (증감연산자)a++,++a;
	int a = 10; char b = 10; int x, y;
	a++;   printf("%d\n", a);
	++a;   printf("%d\n", a);
	printf("1----------\n");
	b--;   printf("%d\n", b);
	--b;   printf("%d\n", b);
    printf("2----------\n");
	a = 100;
	printf("%d\n", a++);   // a --> %d, ; --> a++, 출력 : 100, a = 101
	printf("%d\n", a++);   // a --> %d, ; --> a++, 출력 : 101, a = 102
	a = 100;
	printf("%d\n", ++a);   // ++a = 101, 출력 : 101, ; --> 101
	printf("%d\n", ++a);   // ++a = 102, 출력 : 102, ; --> 102
	printf("3----------\n");
	a = 200;
	printf("%d\n", a--);   // a --> %d, ; --> a--, 출력 : 200, a = 199
	printf("%d\n", a--);   // a --> %d, ; --> a--, 출력 : 199, a = 198
	a = 200;
	printf("%d\n", --a);   // --a = 199, 출력 : 199, ; --> 199
	printf("%d\n", --a);   // --a = 198, 출력 : 198, ; --> 198
	printf("4----------\n");
	a = 10; b = 10;
	x = a++; printf("%d,%d\n", x, a);
	x = a++; printf("%d,%d\n", x, a);
	a = 10; b = 10;
	x = ++a; printf("%d,%d\n", x, a);
	x = ++a; printf("%d,%d\n", x, a);
	printf("5----------\n");
	a = 10; b = 10;
	x = a--; printf("%d,%d\n", x, a);
	x = a--; printf("%d,%d\n", x, a);
	a = 10; b = 10;
	x = --a; printf("%d,%d\n", x, a);
	x = --a; printf("%d,%d\n", x, a);
}
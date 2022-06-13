#include <stdio.h>
void main(void)
{
/*
	double apple; int banana, orange;
	apple = 5.0 / 2.0; printf("apple : %.1lf \n", apple);
	apple = 5.0 / 2; printf("apple : %.1lf \n", apple);
	apple = 5 / 2.0; printf("apple : %.1lf \n", apple);
	apple = 5 / 2; printf("apple : %.1lf \n", apple);
	apple = (double)5 / 2; printf("apple : %.1lf \n", apple);

	printf("banana : %d, %d \n", 5 / 2, 5 % 2);
	printf("banana : %f, %f \n", (double)5 / 2, 5 / (float)2);
*/
/*
	int a = 10, b = 10;
	++a;  printf("a : %d \n", a);
	a++;  printf("a : %d \n", a);
	++b;  printf("b : %d \n", b);
	b++;  printf("b : %d \n", b);
	printf("===============\n");
	a = 5, b = 5;   int pre, post;
	pre = (++a) * 3; printf("a : %d \n", pre);
	pre = ++a * 3;   printf("a : %d \n", pre);
	pre = (a++) * 3; printf("a : %d \n", pre);
	pre = a++ * 3;   printf("a : %d \n", pre);
	printf("===============\n");
	a = 5, b = 5;
	post = (--b) * 3; printf("b : %d \n", post);
	post = --b * 3;   printf("b : %d \n", post);
	post = (b--) * 3; printf("b : %d \n", post);
	post = b-- * 3;   printf("b : %d \n", post);
	printf("===============\n");
*/

	int a = 10, c = 15;
	int res = (a == c); printf("%d \n", res);
	    res = (a != c); printf("%d \n", res);
		c = 0;
		res = (!c);     printf("%d \n", res);
		res = (~c);     printf("%d \n", res);
		res = (a^c);     printf("%d \n", res);

}
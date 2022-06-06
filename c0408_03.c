#include <stdio.h>
void main(void)
{
	int a = 100;
	int b = 200;
	int c, d;
	int * ptr = &a;
	int * ptr1;
 	ptr1 = &b;
	c = *ptr;
	d = *ptr1;
	printf("%d,%d,%d,%d\n", c, d, *ptr, *ptr1);
	printf("%p,%p,%p,%p\n", &a, &b, ptr, ptr1);
}
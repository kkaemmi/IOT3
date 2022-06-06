#include <stdio.h>
void main(void)
{
	int a = 100;
	char b = 'A';   // 65
	int*pa = &a;
	char*pd = &b;
	printf("%#X,%#X\n", pa, pb);
	pa = pa + 1;
	pb = pb + 1;
	printf("%#X,%#X\n", pa, pb);
	*pa = pa + 1;
	*pb = pb + 1;
	printf("%d,%d\n", *pa, *pb);
	printf("%c,%c\n", *pa, *pb);
}
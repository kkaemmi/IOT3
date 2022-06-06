#include <stdio.h>
void main(void)
{
	char * str = "korea";
	printf("%d, %d \n", 123, 456);               // 10진수
	printf("%o, %#o \n", 123, 456);              // 8진수
	printf("%X, %#X \n", 123, 456);              // 16진수
	printf("%f, %.2f \n", 123.45, 456.678);      // 실수, float
	printf("%lf, %.2lf \n", 123.45, 456.678);    // 실수, double
	printf("%c, %d \n", 'A', 'a');
	printf("%s, %s \n", "korea", str);



}
#include <stdio.h>
void main(void)
{
	char * str = "korea";
	printf("%d, %d \n", 123, 456);               // 10����
	printf("%o, %#o \n", 123, 456);              // 8����
	printf("%X, %#X \n", 123, 456);              // 16����
	printf("%f, %.2f \n", 123.45, 456.678);      // �Ǽ�, float
	printf("%lf, %.2lf \n", 123.45, 456.678);    // �Ǽ�, double
	printf("%c, %d \n", 'A', 'a');
	printf("%s, %s \n", "korea", str);



}
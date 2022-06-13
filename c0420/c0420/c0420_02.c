#include <stdio.h>
void main(void)
{
	printf("%d\n", 10);            // 기본적으로 기억 : 디폴트 : int,  %ld <-- long 
	printf("%lf\n", 3.141592);     // 실수 -> 디폴트 : double (%lf)
	printf("%.1lf\n", 3.141592);
	printf("%.10lf\n", 3.141592);

	printf("%d,%d,%d \n", 10, 20, 10 + 20);
	printf("%.1lf - %.1lf = %.1lf \n", 3.4, 1.2, 3.4 - 1.2);
}
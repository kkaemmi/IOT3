#include <stdio.h>
void main(void)
{
	printf("%d\n", 10);            // �⺻������ ��� : ����Ʈ : int,  %ld <-- long 
	printf("%lf\n", 3.141592);     // �Ǽ� -> ����Ʈ : double (%lf)
	printf("%.1lf\n", 3.141592);
	printf("%.10lf\n", 3.141592);

	printf("%d,%d,%d \n", 10, 20, 10 + 20);
	printf("%.1lf - %.1lf = %.1lf \n", 3.4, 1.2, 3.4 - 1.2);
}
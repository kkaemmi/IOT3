#include <stdio.h>
int main(void)
{
/*
	int a = 10;
	int b = 15;
	int total;
	double avg;
	int *pa, *pb;
	int *pt = &total;
	double *pg = &avg;

	pa = &a;
	pb = &b;
	*pt = *pa = *pb;
	*pg = *pt / 2.0;

	printf("%d, %d \n", *pa, *pb);
	printf("%d \n", *pt);
	printf("%.1lf \n", *pg);
*/

	const int X = 100;
	//X = 200;            <-- Error �߻�
	int a = 10, b = 20;
	const int* const pa = &a;   // 1 ��° const : *pa�� ���� ������ �� ����.
						  // 2 ��° const : pa�� �ּҸ� ������ �� ����.
	printf("%d \n", *pa);
	//pa = &b;
	printf("%d \n", *pa);
	//pa = &a;
	a = 222;
	printf("%d \n", *pa);
	//*pa = 333;
    //printf("%d\n", *pa);

	return 0;
}
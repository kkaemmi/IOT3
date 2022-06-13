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
	//X = 200;            <-- Error 발생
	int a = 10, b = 20;
	const int* const pa = &a;   // 1 번째 const : *pa로 값을 변경할 수 없다.
						  // 2 번째 const : pa로 주소를 변경할 수 없다.
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
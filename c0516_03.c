#include <stdio.h>
void swap(int *pa, int *pb);
int main(void)
{
	int a = 111, b = 222;                         //  a     b    temp
	printf("1 -> a : %d, b : %d \n", a, b);     // 111   222   111
	swap(&a, &b);								// 222   111  
	printf("2 -> a : %d, b : %d \n", a, b);

	return 0;
}
// ���ϰ��� ��� --> ���� �����ų �� �ִ�.
void swap(int *pa, int *pb)
{
	int temp;     // 111
	temp = *pa;   // 111
	*pa = *pb;    // 222
	*pb = temp;
}
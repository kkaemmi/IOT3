#include <stdio.h>
void swap(int x, int y);   // --> 1.출력 목적 2. 포인터 사용 : x
int main(void)             // --> 1.출력 목적 2. 포인터 사용 : o
{
	int a = 10, b = 20;

	swap(a, b);
	printf("%d, %d \n", a, b);

	return 0;
}
void swap(int x, int y)    // int x = a = 10, int y = b = 20
{
	int temp;

	temp = x;
	x = y;
	y = temp;
}
#include <stdio.h>
void swap(int*pa, int*pb);      // int*pa = &a, int*pb = &b
void swap_or(int a, int b);     // int a = 100, int b = 200
int main(void)                            // 포인터를 사용한 함수와 일반 함수 사용의 차이점
{
	int a = 100; int b = 200;
	swap_or(a, b);
	printf("q1 -> a : %d, b : %d \n", a, b);     // 100,200
	swap(&a, &b);
	printf("q2 -> a : %d, b : %d \n", a, b);     // 200,100
	return 0;
}
void swap(int*pa,int*pb)       // int*pa = &a(100), int*pb = &b(200)
{
	int temp;                  // temp = 100
	temp = *pa;                // *pa = 200
	*pa = *pb;                 // *pb = 100
	*pb = temp;
}
void swap_or(int x, int y)     // int x = a = 100, int y = b = 200
{
	int temp;                  // temp = 100
	temp = x;                  //    x = 200
	x = y;                     //    y = 100
	y = temp;
	printf("qq -> x : %d, y :%d \n", x, y);     // x : 200, y : 100
}
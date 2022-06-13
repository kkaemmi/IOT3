#include <stdio.h>
void print_ary(int *pa);
int main(void)
{
	int ary[5] = { 10,20,30,40,50 };

	print_ary(ary);   // 인자 = 인수 <-- 주소

	return 0;
}
//void print_ary(int *pa)   // 매개변수 -> 포인터 : int *pa = ary
//{
//	int i;
//
//	for (i = 0; i < 5; i++) {
//		printf("%d ", pa[i]);
//	}
//}
void print_ary(int ary[])   // 매개변수 -> 포인터 : int ary[] = ary
{
	for (int i = 0; i < 5; i++) {
		printf("%d ", ary[i]);
	}
}
// 블록설정(영역) --> ctrl + k, c --> // 주석처리
// 블록설정(영역) --> ctrl + k, u --> // 해체
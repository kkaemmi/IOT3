#include<stdio.h>
/*
int main(void)
{
	int ary[3];                          // ary[0],   ary[1],   ary[2]
	int i;

	*(ary + 0) = 10;                     // ary + 0   ary + 1   aty + 2
	*(ary + 1) = *(ary + 0) + 10;        //   10        20         30 (입력하자)

	printf("세 번째 배열 요소에 키보드 입력 : >>");
	scanf_s("%d", ary + 2);
	//scanf_s("%d", &ary[2]);

	for (i = 0; i < 3; i++) {
		printf("%5d", *(ary + i));
	}

	return 0;
}
*/
/*
int main(void)
{								   //   10          20          30
	int ary[3];                    //  ary[0]      ary[1]      ary[2]  <-- 값
	int *pa = ary;                 // *(pa+0)     *(pa+1)     *(pa+2) <-- 값
	int i;

	*pa = 10;                      //  pa[0]       pa[1]       pa[2]  <-- 값
	*(pa + 1) = 20;                // &ary[0]     &ary[1]     &ary[2]  <-- 주소
	pa[2] = pa[0] + pa[1];         // ary+0=ary    ary+1       ary+2   <-- 주소
								   // pa+0=pa      pa+1         pa+2   <-- 주소
	for (i = 0; i < 3; i++) {
		printf("%5d", pa[i]);
	}
	printf("\n%d \n", sizeof(ary));
	printf("%d \n", sizeof(pa));

	pa = pa + 1;   // pa++; 처음 100번지에서 -> +1 --> 104번지로 주소를 옮긴다.
	               // ary = ary + 1; -> ar++; <-- 배열명은 주소를 저장할 수 없다.

	return 0;
}
*/
int main(void)
{
	int ar[3] = { 10, 20, 30 };     //   10        20        30
	int *pa = ar;					// 100번지   104번지   108번지
	int i;

	printf("배열의 값 : ");
	for (i = 0; i < 3; i++) {
		//printf("%5d", *pa);         // 포인터 - 값 10,  20,     30
		//pa++;                       // 포인터 - 주소, 104번지, 108번지
		//printf("%5d", *pa++);		  // 처리순서 1. *pa   : 10, 20, 30
		printf("%5d", *(++pa));
	}								  //          2. pa++  :  104번지, 108번지
									  // (*pa)++  <-- 주소 이동은 못하고, 값만 증가되는 코드임
	return 0;						  // *(++pa)  1. ++pa  : 104번지, 108번지, 112번지
}									  //          2.  *pa  :   20,      30,    쓰레기값출력
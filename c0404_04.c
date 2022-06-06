#include <stdio.h>
void main(void)
{ // 반복문 : for(초기값; 비교조건식; 증강값)
  // {처리순서      1         2(참)
  //                    3처리
  //                                    4
  //                          5(참)
  //                    6처리           7
  //                          8(참)
  //                    9처리
  // }
	int i;
	for (i = 0; i < 10; i++) {
		printf("%d.홍길동\n", 10 - i);
    }
	printf("1----------\n");
	for (i = 10; i > 0; i--) {
		printf("%d.홍길동\n",i);
	}
	printf("2----------\n");
	for (i = 0; i < 10; i++) {
		printf("%2d", i + 1);
	}
	printf("\n3----------\n");
	// i : 1~50 --> 짝수만 출력
	for (int i = 1; i <= 50; i++) {
		if (i % 2 == 0)
			printf("%3d", i);
	}
	printf("\n4----------\n");
	for (int i = 0; i < 25; i++) {
		printf("%3d", (i + 1) * 2);
	}
	printf("\n5----------\n");
//  1 ~ 100 -> 합 구하기
	int total = 0;
	for (i = 0; i < 100; i++) {
		total += (i + 1);
		}
	printf("1~100합:%d\n", total);
	printf("\n6----------\n");
//  1 ~ n 까지의 합 구하기
	int num = 0;
	int total2 = 0;

	printf("\n숫자를 입력하세요:");
	scanf_s("%d", &num);
	for (i = 0; i <= num; i++) {
		total2 += i;
	}
	printf("%d", total2);
	printf("\n7----------\n");
	char*msg = "1~n까지의 합\nnum=";
	int end = 0, total1 = 0;
	printf("%s", msg);
	scanf_s("%d", &end);
	for (i = 0; i < end; i++) {
		total1 += (i + 1);
	}
	printf("1 ~ %d까지의 합 : %d \n",end, total1);
}
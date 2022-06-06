// break문 --> if문하고 많이 같이 사용함
//             switch문에서도 사용함
//             반복문에서 반복작업(무한반복)을 빠져나오는(블록을 탈출) 역활로 많이 사용함
//             처리 흐름이 아래로 이동함

// contiue문 --> 반복문에서 많이 사용함
//               조건이 맞으면 --> 현재의 반복문(위에 존재)으로 돌아감 
//               처리 흐름이 위로 이동함 (증감값 위로 올라감)
// 반복문 : for문(제한 영역을 두고 반복작업),while문(무한반복시),
//          do ~ while문(무한반복시,처음은 꼭 한번은 처리를 함,메뉴설계)
#include <stdio.h>
void main(void)
{
	// 1 ~ 10까지 출력, 4값까지만 출력해라
	for(int i = 0; i < 10; i++) {
		printf("%d ", i + 1);
		if (i == 3) break;
	}
	printf("\n----------\n");
	// 1 ~ 10까지 출력, 4를 제외하고 출력해라
	for (int i = 0; i < 10; i++) {
		if (i == 3) continue;
		printf("%d \t", i + 1);
	}
	printf("\n----------\n");
	// 문제 : aBcDeFgHiJkLmNoPqRsTuVwXyZ 출력하자
	//        01234 ~~ <-- 짝수 : 소문자,홀수 : 대문자
	int temp;
	for (int i = 0; i < 26; i++) {
		temp = (i % 2 == 0) ? (i + 97) : (i + 65);
	//                          짝수       홀수
		printf("%c ", temp);
	}
	printf("\n----------\n");
	int count = 0;
	while (count != 10) {  // count가 10이면 --> 반복문을 벗어나라
		count++;
		printf("%d.홍길동 \n", count);
	}
	printf("\n----------\n");
}
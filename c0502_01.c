// [문제]
// do ~ while문 -> 중첩으로 사용해서 -> 구구단을 작성해 보자
// 변수 선언은 만들면서 선언해 가자
// 단(dan),요소(i)가 필요하다.
/*
#include <stdio.h>
int main(void)
{
	int i;
	int cur_dan = 2;

	do {
		i = 1;
		do {
			printf("%d x %d = %d \n", cur_dan, i, cur_dan * i);
			i++;
		} while (i < 10);
		cur_dan++;
		printf("----------\n");
	} while (cur_dan < 10);

	return 0;
}
*/
// [문제]
// 1 ~ 100 미만 정수 중 -> 7의 배수 이거나, 9의 배수를 출력하라
// (7의 배수이면서 9의 배수인 정수도 -> 한번만 출력함)
/*
#include <stdio.h>
int main(void)
{
	int i = 0;

	for (i = 1; i < 100; i++)
		if (i % 7 == 0 || i % 9 == 0)
			printf("%d \n", i);
	
	return 0;
}
*/
// [문제3]
// 구구단 --> 1) 짝수단(2,4,6,8), 2단 : 2 x 2, 4단 : 4 x 4, 6단 : 6 x 6, 8단 : 8 x 8
//            2) continue, break
#include <stdio.h>
int main(void)
{
	int i;
	int dan;

	for (dan = 2; dan < 10; dan++) {
		if (dan % 2 != 0) continue;
		for (i = 1; i < 10; i++) {
			if (dan < i) break;
			printf("%d x %d = %d \n", dan, i, dan*i);
		}
		printf("-----\n");
	}
		
	return 0;
}
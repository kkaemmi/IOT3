//[문제]
// int ran(void); 활용한다.
// 0 ~ 99 까지의 난수를 총 5개 생성하는 프로그램을 작성하라
// printf("0 ~ %d \n", RAND_MAX);
/*
#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
//#include <math.h>
int main(void)
{
	int i;
	
	srand((int)time(NULL));     // time(NULL) : 현재 시간 기준 잡자

	for (i = 0; i < 5; i++) {
		printf("난수 출력 : %d \n", rand() % 100);
		printf("0 ~ %d \n", RAND_MAX);
	}

	return 0;
}
*/
//[문제]
// 두 개의 주사위를 던졌을 떄의 결과를 출력하는 프로그램을
// 작성하라 그 결과는 예측이 불가능해야 한다.
// 주사위 1의 결과 : 2
// 주사위 1의 결과 : 6
#include <stdio.h>
#include <stdlib.h>     // rand()
#include <time.h>       // time(NULL)
int main(void)
{
	int two, six;
	int circle = 0;

	srand((int)time(NULL));

	while (1) {
		two = rand() % 6 + 1;
		six = rand() % 6 + 1;
		if (two == 2 && six == 6) {
			printf("%d, %d \n", two, six);
			break;
		}
		printf("두 값이 맞지 않습니다. --%d-- \n", ++circle);
	}

	return 0;
}
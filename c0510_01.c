//[문제] 10개의 소수를 출력하는 프로그램을 작성하라
//       즉 1과 자신 밖에 나눠지지 않는다.
//       2, 3, 5, 7, 11, 13, 17, 19, 23, 29
/*
	count --> 10개를 셈하는 변수
	devider --> 1번 + 1번 = 2번 <-- 나누어서 떨어지는 값이 0이다.
*/
/*
#include <stdio.h>
int Prime(int prime);
void main(void)
{
	int count = 0;
	int prime = 2;

	while (count != 10) {
		if (Prime(prime) == 1) {
			printf("%d ", prime);
			count++;
		}
		prime++;
	}
}
int Prime(int prime)   // 소수값이면 --> return 1, 나누어지는 값 : 2개(1%, 자기자신%)
{
	int devider = 0;

	for (int i = 1; i <= prime; i++) {
		if (prime % i == 0)
			devider++;
	}
	if (devider == 2) return 1;
	else return 0;
}
*/
//[문제] 사용자로부터 초(sec)를 입력 받은 후에,
//       이를 [시:분:초]의 형태로 출력하는 프로그램을 작성하라
//       3615 ---> [h:1, m:0. s:15]
#include <stdio.h>
const int HOUR = 60 * 60;
const int MINUTE = 60;
void secHMS(int sec);
void main(void)
{
	int sec;

	printf("초 단위값 입력: >>"); scanf_s("%d", &sec);
	secHMS(sec);
}
void secHMS(int sec)
{
	int h, m, s;
	
	h = sec / HOUR;
	sec = sec % HOUR;
	m = sec / MINUTE;
	sec = sec % MINUTE;
	s = sec;

	printf("[hour : %d, minute : %d, second : %d] \n", h, m, s);
}
#include <stdio.h>
void main(void)
{
	int ii; char cc; long ll; short hh; char ss[20]; float ff; double dd;
	printf("정수 입력 : "); scanf_s("%d", &ii); printf("정수값 : %d \n", ii);

	printf("정수 입력 : "); scanf_s("%ld", &ll); printf("정수값 : %ld \n", ll);
	printf("정수 입력 : "); scanf_s("%d", &hh); printf("정수값 : %d \n", hh);  // 2byte - 정수
	printf("실수 입력 : "); scanf_s("%f", &ff); printf("정수값 : %f \n", ff);
	printf("실수 입력 : "); scanf_s("%lf", &dd); printf("정수값 : %lf \n", dd);
	printf("문자열 입력 : ");
	scanf_s("%s", ss, sizeof(char) * 20);
	printf("문자열값 : %s \n", ss);

	char a = getchar(); printf("문자확인 : %ccheek \n", a);
	printf("문자 입력 : "); scanf_s("%c", &cc); printf("정수값 : %c \n", cc);
}
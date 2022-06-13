//[문제]
// 사용자로부터 숫자n을 입력받고, 다음 공식이 성립되는 k의 최대값을
// 계산해서 출력하는 프로그램을 작성하라
// -2^k(승수) <= n
// -n = 256 입력하면 --> k의 최대값은 8
/*
#include <stdio.h>
int main(void)
{
	int n;
	int k;
	int increment = 1;

	printf("상수값 n 입력 : >>");
	scanf_s("%d",&n);   // 32(2^5 -> 5), 256(2^8 -> 8)
	if (n == 0) {
		printf("만족하는 k값을 구할 수 없습니다.");
		return 0;
	}
	for (k = 0; (increment * 2) <= n; k++) {
		increment = increment * 2;
	}
	printf("n = %d --> k = %d \n", n, k);

	return 0;
}
*/
//[문제]
// 2^n승을 구하는 함수를 재귀적으로 구현하라
// - 정수입력 : 8 --> 2^8승은 = 256
#include <stdio.h>
int power(int n)
{
	if (n == 0) return 1;
	else return power(n - 1) * 2;
}
int main(void)
{
	int n;
	
	printf("정수 입력 : >>");
	scanf_s("%d", &n);
	int result = power(n);
	printf("2의 %d승은 %d입니다. \n", n, result);

	return 0;
}
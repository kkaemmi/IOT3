// 0,1,1,2,3,5,8,13,21,34 ~~~ 피보나치 수열을 출력하는 프로그램을 작성하라
// (EX. 사용자가 10개를 입력하면 총 10개의 피보나치 수열을 출력하라)
// 0,1,     1     2,     3,     5,     8,     13,     21,     34
//         0+1   1+1    1+2    2+3    3+5    8+13
// f1, f2, f3
/*
#include <stdio.h>
void fibo_sub(int n);
void main(void)
{
	int n;

	printf("피보나치 수열 갯수 : >> ");
	scanf_s("%d", &n);
	if (n < 1) {
		printf("1값 이상을 입력하세요 \n");
		return;
	}
	fibo_sub(n);
}
void fibo_sub(int n)
{
	int f1 = 0; int f2 = 1; int f3;

	if (n == 1)
		printf("%d ", f1);
	else
		printf("%d %d ", f1, f2);   // 0 1 1
	for (int i = 0; i < n - 2; i++) {
		f3 = f1 + f2;
		printf("%d ", f3);
		f1 = f2;
		f2 = f3;
	}
}
*/
// 두 개의 정수를 입력받아 최대 공약수를(GCD)를 구하는 프로그램 작성하라
// (유클리드 호제법 활용 : 정수 n1과 n2의 최대 공약수는 n1이나 n2
// 보다 클 수 없다. 그리고 n1과 n2의 최대공약수는 n1 또는 n2를 나누면 나머지가 0이 된다.)
// n1 = 12, n2 = 18
// n1 = 1,2,3,4,(6)
// n2 = 1,2,3,(6),9
#include <stdio.h>
int GCM(int n1, int n2);
void main(void)
{
	int n1, n2;

	printf("두 개의 정수 입력 : >>");
	scanf_s("%d,%d", &n1, &n2);
	int result = GCM(n1, n2);
	printf("GCM : %d \n", result);
}
int GCM(int n1, int n2)
{
	int result = n1;
	while (n1%result != 0 || n2 % result != 0)
		result--;
	return result;
}
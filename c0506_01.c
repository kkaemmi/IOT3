#include <stdio.h>
int main(void)
{
	/*
		int a, z;
		int result;

		for (a = 0; a < 10; a++) {
			for (z = 0; z < 10; z++) {
				if (a == z) continue;
				result = (a * 10 + z) + (z * 10 + a);
				if (result == 99) {
					printf("%d%d\n%d%d\n-----\n%d \n\n", a, z, z, a, result);
				}
			}
		}
	*/

// 3개의 정수 --> 입력, max함수, min함수, main코딩
	int n1, n2, n3;
	int result1, result2;

	printf("3개의 정수 입력 : >>");
	scanf_s("%d, %d, %d", &n1, &n2, &n3);
	result1 = max(n1, n2, n3);
	result2 = min(n1, n2, n3);

	printf("최대값은 %d, 최소값은 %d \n", result1, result2);
}
int max(int n1, int n2, int n3) // int n1 = n1, int n2 = n2, int n3 = n3
{
	if (n1 > n2) return (n1 > n3) ? n1 : n3;
	else		 return (n2 > n3) ? n2 : n3;
}
int min(int n1, int n2, int n3)
{
	if (n1 < n2) return (n1 < n3) ? n1 : n3;
	else		 return (n2 < n3) ? n2 : n3;

	return 0;
}
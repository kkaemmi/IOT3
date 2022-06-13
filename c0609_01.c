#include <stdio.h>
/*
void print_str(char** pps, int cnt);
int main(void)
{
	char* ptr_ary[] = { "eagle", "tiger", "lion", "squirrel" };
	int count;

	printf("%d, %d \n", sizeof(ptr_ary), sizeof(ptr_ary[0]));
	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
	print_str(ptr_ary, count);

	return 0;
}
void print_str(char** pps, int cnt)
{
	int i;

	for (i = 0; i < cnt; i++)
	{
		printf("%s \n", pps[i]);
	}
}
*/
/*
int main(void)
{
	int ary[5];

	printf("1. %#X \t", ary);          // ary = &ary
	printf("2. %#X \n", &ary);
	printf("3. %#X \t", ary + 1);      // opset = 1(0호실 -> 1호실)
	printf("4. %#X \n", &ary + 1);     // opset = 5(0층 -> 1층)

	return 0;
}
*/
// 2차원 배열 시작주소를 넘기는 방법 :
// 2차원 배열 주소 : 0x1000(인자) --> 매개변수에 받는 방법의 문법 : 자료형 (*변수명)[호실]
/*
int main(void)
{
	int ary[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int(*pa)[4];   // 2차원 배열의 시작주소를 받는 자료형 방법
	int i, j;

	pa = ary;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", pa[i][j]);
		}
		printf("\n");
	}

	return 0;
}
*/
int sum(int a, int b);
int main(void)
{
	int(*fp)(int a, int b);   // 함수의 주소를 받겠다.
	int res;

	fp = sum;                 // 함수명 = 주소
	res = fp(10, 20);
	printf("%d \n", res);

	return 0;
}
int sum(int a, int b)
{
	return (a + b);
}
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
	printf("3. %#X \t", ary + 1);      // opset = 1(0ȣ�� -> 1ȣ��)
	printf("4. %#X \n", &ary + 1);     // opset = 5(0�� -> 1��)

	return 0;
}
*/
// 2���� �迭 �����ּҸ� �ѱ�� ��� :
// 2���� �迭 �ּ� : 0x1000(����) --> �Ű������� �޴� ����� ���� : �ڷ��� (*������)[ȣ��]
/*
int main(void)
{
	int ary[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int(*pa)[4];   // 2���� �迭�� �����ּҸ� �޴� �ڷ��� ���
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
	int(*fp)(int a, int b);   // �Լ��� �ּҸ� �ްڴ�.
	int res;

	fp = sum;                 // �Լ��� = �ּ�
	res = fp(10, 20);
	printf("%d \n", res);

	return 0;
}
int sum(int a, int b)
{
	return (a + b);
}
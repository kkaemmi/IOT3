//[����]
// ����10�� �迭 �����ϰ� 10�� ���� �Է��ϰ�, Ȧ��, ¦�� ��������
// ����ϴ� ���α׷��� �ۼ��϶�
// Ȧ�� ���� ����ϰ�, Ȧ���� ����ϴ� �Լ�, ¦���� ����ϴ� �Լ�
// ���� �����ϰ� ȣ���ϴ� ��� ������ ��
#include <stdio.h>
/*
void Odd(int *ar, int size);
void Even(int *ar, int size);
int main(void)
{
	int ar[10];

	for (int i = 0; i < sizeof(ar) / sizeof(ar[0]); i++) {
		printf("���� �Է� : >>");
		scanf_s("%d", &ar[i]);
	}
	Odd(ar, sizeof(ar) / sizeof(ar[0]));
	Even(ar, sizeof(ar) / sizeof(ar[0]));

	return 0;
}
void Odd(int *ar, int size)
{
	printf("Ȧ���� : ");
	for (int i = 0; i < size; i++) {
		if (ar[i] % 2 == 1)
			printf("%d ", ar[i]);
	}
	printf("\n");
}
void Even(int *ar, int size)
{
	printf("¦���� : ");
	for (int i = 0; i < size; i++) {
		if (ar[i] % 2 == 0)
			printf("%d ", ar[i]);
	}
	printf("\n");
}
*/
//[����]
// ����ڷκ��� 10������ ���� �ϳ��� �Է� �޾�, �̸� 2������ ��ȯ�Ͽ�
// ����Ѵ� ���α׷��� �ۼ��϶� (Ex. 12 --> 1100)
int main(void)
{
	int ar[10] = { 0, }; int count = 0; int num;

	printf("10���� ���� �Է� : >>");
	scanf_s("%d", &num);       // 41
	while (num > 0) {          // 2���� --> ����
		ar[count++] = num % 2;   // ������ --> ����
		//count++;
		num /= 2;              // ���ο� ��
	}
	while(count > 0) {
		//--count;
		printf("%d", ar[--count]);
	}
	printf("\n");

	return 0;
}
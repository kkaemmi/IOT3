// [����]
// ����ڰ� ��� ������ �Է¹ް�, ��� ���� ������.
// 0�� �Է��ϸ� ���س����� �۾��� ������.
#include <stdio.h>
int main(void)
{
/*
	int num;
	int total;

	while (num != 0) {
		printf("�����Է�(0:quit): >>");
		scanf_s("%d \n", num);

		total += num;
	}
	printf("%d \n", total);
*/
// [����]
// ����ڰ� ��� ������ �Է¹ް�, ��� ���� ����� ���Ѵ�.
// �� ���� ������ �Է��ϴ� ������ �Է¹ް�
// ����� �Ҽ� 2�ڸ����� ���Ѵ�.
/*
	int count, number;
	int total = 0;
	int i = 0;
	double avr;

	printf("�Է� ������ ���� : >>");
	scanf_s("%d", &count);
	while (i++ < count) {
		printf("���� �Է�: >>");
		scanf_s("%d", &number);
		total += number;
	}
	avr = (double)total / count;
	printf("%.2lf \n", avr);
*/
// [����]
// *****
// ****
// **
// *

	int i = 0, j = 0;
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5-i; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
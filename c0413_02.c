/*
#include <stdio.h>
void main(void)
{
	int arrData[2][3] = {0, };          // ��  ��
	for (int i = 0; i < 2; i++)         // i   j      i   j
		for (int j = 0; j < 3; j++)     // 0   0      1   0
			arrData[i][j] = 5;          //     1          1
	                                    //     2          2
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++)
			printf("%d", arrData[i][j]);
		printf("\n");
	}
}
*/

#include <stdio.h>
void main(void)
{
	int arrIncome[2][3] = { 0, };
	int total = 0, total1 = 0, total2 = 0;
	double avg = 0.0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {

			printf("%d�� %dȣ ���� �Է�[����:����]\n", i + 1, j + 1);
			scanf_s("%d", arrIncome[i] + j);
		// scanf_s("%d", arrIncome[i][j]);
			total += arrIncome[i][j];
		}
	}
	for (int j = 0; j < 3; j++) {
		total1 += arrIncome[0][j];
		total2 += arrIncome[1][j];
	}
	avg = (double)total / 6;
	printf("�� ���� : %d ���� \n", total);
	printf("��� ���� : %.2f ���� \n", avg);
	printf("1�� ���� : %d ���� \n", total1);
	printf("2�� ���� : %d ���� \n", total2);
}

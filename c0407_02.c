#include <stdio.h>
/*
void main(void)
{
	int score[5]; int i; int total = 0; double avg; int count;
	//  --------  -----  -------------  ----------  ----------
	count = sizeof(score) / sizeof(score[0]);
	for (i = 0; i < count; i++) 
		scanf_s("%d", &score[i]);
	for (i = 0; i < count; i++)
		total += score[i];
	avg = total / (double)count;
	for (i = 0; i < count; i++)
		printf("%5d", score[i]);
	printf("\n");
	printf("���� : %d\t", total);
	printf("��� : %.2f\n", avg);
}
*/

void main(void)
{
	// 1.����
	// �迭 �̿� : 1 ~ 10 �� ¦���� �Է½�Ű�� --> ���
	int arData[5] = {0,};
	for (int i = 0; i < 5; i++) {
		arData[i] = (i + 1) * 2;
		//printf("%d\t", arData[i]);
		printf("%d\t", *(arData+i));
	}
	printf("\n----------\n");
	// 2.����
	// 1 ~ 100���� --> ¦���� �� : ���, i = 0���
	int ardata[100] = {0,};
	int total = 0;
	for (int i = 0; i < 100; i++) {
		ardata[i] = (i + 1);
		if (ardata[i] % 2 == 0)
			total += ardata[i];
	}
	printf("%d\n", total);
	printf("\n----------\n");
	// 3.����
	// A, B, D, E, F  --> C : ���� --> ���,�迭�̿�(char archar[5])
	// 0  1  2  3  4      2  <-- i
	// 65 66 68 69 70 --> 67
	char archar[5] = {' ', };
	for (int i = 0; i < 5; i++) {
		archar[i] = (i > 1) ? (66 + i) : (65 + i);
		printf("%c", archar[i]);
	}
	printf("\n----------\n");
	// 4.����
	// aBcDeFgHiJkLmNoPqRsTuVwXyZ  <-- �迭 ����,��� 3�׿�����
	// 012345 <-- ¦�� : �ҹ���(97), Ȧ�� : �빮��(65)
	char arChar[26] = { " ", };
	for (int i = 0; i < 26; i++) {
		arChar[i] = (i % 2 == 0) ? (97 + i) : (65 + i);
		printf("%c", arChar[i]);
	}
	// printf("\n%s", arChar);
	

}
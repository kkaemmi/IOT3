//[����] 10���� �Ҽ��� ����ϴ� ���α׷��� �ۼ��϶�
//       �� 1�� �ڽ� �ۿ� �������� �ʴ´�.
//       2, 3, 5, 7, 11, 13, 17, 19, 23, 29
/*
	count --> 10���� ���ϴ� ����
	devider --> 1�� + 1�� = 2�� <-- ����� �������� ���� 0�̴�.
*/
/*
#include <stdio.h>
int Prime(int prime);
void main(void)
{
	int count = 0;
	int prime = 2;

	while (count != 10) {
		if (Prime(prime) == 1) {
			printf("%d ", prime);
			count++;
		}
		prime++;
	}
}
int Prime(int prime)   // �Ҽ����̸� --> return 1, ���������� �� : 2��(1%, �ڱ��ڽ�%)
{
	int devider = 0;

	for (int i = 1; i <= prime; i++) {
		if (prime % i == 0)
			devider++;
	}
	if (devider == 2) return 1;
	else return 0;
}
*/
//[����] ����ڷκ��� ��(sec)�� �Է� ���� �Ŀ�,
//       �̸� [��:��:��]�� ���·� ����ϴ� ���α׷��� �ۼ��϶�
//       3615 ---> [h:1, m:0. s:15]
#include <stdio.h>
const int HOUR = 60 * 60;
const int MINUTE = 60;
void secHMS(int sec);
void main(void)
{
	int sec;

	printf("�� ������ �Է�: >>"); scanf_s("%d", &sec);
	secHMS(sec);
}
void secHMS(int sec)
{
	int h, m, s;
	
	h = sec / HOUR;
	sec = sec % HOUR;
	m = sec / MINUTE;
	sec = sec % MINUTE;
	s = sec;

	printf("[hour : %d, minute : %d, second : %d] \n", h, m, s);
}
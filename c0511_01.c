//[����]
// ����ڷκ��� ����n�� �Է¹ް�, ���� ������ �����Ǵ� k�� �ִ밪��
// ����ؼ� ����ϴ� ���α׷��� �ۼ��϶�
// -2^k(�¼�) <= n
// -n = 256 �Է��ϸ� --> k�� �ִ밪�� 8
/*
#include <stdio.h>
int main(void)
{
	int n;
	int k;
	int increment = 1;

	printf("����� n �Է� : >>");
	scanf_s("%d",&n);   // 32(2^5 -> 5), 256(2^8 -> 8)
	if (n == 0) {
		printf("�����ϴ� k���� ���� �� �����ϴ�.");
		return 0;
	}
	for (k = 0; (increment * 2) <= n; k++) {
		increment = increment * 2;
	}
	printf("n = %d --> k = %d \n", n, k);

	return 0;
}
*/
//[����]
// 2^n���� ���ϴ� �Լ��� ��������� �����϶�
// - �����Է� : 8 --> 2^8���� = 256
#include <stdio.h>
int power(int n)
{
	if (n == 0) return 1;
	else return power(n - 1) * 2;
}
int main(void)
{
	int n;
	
	printf("���� �Է� : >>");
	scanf_s("%d", &n);
	int result = power(n);
	printf("2�� %d���� %d�Դϴ�. \n", n, result);

	return 0;
}
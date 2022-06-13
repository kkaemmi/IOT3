// 0,1,1,2,3,5,8,13,21,34 ~~~ �Ǻ���ġ ������ ����ϴ� ���α׷��� �ۼ��϶�
// (EX. ����ڰ� 10���� �Է��ϸ� �� 10���� �Ǻ���ġ ������ ����϶�)
// 0,1,     1     2,     3,     5,     8,     13,     21,     34
//         0+1   1+1    1+2    2+3    3+5    8+13
// f1, f2, f3
/*
#include <stdio.h>
void fibo_sub(int n);
void main(void)
{
	int n;

	printf("�Ǻ���ġ ���� ���� : >> ");
	scanf_s("%d", &n);
	if (n < 1) {
		printf("1�� �̻��� �Է��ϼ��� \n");
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
// �� ���� ������ �Է¹޾� �ִ� �������(GCD)�� ���ϴ� ���α׷� �ۼ��϶�
// (��Ŭ���� ȣ���� Ȱ�� : ���� n1�� n2�� �ִ� ������� n1�̳� n2
// ���� Ŭ �� ����. �׸��� n1�� n2�� �ִ������� n1 �Ǵ� n2�� ������ �������� 0�� �ȴ�.)
// n1 = 12, n2 = 18
// n1 = 1,2,3,4,(6)
// n2 = 1,2,3,(6),9
#include <stdio.h>
int GCM(int n1, int n2);
void main(void)
{
	int n1, n2;

	printf("�� ���� ���� �Է� : >>");
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
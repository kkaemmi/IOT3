#include <stdio.h>
void print_ary(int *pa);
int main(void)
{
	int ary[5] = { 10,20,30,40,50 };

	print_ary(ary);   // ���� = �μ� <-- �ּ�

	return 0;
}
//void print_ary(int *pa)   // �Ű����� -> ������ : int *pa = ary
//{
//	int i;
//
//	for (i = 0; i < 5; i++) {
//		printf("%d ", pa[i]);
//	}
//}
void print_ary(int ary[])   // �Ű����� -> ������ : int ary[] = ary
{
	for (int i = 0; i < 5; i++) {
		printf("%d ", ary[i]);
	}
}
// ��ϼ���(����) --> ctrl + k, c --> // �ּ�ó��
// ��ϼ���(����) --> ctrl + k, u --> // ��ü
#include<stdio.h>
/*
int main(void)
{
	int ary[3];                          // ary[0],   ary[1],   ary[2]
	int i;

	*(ary + 0) = 10;                     // ary + 0   ary + 1   aty + 2
	*(ary + 1) = *(ary + 0) + 10;        //   10        20         30 (�Է�����)

	printf("�� ��° �迭 ��ҿ� Ű���� �Է� : >>");
	scanf_s("%d", ary + 2);
	//scanf_s("%d", &ary[2]);

	for (i = 0; i < 3; i++) {
		printf("%5d", *(ary + i));
	}

	return 0;
}
*/
/*
int main(void)
{								   //   10          20          30
	int ary[3];                    //  ary[0]      ary[1]      ary[2]  <-- ��
	int *pa = ary;                 // *(pa+0)     *(pa+1)     *(pa+2) <-- ��
	int i;

	*pa = 10;                      //  pa[0]       pa[1]       pa[2]  <-- ��
	*(pa + 1) = 20;                // &ary[0]     &ary[1]     &ary[2]  <-- �ּ�
	pa[2] = pa[0] + pa[1];         // ary+0=ary    ary+1       ary+2   <-- �ּ�
								   // pa+0=pa      pa+1         pa+2   <-- �ּ�
	for (i = 0; i < 3; i++) {
		printf("%5d", pa[i]);
	}
	printf("\n%d \n", sizeof(ary));
	printf("%d \n", sizeof(pa));

	pa = pa + 1;   // pa++; ó�� 100�������� -> +1 --> 104������ �ּҸ� �ű��.
	               // ary = ary + 1; -> ar++; <-- �迭���� �ּҸ� ������ �� ����.

	return 0;
}
*/
int main(void)
{
	int ar[3] = { 10, 20, 30 };     //   10        20        30
	int *pa = ar;					// 100����   104����   108����
	int i;

	printf("�迭�� �� : ");
	for (i = 0; i < 3; i++) {
		//printf("%5d", *pa);         // ������ - �� 10,  20,     30
		//pa++;                       // ������ - �ּ�, 104����, 108����
		//printf("%5d", *pa++);		  // ó������ 1. *pa   : 10, 20, 30
		printf("%5d", *(++pa));
	}								  //          2. pa++  :  104����, 108����
									  // (*pa)++  <-- �ּ� �̵��� ���ϰ�, ���� �����Ǵ� �ڵ���
	return 0;						  // *(++pa)  1. ++pa  : 104����, 108����, 112����
}									  //          2.  *pa  :   20,      30,    �����Ⱚ���
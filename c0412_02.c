#include <stdio.h>
void main(void)
{
	int ar[3];     //  ar[0],  ar[1],  ar[2],  <-- ��
	int i;         // *(ar+0),*(ar+1),*(ar+1), < --��
	               // (ar+0), (ar+1), (ar+1),  <-- �ּ�, �������
	printf("����° �迭��� �� �Է� : >>");
	scanf_s("%d,", ar + 2);
	// scanf_s("%d",&ar[2]);

	*(ar + 0) = 100;
	*(ar + 1) = 200;     
	// *(ar +2) = 300; 

	for (i = 0; i < 3; i++)
		printf("%5d", *(ar + i));
	printf("\n");
}
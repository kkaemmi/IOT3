#include <stdio.h>
void main(void)
{
	int n1 = 0, n2 = 0;
	char*n1Msg = "ù��° ����:>>";
	char*n2Msg = "�ι�° ����:>>";
	printf("%s",n1Msg); scanf_s("%d",&n1);
	printf("%s",n2Msg); scanf_s("%d",&n2);

	if (n1 > n2) printf("ū ���� %d\n", n1);
	else if (n1 != n2) printf("ū ���� %d\n", n2);
	else printf(" �� ���� �����ϴ�.\n");
	printf("\n---------------\n");
	(n1 > n2) ? printf("ū ���� %d\n", n1) :
		(n1 != n2) ? printf("ū ���� %d\n", n2) :
		              printf("�� ���� �����ϴ�.\n");
}
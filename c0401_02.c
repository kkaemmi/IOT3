#include <stdio.h>
void main(void)
{
	int ii; char cc; long ll; short hh; char ss[20]; float ff; double dd;
	printf("���� �Է� : "); scanf_s("%d", &ii); printf("������ : %d \n", ii);

	printf("���� �Է� : "); scanf_s("%ld", &ll); printf("������ : %ld \n", ll);
	printf("���� �Է� : "); scanf_s("%d", &hh); printf("������ : %d \n", hh);  // 2byte - ����
	printf("�Ǽ� �Է� : "); scanf_s("%f", &ff); printf("������ : %f \n", ff);
	printf("�Ǽ� �Է� : "); scanf_s("%lf", &dd); printf("������ : %lf \n", dd);
	printf("���ڿ� �Է� : ");
	scanf_s("%s", ss, sizeof(char) * 20);
	printf("���ڿ��� : %s \n", ss);

	char a = getchar(); printf("����Ȯ�� : %ccheek \n", a);
	printf("���� �Է� : "); scanf_s("%c", &cc); printf("������ : %c \n", cc);
}
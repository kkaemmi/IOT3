#include <stdio.h>
void main(void)
{
	int n1 = 0, n2 = 0, n3 = 0;
	int condition1 = 0, condition2 = 0;

	char * n1Msg = "ù��° ����";
	char * n2Msg = "�ι�° ����";
	char * format = "";

	printf("%s", n1Msg); scanf_s("%d", &n1);
	printf("%s", n2Msg); scanf_s("%d", &n2);

	condition1 = n1 > n2;
	condition2 = n1 == n2;

	format = condition2 ? "%s" : "�� ū�� : %d";
	      // ----------   ----   --------------
	      //    1��        2��        3��
	printf(format, condition1 ? n1 : condition2 ? "�μ��� �����ϴ�." : n2);
	      //           1��      2��      3��
	      //                             1��            2��            3��
}
#include <stdio.h>
void main(void)
{
	char*qMsg = "����� ��������? >>";
	char*choiceMsg = "1.A\n2.B\n3.O\n4.AB\n";
	char*aMsg = "�Ĳ��ϰ� �����ϴ�."; char*bMsg = "�������� ����.";
	char*oMsg = "�米���� ����.";     char*abMsg = " ���ϴ�.";
	char*errMsg = "�ٽ� �õ��� �ּ���";
	char*resultMsg = "";
	int choice = 0;

	printf("%s\n%s\n", qMsg, choiceMsg);
	scanf_s("%d", &choice);

	switch (choice) {
	case 1: resultMsg = aMsg; break;  // ���� ���� ���ΰ� �ִ� ����({})�� 1�� Ż���϶�
	case 2: resultMsg = bMsg; break;
	case 3: resultMsg = oMsg; break;
	case 4: resultMsg = abMsg; break;
	default: resultMsg = errMsg;
	}
	puts(resultMsg);
}
// do{ }while(); --> �޴� ���� Ȱ���ϸ� ����. �ѹ��� ������ �̷������.
#include <stdio.h>
void main(void)
{
	char * qMsg = "\n����� ��������?";
	char * choiceMsg = "\n1.A\n2.B\n3.O\n4.AB\n";
	char * aMsg = "�Ĳ��ϰ� �����ϴ�.";     char * bMsg = "�������� ����.";
	char * oMsg = "�米���� ����.";         char * abMsg = "���ϴ�.";
	char * errMsg = "�ٽ� �õ��� �ּ���?";
	char * resultMsg = "";
	int choice = 0;
	do {
		printf("%s%s\n", qMsg, choiceMsg);   scanf_s("%d", &choice);
		switch (choice) {
			case 1: resultMsg = aMsg; break;
			case 2: resultMsg = bMsg; break;
			case 3: resultMsg = oMsg; break;
			case 4: resultMsg = abMsg; break;
			default: resultMsg = errMsg;
		}
		if (choice == 0) resultMsg = "�����մϴ�.";
		puts(resultMsg);
	} while (choice != 0);




}
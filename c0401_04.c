#include <stdio.h>
void main(void)
{
	char * qMsg = "����� ��������?";
	char * choiceMsg = "1.A \n2.B \n3.O \n4.AB";
	char * aMsg = "�Ĳ��ϰ� �����ϴ�.";
	char * bMsg = "�������� ����.�����ȴ�.";
	char * oMsg = "�米���� ����.";
	char * abMsg = "���ϰ� õ�缺�� �ִ�.";
	char * errorMsg = "�ٽ� �õ��� �ּ���.";
	int condition1 = 0; int condition2 = 0;
	int condition3 = 0; int condition4 = 0;
	int choice;
	printf("%s \n %s \n", qMsg, choiceMsg );
	scanf_s("%d", &choiceMsg);
	condition1 = choice == 1;
	condition2 = choice == 2;
	condition3 = choice == 3;
	condition4 = choice == 4;
	printf("%s \n", condition1 ? aMsg : 
		condition2 ? bMsg : 
	    condition3 ? oMsg : 
		condition4 ? abMsg : errorMsg);
}
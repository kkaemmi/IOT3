#include <stdio.h>
void main(void)
{
	char * msg = "\n�����Ͻ� ��ȣ�� �����ϼ���?";
	char * choiceMsg = "1.�нǽŰ�\n2.��ȣ�̵�\n3.�ű԰���\n4.���� ����";
	int choice = 0;
	do {
		printf("%s\n%s\n", msg, choiceMsg);
		scanf_s("%d", &choice);
		switch (choice) {
			case 1:
			case 2:
			case 3:printf("�ȳ��ϼ���. ����\n"); break;
			case 4:printf("������ �����ϰڽ��ϴ�. \n");
		}
	} while (choice != 0);
}
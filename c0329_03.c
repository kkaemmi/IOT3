#include <stdio.h>
void main(void)
{
	int age = 20;
	float height = 170.5F;
	double weight = 70.956;
	char grade = 'A';
	char * name = "���ѹα�";

	printf("���� : %d�� \n", age);
	printf("Ű : %.1fcm \n", height);
	printf("������ : %.2fkg \n", weight);
	printf("������ : %c��� \n", grade);
	printf("���� : %s \n", name);

	// �ڵ�����ȯ : ���� <-- ���� + ����
	//              �Ǽ� <-- ���� + �Ǽ�
	//              ���� <-- ����
	//              (�ƽ�Ű�ڵ�)
	//              ���� <-- ����
	// ��������ȯ : (int) 3.567 --> 3
	//              (float)  3  --> 3.0
	// ������ ����� ��� --> man_boy, manBoy(���� �����, ī��ǥ���)
}
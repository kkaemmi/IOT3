#include <stdio.h>
void main(void)
{
	char pw[7] = "a1b2c2";
	char en_pw[7] = "";   // en_pw : ��ȣȭ �迭����
	char de_pw[7] = "";   // de_pw : ��ȣȭ �迭����
	const int KEY = 3;    // const --> KEY = 3 (KEY�� �ݵ�� �̰͸� ����ض�)

	for (int i = 0; i < sizeof(pw); i++) {   // i -> 0,1,2,3,4,5,6
		en_pw[i] = (char)(pw[i] + KEY);
	}
	// ��ȣȭ �۾�
	printf("�⺻ : ");
	for (int i = 0; i < sizeof(pw); i++) {
		printf("%c", pw[i]);
	}
	printf("\n��ȣȭ : ");
	for (int i = 0; i < sizeof(en_pw); i++) {
		printf("%c", en_pw[i]);
	}
	// ��ȣȭ �۾� ���



}
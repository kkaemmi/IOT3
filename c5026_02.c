#include <stdio.h>
#define MSG "Be happy"
int main(void)
{
	char *dessert = "apple";
	char *pa = "orange";
	char *pb = "orange";

	printf("���� �Ľ��� %s�Դϴ�. \n", dessert);
	dessert = "banana";
	printf("���� �Ľ��� %s�Դϴ� \n", dessert);
	printf("%c \n", dessert[0]);
	printf("%c \n", dessert[1]);
	printf("%c \n", dessert[2]);
	printf("%c \n", dessert[3]);
	printf("%c \n", dessert[4]);
	printf("%c \n", dessert[5]);
	printf("%c \n", dessert[6]);
	printf("%c \n", dessert[7]);
	while (*dessert != 0) {   // ������ ����
		putchar(*dessert);    // ���� �����
		dessert++;            // �ּҸ� �ø�
	}
	pb = "old";
	printf("%#X, %#X \n", pa, pb);

	return 0;
}
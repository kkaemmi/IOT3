#include <stdio.h>
void main(void)
{
	char grade;
	char name[20];
//	char* name;
	int a = 10;

//	printf("���� �Է� : >>"); scanf_s("%c", &grade, sizeof(char));   // A enter(����)
//	getchar();   // enter(����)
//	printf("�̸� �Է� : >>"); scanf_s("%s", name, sizeof(name));

//	printf("%s�� ������  %c�Դϴ�. \n", name, grade);

	int inverse = -a;                            // -10 -> 0000 1010
	int inv = ~a;                                //        1111 0101 --> -10 + 1 = -11
	printf("%d \n", inverse);  // -10            //                1(2�Ǻ���)
	printf("%d \n", inv);      // -11            //        1111 0110 -> - (9+1) = -10
}
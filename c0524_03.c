#include <stdio.h>
/*
void my_gets(char* str, int size);
int main(void)
{
	char str[7];

	my_gets(str, sizeof(str));   // gets(str));
	printf("�Է��� ���ڿ� : %s \n", str);

	return 0;
}
void my_gets(char* str, int size)   // char* str = str, int size = sizeof(str) = 10
{
	int ch;
	int i = 0;

	ch = getchar();
	while ((ch != '\n') && (i < size - 1)) {   // i = 5 < (10 - 1 = 9)
		str[i] = ch;                           // str[0], str[1], str[2], str[3], str[4], str[5], str[6]
		i++;                                   //   k       o       r       e       a       \0
		ch = getchar();
	}
	str[i] = '\0';
}
*/

int main(void)
{
	int num, grade;

	printf("�й� �Է� : >>");
	scanf_s("%d", &num);                                  // 1. �����Է� enter
	getchar();                                            // getchar() <-- enter�Է�
	printf("���� �Է� : >>");
	grade = getchar();
	printf("�й� : %d, ���� : %c", num, grade);

	return 0;
}
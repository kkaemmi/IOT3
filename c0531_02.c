#include <stdio.h>
#include <string.h>
int main(void)
{
	/*
	char str[80] = "apple";
	printf("%d, %d \n", sizeof(str), sizeof(str));
	*/
	char str1[80] = "pear";
	char str2[80] = "peach";
	/*
	if (strcmp(str1, str2) == 0) {        // ������ --> return ���� ? 0
		printf("�� ���� ���� ����. \n");  // ���� ������ --> return ���� 1
	}
	else {
		printf("�� ���� ���� �����ʴ�. \n");
	}
	*/
	if (strncmp(str1, str2, 3) == 0) {                     // ������ --> return ���� ? 0
		printf("�� ���� ���� 3���ڱ����� ����. \n");       // ���� ������ --> return ���� 1
	}
	else {
		printf("�� ���� ���� 3���ڱ����� �����ʴ�. \n");
	}

	return 0;
}
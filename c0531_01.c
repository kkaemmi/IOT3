#include <stdio.h>
#include <string.h>
int main(void)
{
	/*
	char str1[80] = "strwberry";
	char str2[80] = "apple";
	char *ps1 = "banana";
	char *ps2 = str2;
	
	printf("���� ���ڿ� : %s \n", str1);
	strcpy_s(str1, sizeof(str1),str2);
	printf("�ٲ� ���ڿ� : %s \n", str1);
	printf("============\n");

	strcpy_s(str1, sizeof(str1),ps1);
	printf("�ٲ� ���ڿ� : %s \n", str1);
	printf("============\n");

	strcpy_s(str1, sizeof(str1), ps2);
	printf("�ٲ� ���ڿ� : %s \n", str1);
	printf("============\n");

	strcpy_s(str1, sizeof(str1), "banana");
	printf("�ٲ� ���ڿ� : %s \n", str1);
	printf("============\n");

	printf("1. : %s \n", str1);
	strncpy_s(str1, sizeof(str1), str2, 3);
	printf("2. : %s \n", str1);
	printf("============\n");

	strncpy_s(str1, sizeof(str1), ps1, 4);
	printf("3. : %s \n", str1);
	printf("============\n");
	*/
	/*
	strcat_s(str1, sizeof(str1), "berry");
	printf("%s \n", str1);
	strncat_s(str2, sizeof(str2), "berry", 4);
	printf("%s \n", str2);
	*/

	char str1[80];
	char str2[80];
	char *resp;

	printf("2���� ���� �Է� : >>");
	scanf_s("%s %s", str1, sizeof(str1), str2, sizeof(str2));
	printf("%d, %d \n", strlen(str1), strlen(str2));

	if (strlen(str1) > strlen(str2)) {
		resp = str1;
	}
	else {
		resp = str2;
	}
	printf("�̸��� �� ������ : %s \n", resp);

	return 0;
}
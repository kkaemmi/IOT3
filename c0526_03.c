#include <stdio.h>
#include <string.h>
int main(void)
{

	char str[80];
	char str1[80];
	char str2[80];

	printf("1. 문자열 입력 : >>"); scanf_s("%s", str, sizeof(str));
	strcpy_s(str1, sizeof(str1), str);
	printf("2. 문자열 입력 : >>"); scanf_s("%s", str, sizeof(str));
	strcpy_s(str2, sizeof(str2), str);
	printf("%s, %s \n", str1, str2);


	return 0;
}
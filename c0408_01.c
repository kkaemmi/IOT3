// 최대값_최소값 구하기
/*
#include <stdio.h>
void main(void)
{
	int arData[5] = {0, };  // 3,5,1,9,7
	int max = 0;
	int min = 0;
	for (int i = 0; i < 5; i++) {
		printf("%d번째 정수값 : >>", i + 1);
		scanf_s("%d", arData + i);            // &arData[i]
	}
	max = arData[0];
	min = arData[0];
	for (int i = 0; i < 5; i++) {
		if (max < arData[i]) { max = arData[i]; }
		if (min > arData[i]) { min = arData[i]; }
	}
	printf("최대값 : %d\n최소값 : %d\n", max, min);
}
*/
// 문자열 --> string --> "  "(마지막 : null), 나열된 문자형
// char*str = "KOREA"; --> 'K','O','R','E','A','0'
// char str[10] = "KOREA"; --> KOREA0vvvv
#include <stdio.h>
void main(void)
{
	char*str = "applejam";
	char str1[10] = "applejam";
	char*str2; char str3[30]; char str4[30];
	printf("%s\n", str);
	printf("%s\n", str1);
	printf("%d,%d\n", strlen(str), sizeof(str));   // strlen --> 실제데이터크기
	printf("%d,%d\n", strlen(str1),sizeof(str1));
	//scanf_s("%s", str2, sizeof(char) * 10);
	//printf("%s\n", str2);
	scanf_s("%s", str3, sizeof(str3));             // 공백은 인정하지 않음
	printf("%s\n", str3);
	getchar();
	gets(str4);
	puts(str4);
}
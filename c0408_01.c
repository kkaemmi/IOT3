// �ִ밪_�ּҰ� ���ϱ�
/*
#include <stdio.h>
void main(void)
{
	int arData[5] = {0, };  // 3,5,1,9,7
	int max = 0;
	int min = 0;
	for (int i = 0; i < 5; i++) {
		printf("%d��° ������ : >>", i + 1);
		scanf_s("%d", arData + i);            // &arData[i]
	}
	max = arData[0];
	min = arData[0];
	for (int i = 0; i < 5; i++) {
		if (max < arData[i]) { max = arData[i]; }
		if (min > arData[i]) { min = arData[i]; }
	}
	printf("�ִ밪 : %d\n�ּҰ� : %d\n", max, min);
}
*/
// ���ڿ� --> string --> "  "(������ : null), ������ ������
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
	printf("%d,%d\n", strlen(str), sizeof(str));   // strlen --> ����������ũ��
	printf("%d,%d\n", strlen(str1),sizeof(str1));
	//scanf_s("%s", str2, sizeof(char) * 10);
	//printf("%s\n", str2);
	scanf_s("%s", str3, sizeof(str3));             // ������ �������� ����
	printf("%s\n", str3);
	getchar();
	gets(str4);
	puts(str4);
}
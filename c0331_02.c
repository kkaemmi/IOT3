#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main(void)
{
	int i; float f; double d; char c; char * s = ""; char ss[15];
	printf("���� �Է� ��� : >>"); scanf_s("%d", &i, sizeof(i)); printf("%d \n", i);
	printf("�Ǽ� �Է� ��� : >>"); scanf_s("%f", &f, sizeof(f)); printf("%f \n", f);
    printf("Ȯ���Ǽ� �Է� ��� : >>"); scanf_s("%lf", &d, sizeof(d)); printf("%lf \n", d); // 10.5enter
	getchar();  // enter�޾Ƽ� 
	printf("���� �Է� ��� : >>"); scanf_s("%c", &c, sizeof(c)); printf("%c \n", c);
	// printf("���ڿ� �Է� ���1 : >>"); scanf_s("%s", s); printf("%s \n", s);
	printf("���ڿ� �Է� ���2 : >>"); scanf_s("%s", ss, sizeof(ss)); printf("%s \n", ss);
	// �迭�� --> �ּ� --> ss�ּ�(&ss -> NO), ������ ���� --> �ּ� --> s�ּ�(&s -> NO)
	getchar();  // enter�޾Ƽ� 
	printf("���ڿ� �Է� ���3 : >>"); gets(ss); printf("%s \n", ss);
}
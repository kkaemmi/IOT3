#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// ����� : \n �Ѥ�> �ٹٲ�, \t --> tab key = 8ĭ,4ĭ
//            ��½� : \\ --> (\), \", \', %%(%)
//            �Է�,��¿��� ���� ���, ���� --> ������ ����
void main(void)
{
	char* name = "�����";   // char* name,char * name,char *name
	int age = 3;
	char gender = 'M';
	float weight = 6.3;
	char data = 67;
	// �����
	printf("%s \n", name);   // %s <-- ���ڿ��� �ּҸ� �޴´�.
	puts(name);
	printf("\"����:%d��\"\n", age);
	printf("\\������:%.1fkg\\ \n", weight);
	// �ڵ�����ȯ
	printf("%d \n", 11 / 9);     // ����(��) <-- ����/����
	printf("%lf\n", 11.0 / 9);   // �Ǽ�(�Ҽ���) <-- �Ǽ�/�Ǽ�
	printf("%c \n", data);
	printf("%d \n", data);
	// ��������ȯ
	printf("%lf \n", 11 / (double)9);
	printf("%.2lf \n", 8.43 + 2.59);
	printf("%.2lf \n", (int)8.43 + 2.59);
	printf("%d \n", (int)(8.43 + 2.59));
	printf("%d \n", (int)8.43 + (int)2.59);
	// ��������ȯ
	printf("%d \n", 'A' + 1);
	printf("%c \n", 'A' + 1);





}
// �Լ� ����(����) <-- �Լ� ����
// �Լ� ���� <-- main()
// �Լ� ����(����)
#include <stdio.h>
/*
int sum(int x, int y);                // �Լ� --> return : be(�ڷ��� ����), not(void)
int main(void)                        //      --> �Ű����� : be(�ڷ��� ���� ����), not(void)
{                                     //      --> �����ؾ��ϴ� �˰��� �� 
	int a = 10, b = 20;
	int result;

	result = sum(a, b);
	printf("result : %d \n", result);

	return 0;
}
int sum(int x, int y)     // int x = a = 10, int y = b = 20, return = 30 <-- RAM stack
{
	int temp;             // <-- ���� ����

	temp = x + y;

	return temp;
}
*/
/*
int* get_num(void);
void main(void)
{
	int* result;

	result = get_num();
	printf("��ȯ�� : %d \n", *result);
}
int* get_num(void)
{
	int* num;

	printf("��� �Է� : >>");
	scanf_s("%d", &num);
	while (num < 0) {
		printf("������� �޽��ϴ�. \n");
		printf("��� �Է� : >>"); 
		scanf_s("%d", &num);
	}
	return &num;
}
*/

void print_char(char ch, int count);
void main(void)
{
	print_char('@', 5);
}
void print_char(char ch, int count)
{
	int i;

	for (i = 0; i < count; i++)
	{
		printf("%c", ch);
	}
}
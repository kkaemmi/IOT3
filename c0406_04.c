/*
#include <stdio.h>
int get_num(void);
void main(void)
{
	int result;
	result = get_num();
	printf("result : %d \n", result);
	result = get_num();
	printf("result : %d \n", result);
}
int get_num(void)
{
	int num;
	printf("��� �Է� >>"); scanf_s("%d", &num);
	return num;
}
*/
//    RAM ����
//  stack����        heap����          data����
//  ��������        �����޸�         ��������(main�� �ۿ��� ����)
//  �Ϲ��Լ�        (malloc())         ��������(static)
// (ȣ������)     (ȸ���ϰ������)     (main���α׷� ����)  <-- �����ֱ�

#include <stdio.h>
/*
void print_char(char ch, int couint);
void main(void)
{
	print_char('@', 5);
}
void print_char(char ch, int count)
{
	int i;
	for (i = 0; i < count; i++) {
		printf("%c", ch);
		ch++;
	}
}
*/
/*
void print_line(void);
void main(void)
{
	print_line();
	printf("�й�\t�̸�\t����\t����\n");
	print_line();
}
void print_line(void)
{
	for (int i = 0; i < 50; i++) {
		printf("-");
	}
	printf("\n");
}
*/
/*
void fruit(void);
void main(void)
{
	fruit();
}
void fruit(void)  // ����Լ� --> �ڱ��Լ����� --> �ڱ��Լ��� �� ȣ���� ���� ���� 
{                 // �׻� Ż�ⱸ�� ������ �ξ�� ��
	printf("Apple\n");
	fruit();
}
*/

void fruit(int count);
void main(void)
{
	fruit(1);
}
void fruit(int count) 
{               
	printf("Apple\n");
	if (count == 5) return;
	fruit(count + 1);
	printf("Jam\n");
}
#include <stdio.h>
/*
void print_line(void);
void main(void)
{
	print_line();
	printf("�й�   �̸�   ����   ���� \n");
	print_line();
}
void print_line(void)
{
	int i;

	for (i = 0; i < 50; i++) {
		printf("_");
	}
	printf("\n");
}
*/
/*
void fruit(int count);
void main(void)
{
	fruit(1);
}
void fruit(int count)           // count = 1 --> apple ���
{                               // 1 + 1 = 2 <-- count : apple ���
	printf("apple \n");         // 2 + 1 = 3 <-- count : apple ���
	if (count == 3) return;
	printf("apple!! \n");
	fruit(count + 1);
	printf("apple** \n");
}
*/
void fruit(int count);
void main(void)
{
	fruit(1);
}
void fruit(int count)
{
	printf("apple \n");
	if (count == 3) return;
	fruit(count + 1);
	printf("jam \n");
}
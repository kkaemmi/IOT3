#include <stdio.h>
void main(void)
{
/*
	int income = 0;
	double tax;
	const double tax_rate = 0.12;     // tax_rate(�ٹ��̻�� ����) = 0.12
//	const double* const tax_rate = &tax; --> tax_rate = &tax
//	tax_rate = 2.00;
	income = 456;

	tax = income * tax_rate;
	printf("%.1lf \n", tax);
*/
	int age;
	double height;
	printf("���̿� Ű�� �Է��ϼ��� : >>");
	scanf_s("%d %lf", &age, &height);
	printf("%d��, %.1lfcm \n", age, height);
}
#include <stdio.h>
void main(void)
{
/*
	int a = 10, b = 5; int res;     // ���� -> ~,!
									// ��� -> ^,( ) ? ( ) : ( )
	res = a / b * 2; printf("%d \n", res);
	res = ++a * 3; printf("%d \n", res);
	res = a > b && a != 5; printf("%d \n", res);
	res = a % 3 == 0; printf("%d \n", res);
*/
/*
	int a = 10;
	if (a > 0)
		a = 1;
	else
		a = -1;
	printf("%d \n", a);
*/
/*
	int a = 0, b = 0;

	if (a > 0) b = 1;
	else if (a == 0) b = 2;
	else b = 3;
	printf("%d \n", b);
*/
	int a = 0, b = 0;

	switch (a) {
		case 0: printf("b�� 2�� �����Ѵ�. \n"); b = 2; break;
		case 1: printf("b�� 1�� �����Ѵ�. \n"); b = 1; break;
		case -1:printf("b�� 3�� �����Ѵ�. \n"); b = 3; break;
	}
	printf("%d \n", b);

	return 0;
}
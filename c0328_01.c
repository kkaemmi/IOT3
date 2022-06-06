#include <stdio.h>
int main(void)
{ 
	int x = 100;             //���� �ڷ���int --> 4byte, �Է���� ���� ���� --> %d, %#X
	unsigned int y = 60000;  //���� �ڷ��� unsigned int --> 4byte, ����� ���� --> %d, %u, %#X

	long q = 200;               //���� �ڷ��� long --> 4byte, �Է���� ���� ���� --> %d, %ld, %#X
	unsigned long w = 70000;    //���� �ڷ��� unsigned long --> 4byte, ����� ���� --> %d, %ld, %u, %#X
    
	float s = 3.141592;         //�Ǽ��� float 4byte(�ε��Ҽ������), ����½� �������� --> %f, %4.2f, %f.2f
	double t = 3.141592567;     //�Ǽ��� double 8byte(�ε��Ҽ������), ����½� �������� --> %lf, %4.2lf, %f.2lf

	x = x + 1; x = x + y;
    y = y + 1; y = y + 1000;

	q++;                // q = q + 1�� ����.    q = 201
	q = q + w;          // q = 201 + 70000 = 70201 
	w++;                // w + w + 1�� ����.    w = 70001
	w = w + q;          // w = 70001 + 70201 = 140202

	printf("%d, %X, %#X \n", x, x, x);
	printf("%d, %X, %#X, %u \n", y, y, y, y);

	printf("%ld, %#X \n", q, q);
	printf("%ld, %u, %#X \n", w, w, w);

	return 0;
}
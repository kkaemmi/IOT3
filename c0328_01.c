#include <stdio.h>
int main(void)
{ 
	int x = 100;             //정수 자료형int --> 4byte, 입력출력 포맷 형식 --> %d, %#X
	unsigned int y = 60000;  //정수 자료형 unsigned int --> 4byte, 양수만 저장 --> %d, %u, %#X

	long q = 200;               //정수 자료형 long --> 4byte, 입력출력 포맷 형식 --> %d, %ld, %#X
	unsigned long w = 70000;    //정수 자료형 unsigned long --> 4byte, 양수만 저장 --> %d, %ld, %u, %#X
    
	float s = 3.141592;         //실수형 float 4byte(부동소숫점방식), 입출력시 포맷형식 --> %f, %4.2f, %f.2f
	double t = 3.141592567;     //실수형 double 8byte(부동소숫점방식), 입출력시 포맷형식 --> %lf, %4.2lf, %f.2lf

	x = x + 1; x = x + y;
    y = y + 1; y = y + 1000;

	q++;                // q = q + 1과 같다.    q = 201
	q = q + w;          // q = 201 + 70000 = 70201 
	w++;                // w + w + 1과 같다.    w = 70001
	w = w + q;          // w = 70001 + 70201 = 140202

	printf("%d, %X, %#X \n", x, x, x);
	printf("%d, %X, %#X, %u \n", y, y, y, y);

	printf("%ld, %#X \n", q, q);
	printf("%ld, %u, %#X \n", w, w, w);

	return 0;
}
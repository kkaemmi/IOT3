#include <stdio.h>
/*
void  func(int (*fp)(int a, int b));
int  sum(int a, int b);   int  mul(int a, int b);  int  max(int a, int b);
int  main(void)
{
	int sel;
	printf("���ϴ� ������ �����ϼ���? : >>");   scanf_s("%d", &sel);  //1, 2, 3
	switch (sel) {
		case 1: func(sum);  break;
		case 2: func(mul);  break;
		case 3: func(max);  break;
	}
	return  0;
}
void  func(int(*fp)(int a, int b))  //int(*fp)(int a, int b) = sum, mul, max
{
	int  a, b;  int  res;
	printf("�� ���� ���� �Է� : >>");  scanf_s("%d,%d", &a, &b);  //100,200
	res = fp(a, b);
	printf("����� : %d \n", res);
}
int  sum(int a, int b) { return  (a + b); }
int  mul(int a, int b) { return  (a * b); }
int  max(int a, int b) { 
	if (a > b) return  a;  
	else        return  b; }
*/
/*
int  main(void)
{
	int  a = 10;  double b = 3.5;  void * vp;  // ������ ���𿡼� �ڷ����� void�̸�
	                                                            // � �ڷ����� �ּҵ� ��� �ްڴ�.
	vp = &a;                                               // �׷��� ����ȯ�� �ʿ��ϴ�.
	printf("%d \n", *(int *)vp);
	 //                   --------------
    //						read / (����ȯ)
	vp = &b;                                              
	printf("%.2f \n", *(double *)vp);
	//						  read / (����ȯ)
	return  0;
}
*/

#include <stdlib.h>
int  main(void)
{
	int * pi;  double * pd;
	pi = (int *)malloc(sizeof(int) * 5);             //20byte
	if (pi == NULL) { printf("�޸� ���� \n");  exit(1); }
	pd = (double *)malloc(sizeof(double) * 2); //16byte
	*pi = 1000000;
	*pd = 3.141592;
	printf("%ld \n", *pi);
	printf("%.6f \n", *pd);

	free(pi);
	free(pd);
	return  0;
}

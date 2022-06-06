/*
�Լ�
   - �����̸�ó�� �ڿ� �׻�()�� �ִ�.
   - ����ڰ� ����⵵ �ϰ�, �����Լ��� �ִ�.
   - ����� = Ű���� �ڿ� ()�� �ִ� ���� �Լ��� �ƴϴ�.
     (if(), switch(), for(), while(), ...
   - �Լ� �ȿ� �Լ��� ���� �Ǵ� ������ �� ����.

�Լ��� ���
   - �Լ���(������ ó�� ���, ��� < ����)
   - ����Ÿ�� �Լ���(�Ű�����,�Ű�����,...) <-- ����,...
     {
	   ������ ����;
	   (return;) <-- ��������(����Ÿ�� : void)
	   return ��(�� or �ּ�);      ����Ÿ�� : char,char*,int,long,float,double
	 }

1) �Լ� ����(����) <-- �Լ��� �������� ������ ���ڴ�.
                   <-- �Ű������� �� �� ��������?
				   <-- ���ϰ��� ��� ���� ���ΰ�?

2) �Լ� ����(����) <-- ������ ������ ��� ������ ������?
                   <-- ���ϰ��� ����ؼ� ������ ������ �ۼ��Ѵ�.
				   <-- ���� Ÿ�Ե� ����ؾ� �Ѵ�.

3) �Լ� ����(���)
*/
/*
#include <stdio.h>
int func(int a);
void main(void)
{
	int x;
	x = func(3);
	printf("%d\n", x);
}
int func(int a) {
	int y;
	y = 2 * a + 1;
	return y;
}
*/
#include <stdio.h>
void printFrom1To10(void);
int getTootalFrom(int num);
int change(int num);
// 5�� ���� �Է��� �޾Ƽ� -> �ִ밪, �ּҰ� : �迭, ������
int* getMaxandMin(int arData[]);

void main(void)
{
	//printFrom1To10();
	//printf("%d\n", getTootalFrom(10));
	//printf("%d\n", change(10));
	//printf("%d\n", change(9));
	int arData[5] = { 30,20,50,40,90 };
	int* Max_Min = getMaxandMin(arData);

	printf("�ִ밪 : %d, �ּҰ� : %d \n", Max_Min[0], Max_Min[1]);
}
int* getMaxandMin(int arData[]) // int arData[] = arData;
{
	int maxandmin[2] = { 0, };
	int max = arData[0]; // 30
	int min = arData[0]; // 30
	for (int i = 0; i < 5; i++) {
		if (max < arData[i]) { max = arData[i]; }
		if (min > arData[i]) { min = arData[i]; }
	}
	maxandmin[0] = max;
	maxandmin[1] = min;
	return maxandmin;
}
void printFrom1To10(void)
{
	for (int i = 0; i < 10; i++) {
		printf("%d\n", i + 1);
	}
}
int getTootalFrom(int num)
{
	int total = 0;
	for (int i = 0; i < num; i++) {
		total += (i + 1);
	}
	return total;
}
int change(int num)  // ¦�� -> Ȧ��, Ȧ�� -> ¦��
{
	return ++num;
}
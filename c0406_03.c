// �Լ� : 3����
// 1. �Լ��� ����(����)
// 2. �Լ� ����(����)
// 3. �Լ� ����(ȣ���ϴ� �ʿ� ����, main)
// �Լ���( ) --> ������, �Լ��� --> �ּ� --> *(������ ����) / char* / �迭�� / �Լ���
#include <stdio.h>
int sum(int x, int y); // �Ű����� 2��(���ڰ� 2��),�Լ�ó��,����� --> int����
// void sum(void);           <-- ���� �����ʹ� ����, ó���ؼ�, ����� �����ϴ� �͵� ����.
// void sum(int x, int y);   <-- ���� �����ʹ� �ְ�, ó���ؼ�, ����� �����ϴ� ���� ����. 
// int sum(void);            <-- ���� �����ʹ� ����, ó���ؼ�, ����� ������ ���� �ִ�.
void main(void)
{
	int a = 100, b = 200; int result;
	result = sum(a, b); // �Լ��� ����
	printf("result : %d \n", result);
}
int sum(int x, int y)  // �Լ��� ����, int x = 100 , int y = 200
{
	int temp;
	temp = x + y;
	return temp;
}
//[����]
// int ran(void); Ȱ���Ѵ�.
// 0 ~ 99 ������ ������ �� 5�� �����ϴ� ���α׷��� �ۼ��϶�
// printf("0 ~ %d \n", RAND_MAX);
/*
#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
//#include <math.h>
int main(void)
{
	int i;
	
	srand((int)time(NULL));     // time(NULL) : ���� �ð� ���� ����

	for (i = 0; i < 5; i++) {
		printf("���� ��� : %d \n", rand() % 100);
		printf("0 ~ %d \n", RAND_MAX);
	}

	return 0;
}
*/
//[����]
// �� ���� �ֻ����� ������ ���� ����� ����ϴ� ���α׷���
// �ۼ��϶� �� ����� ������ �Ұ����ؾ� �Ѵ�.
// �ֻ��� 1�� ��� : 2
// �ֻ��� 1�� ��� : 6
#include <stdio.h>
#include <stdlib.h>     // rand()
#include <time.h>       // time(NULL)
int main(void)
{
	int two, six;
	int circle = 0;

	srand((int)time(NULL));

	while (1) {
		two = rand() % 6 + 1;
		six = rand() % 6 + 1;
		if (two == 2 && six == 6) {
			printf("%d, %d \n", two, six);
			break;
		}
		printf("�� ���� ���� �ʽ��ϴ�. --%d-- \n", ++circle);
	}

	return 0;
}
// [����]
// do ~ while�� -> ��ø���� ����ؼ� -> �������� �ۼ��� ����
// ���� ������ ����鼭 ������ ����
// ��(dan),���(i)�� �ʿ��ϴ�.
/*
#include <stdio.h>
int main(void)
{
	int i;
	int cur_dan = 2;

	do {
		i = 1;
		do {
			printf("%d x %d = %d \n", cur_dan, i, cur_dan * i);
			i++;
		} while (i < 10);
		cur_dan++;
		printf("----------\n");
	} while (cur_dan < 10);

	return 0;
}
*/
// [����]
// 1 ~ 100 �̸� ���� �� -> 7�� ��� �̰ų�, 9�� ����� ����϶�
// (7�� ����̸鼭 9�� ����� ������ -> �ѹ��� �����)
/*
#include <stdio.h>
int main(void)
{
	int i = 0;

	for (i = 1; i < 100; i++)
		if (i % 7 == 0 || i % 9 == 0)
			printf("%d \n", i);
	
	return 0;
}
*/
// [����3]
// ������ --> 1) ¦����(2,4,6,8), 2�� : 2 x 2, 4�� : 4 x 4, 6�� : 6 x 6, 8�� : 8 x 8
//            2) continue, break
#include <stdio.h>
int main(void)
{
	int i;
	int dan;

	for (dan = 2; dan < 10; dan++) {
		if (dan % 2 != 0) continue;
		for (i = 1; i < 10; i++) {
			if (dan < i) break;
			printf("%d x %d = %d \n", dan, i, dan*i);
		}
		printf("-----\n");
	}
		
	return 0;
}
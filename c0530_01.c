//[����]
// ����ڷκ��� n���� �޴´�
// n * n�� ������ �迭�� ����ϴ� ���α׷��� �ۼ��϶�
/*
Ex.
1  2  3  4  5
16 17 18 19 6
15 24 25 20 7
14 23 22 21 8
13 12 11 10 9
*/
#include <stdio.h>
int main(void)
{
	int arr[50][50];
	int len, idx, i,j;
	int s = 0, w = -1;
	int inc = 1, val = 0;

	printf("���� �Է� : >>"); scanf_s("%d", &len);   // 5 enter
	idx = len = 3;
	while (1) {
		for (i = 0; i < idx; i++) {   // ���� ������
			val++;
			w = w + inc;
			arr[s][w] = val;
		}
		idx = idx -1;
		if (val == len * len) break;
		for (i = 0; i < idx; i++) {   // ���� ������
			val++;
			s = s + inc;
			arr[s][w] = val;
		}
		inc = inc * -1;
	}
	for (i = 0; i < len; i++) {       // ������ �迭 ���
		for (j = 0; j < len; i++) {
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
/*
#include <stdio.h>
int main(void)
{
	char c[10] = "apple";
	char d[10] = "pie";

	//char *c[10] = "apple";
	//char *d[10] = "pie";

	printf("%s \n", c + d);

	return 0;
}
*/
#include <stdio.h>
int main(void)
{
	int arr[50][50];
	int len, idx, j;
	int s = 0;
	int inc = 1, val = 0;
	int i = 0;

	printf("���� �Է� : >>"); scanf_s("%d", &len);   // 5 enter
	idx = len;
	while (1) {
		for (i = 0; i < idx; i++) {   // ���� ������
			val++;
			arr[s][i] = val;
		}
		idx = idx - 1;
		if (val == len * len) break;
		for (i = 0; i < idx; i++) {   // ���� ������
			val++;
			s = s + inc;
			arr[s][i] = val;
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
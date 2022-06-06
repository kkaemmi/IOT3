// �����޸� -> RAM : heap ������ ��ġ�Ǹ�, ���α׷��Ӱ� �޸� ũ�⸦ �����Ѵ�.(��������)
// malloc(), calloc() �Լ��� Ȱ��
#include <stdio.h>
#include <stdlib.h> // <- malloc(), calloc() �Լ� ������
void getMaxAndMin(int*, int, int*, int*);
void main(void)
{
	int size = 0; int max = 0, min = 0; int* dAr = 0;
	printf("������ ���� �Է� : >>"); scanf_s("%d", &size); // 5
	dAr = (int*)calloc(size, sizeof(int)); // size(4) * 5 = 20nyte ũ�� Ȯ����
	// dAr = (int*)malloc(sizeof(int)*size);
	for (int i = 0; i < size; i++) {
		printf("%d��° ���� �Է� : ", i + 1); scanf_s("%d", dAr + i);
	}
	getMaxAndMin(dAr, size, &max, &min);
	printf("�ִ밪 : %d, �ּҰ� : %d \n", max, min);
	free(dAr);  // malloc(),calloc() ��� ���� �� -> �ݵ�� �ּҸ� �ݳ��ؾ� ��
}
void getMaxAndMin(int* dAr, int size, int* max, int* min)
{ // int* dAr = dAr, int size = 5, int* max = &max, int* min = &min
	*max = dAr[0];
	*min = dAr[0];
	for (int i = 1; i < size; i++) {
		if ((*max < dAr[i])) { *max = dAr[i]; }
		if ((*min > dAr[i])) { *min = dAr[i]; }
	}
}
// 5�� ������ �Է¹޾� -> �ּҰ�,�ִ밪 ���ϴ� �Լ� ����
#include <stdio.h>
void getMaxAndMin(int arData[], int*max, int*min) { // int Data[] = �ּ� = arData
	*max = arData[0];                               // int* max = &max
	*min = arData[0];                               // int* min = &min
	for (int i = 0; i < 5; i++) {
		if (*max < arData[i]) { *max = arData[i]; }
		if (*min < arData[i]) { *min = arData[i]; }
	}
}
void main(void)
{
	int arData[5] = { 4,7,3,9,8 };
//  arData[0] = 4, arData[1] = 7, arData[2] = 3
	int max = 0;
	int min = 0;
	getMaxAndMin(arData, &max, &min);
	printf("�ִ밪 : %d \n", max);
	printf("�ּҰ� : %d \n", min);
}
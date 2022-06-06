// 5개 정수를 입력받아 -> 최소값,최대값 구하는 함수 구현
#include <stdio.h>
void getMaxAndMin(int arData[], int*max, int*min) { // int Data[] = 주소 = arData
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
	printf("최대값 : %d \n", max);
	printf("최소값 : %d \n", min);
}
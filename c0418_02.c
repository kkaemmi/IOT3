// 동적메모리 -> RAM : heap 영역에 배치되며, 프로그래머가 메모리 크기를 결정한다.(유동적임)
// malloc(), calloc() 함수를 활용
#include <stdio.h>
#include <stdlib.h> // <- malloc(), calloc() 함수 지원함
void getMaxAndMin(int*, int, int*, int*);
void main(void)
{
	int size = 0; int max = 0, min = 0; int* dAr = 0;
	printf("정수의 갯수 입력 : >>"); scanf_s("%d", &size); // 5
	dAr = (int*)calloc(size, sizeof(int)); // size(4) * 5 = 20nyte 크기 확보함
	// dAr = (int*)malloc(sizeof(int)*size);
	for (int i = 0; i < size; i++) {
		printf("%d번째 정수 입력 : ", i + 1); scanf_s("%d", dAr + i);
	}
	getMaxAndMin(dAr, size, &max, &min);
	printf("최대값 : %d, 최소값 : %d \n", max, min);
	free(dAr);  // malloc(),calloc() 사용 종료 후 -> 반드시 주소를 반납해야 함
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
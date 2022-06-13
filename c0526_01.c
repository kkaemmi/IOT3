//[문제]
// int* maxPtr; int* minPtr; int ar[5]; 활용한다.
// void Max_Min(int* arr, int size, int**maxPtr,int**minPtr); 활용하여
// maxPtr에서는 가장 큰 값이 저장된 배열요소의 시작 주소 값이,
// minPtr에서는 가장 적은 값이 저장된 배열요소의 시작 주소 값이 저장되게 하라
#include <stdio.h>
void Max_Min(int *arr, int size, int **maxPtr, int **minPtr);
int main(void)
{
	int* maxPtr; int* minPtr; int arr[5];   // 10, 20, 30, 40, 50
	int i;

	for (i = 0; i < 5; i++) {
		printf("%d번째 정수 입력 : >>", i + 1);
		scanf_s("%d", &arr[i]);
	}
	Max_Min(arr, sizeof(arr)/sizeof(int), &maxPtr, &minPtr);
	printf("최대값 : %d, 최소값 %d \n", *maxPtr, *minPtr);

	return 0;
}
void Max_Min(int *arr, int size, int **maxPtr, int **minPtr)
{
	int *max; int *min;
	int i;

	max = &arr[0];
	min = &arr[0];
	for (i = 0; i < 5; i++) {
		if (*max < arr[i]) max = &arr[i];
		if (*min < arr[i]) min = &arr[i];
	}
	*maxPtr = max;
	*minPtr = min;

}
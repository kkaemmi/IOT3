//[����]
// int* maxPtr; int* minPtr; int ar[5]; Ȱ���Ѵ�.
// void Max_Min(int* arr, int size, int**maxPtr,int**minPtr); Ȱ���Ͽ�
// maxPtr������ ���� ū ���� ����� �迭����� ���� �ּ� ����,
// minPtr������ ���� ���� ���� ����� �迭����� ���� �ּ� ���� ����ǰ� �϶�
#include <stdio.h>
void Max_Min(int *arr, int size, int **maxPtr, int **minPtr);
int main(void)
{
	int* maxPtr; int* minPtr; int arr[5];   // 10, 20, 30, 40, 50
	int i;

	for (i = 0; i < 5; i++) {
		printf("%d��° ���� �Է� : >>", i + 1);
		scanf_s("%d", &arr[i]);
	}
	Max_Min(arr, sizeof(arr)/sizeof(int), &maxPtr, &minPtr);
	printf("�ִ밪 : %d, �ּҰ� %d \n", *maxPtr, *minPtr);

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
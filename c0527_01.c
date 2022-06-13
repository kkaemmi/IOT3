//[����]
// ���α׷��� �����϶�
// 1 2 3 4 --> 13 9 5 1 --> 16 15 14 13 --> 4 8 12 16
// 5 6 7 8     14 10 6 2    12 11 10  9     3 7 11 15
// 9 10 11 12  15 11 7 3     8  7  6  5     1 5  9 13
// ���� ���� : -2���� �迭�� ���� �ּҸ� �޴� ���
//                int arr[2][3] = {1,2,3,4,5,6}, [][] <--> *[]
//				  int (*parr)[3] = arr;
//                �ڷ���(*������)[��] = 2�����迭��;
//				  paee[0][0]
//             - �Լ� �������� �ּҸ� �޴� ���
//				  int(*padd)(int a) = add;
//				   padd(100);
// int add(int a) {
//      return a * a;
// }
#include <stdio.h>
void printArr(int (*arr)[4]);     // int(*arr)[4] = 2�����迭���� �ּҷ� ����
void rotateArr(int (*arr)[4]);    // int(*arr)[4] = 2�����迭���� �ּҷ� ����
int main(void)
{
	int arr[4][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16} };
	int i;

	for (i = 0; i < 4; i++) {
		printArr(arr);
		rotateArr(arr);
	}

	return 0;
}
void printArr(int (*arr)[4])      // int (*arr)[4] = arr
{
	int i,j;

	printf("--- Show Rotate Array ---");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
}
void rotateArr(int (*arr)[4])     // int (*arr)[4] = arr
{
	int temp[4][4];
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			temp[j][3-i]= arr[i][j];
		}
	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			arr[i][j] = temp[i][j];
		}
	}

}
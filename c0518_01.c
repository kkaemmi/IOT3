//[����]
// int arr[5] = {1,2,3,4,5}, int *p --> arr,
// (*p += 2, p++) <-- 5�� �ݺ��� ����, �׸��� ������ �迭�� ����϶�
#include <stdio.h>
/*
int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int *p = &arr;
	int i;

	for (i = 0; i < 5; i++) {
		*p += 2;  // *p = *p + 2
		p++;
	}
	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n----------\n");
	p = arr;
	for (i = 0; i < 5; i++) {
		printf("%d ", p[i]);
	p = arr;
	}
	printf("\n----------\n");
	for (i = 0; i < 5; i++) {
		printf("%d ", *(p + i));
	}

	return 0;
}
*/
//[����]
// int arr[5] = {1,2,3,4,5}, int *p --> arr,
// (*(p + i) += 2) <-- 5�� �ݺ�(i)�� ����, �׸��� ������ �迭�� ����϶�
/*
int main(void)
{//                3 4 5 6 7
	int arr[5] = { 1,2,3,4,5 };
	int *p = &arr;
	int i;

	for (i = 0; i < 5; i++) {
		*(p + i) += 2;  // *(p+i) = *(p+i) + 2
	}
	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n----------\n");
	for (i = 0; i < 5; i++) {
		printf("%d ", p[i]);
	}
	printf("\n----------\n");
	for (i = 0; i < 5; i++) {
		printf("%d ", *(p + i));
	}

	return 0;
}
*/
/*
int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int *p = &arr[4];
	int total = 0;
	int i;

	for (i = 0; i < 5; i++) {
		total += *(p--);     // total += *p--;
	}   // total = 4 + 3 + 2 + 1

	printf("%d", total);

	return 0;
}
*/
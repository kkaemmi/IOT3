//[����]
// int arr[6] = {1, 2, 3, 4, 5, 6}�� �迭�� ����� ���� ������
// 6,5,4,3,2,1 �� ���� ���Ѷ� (�����ͺ��� Ȱ��)
#include <stdio.h>
/*
int main(void)
{//               0, 1, 2, 3 ,4, 5
   int arr[6] = { 1, 2, 3, 4, 5, 6 };
   int * fp = &arr[0]; int * lp = &arr[5];
   int temp; int i;

   for (i = 0; i < 6; i++) {
	  printf("%d", arr[i]);
   }
   printf("\n");
   for (i = 0; i < 3; i++) {
	  temp = *fp;
	  *fp  = *lp;
	  *lp  = temp;
	  fp++;
	  lp--;
   }
   for (i = 0; i < 6; i++) {
	  printf("%d", arr[i]);
   }

   return 0;
}
*/
//[����]
// ���� n�� ����� ���� ������ ����ϴ� �Լ��� �����Ѵ�.
// �� �Լ��� main()���� ȣ���ϴ� ������ ���α׷��� �ۼ��϶�
// Call by value �Լ� ��� Call by reference �Լ� ���
/*
int Call_By_Value(int n);
void Call_By_Reference(int *n);
int main(void)
{
	int n = 100;
	int result = Call_By_Value(n);

	printf("%d \n", result);
	Call_By_Reference(&n);
	printf("%d \n", n);

	return 0;
}
int Call_By_Value(int n)   // int n = n = 100
{
	return n * n ;
}
void Call_By_Reference(int *n)   // int* n = &n = 0x1234
{
	int n1 = *n;
	*n = n1 * n1;
}
*/
//[����]
// �� ������ ����� ���� ���� �ڹٲٴ� �Լ��� �����϶�
// swaps(&n1, &n2, &n3); Ȱ����
// n1�� --> n2������,n2�� --> n3������,n3�� --> n1������ �����϶�
void swaps(int *n1, int *n2, int *n3);
int main(void)
{
	int n1 = 100; int n2 = 200; int n3 = 300;   // n1 <-- n3
												// n2 <-- n1
	printf("%d, %d, %d \n", n1, n2, n3);		// n3 <-- n2
	swaps(&n1, &n2, &n3);
	printf("%d, %d, %d \n", n1, n2, n3);

	return 0;
}
void swaps(int *n1, int *n2, int *n3)   // int *n1 = &n1, int *n1 = &n2, int *n1 = &n3
{
	int temp = *n3;
	*n3 = *n2;
	*n2 = *n1;
	*n1 = temp;
}
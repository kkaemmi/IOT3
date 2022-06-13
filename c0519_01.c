//[문제]
// int arr[6] = {1, 2, 3, 4, 5, 6}를 배열의 저장된 값의 순서를
// 6,5,4,3,2,1 로 변경 시켜라 (포인터변수 활용)
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
//[문제]
// 변수 n에 저장된 값의 제곱을 계산하는 함수를 정의한다.
// 이 함수를 main()에서 호출하는 형태의 프로그램을 작성하라
// Call by value 함수 사용 Call by reference 함수 사용
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
//[문제]
// 세 변수에 저장된 값을 서로 뒤바꾸는 함수를 정의하라
// swaps(&n1, &n2, &n3); 활용함
// n1값 --> n2값으로,n2값 --> n3값으로,n3값 --> n1값으로 저장하라
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
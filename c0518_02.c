#include <stdio.h>
/*
int main(void)
{
	int ar[5] = { 1,2,3,4,5 };
	int *pa = &ar;

	printf("%d \n", ++(*pa));   // 1 + 1 = 2, (*pa) = (*pa) + 1
	printf("%d \n", ++(*pa));   // 2 + 1 = 3
	printf("%d \n", ++(*pa));   // 3 + 1 = 4
	printf("\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", ar[i]);
	}
	printf("\n");
	ar[0] = 1;   // 1 --> 2 --> 3 --> 4
	printf("%d \n", (*pa)++);  
	printf("%d \n", (*pa)++);
	printf("%d \n", (*pa)++);
	for (int i = 0; i < 5; i++) {
		printf("%d ", ar[i]);
	}
	printf("\n");

	return 0;
}
*/
int main(void)
{
	int ar[5] = { 10,20,30,40,50 };
	int *pa = ar;
	int *pb = pa + 3;

	printf("%#X \n", pa);
	printf("%#X \n", pb);
	pa++;
	printf("%d \n", pb - pa);
	if(pa<pb)
		printf("%d \n", *pa);
	else
		printf("%d \n", *pb);

	return 0;
}
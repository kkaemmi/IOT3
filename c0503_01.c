#include <stdio.h>
int main(void)
{
	int A, Z;
	int res,res1;

	for (A = 0; A < 10; A++) {
		for (Z = 0; Z < 10; Z++) {
			printf("%d \n", A * 10 + Z);
			printf("%d \n", Z * 10 + A);
			printf("--\n");
			res = A * 10 + Z + Z * 10 + A;
			if (res == 99) {
				printf("%d \n", res);
				printf("\n\n");
			}
		}
	}
/*

	int A, B, C;
*/
	return 0;
}
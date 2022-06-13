#include <stdio.h>
void main(void)
{
/*
	int a = 10, b = 20;
	int res = 2;
	int res1 = 2;

	a += 20;                // a = 10 + 20 = 30
	res1 = res1 * b + 10;   // res1 = 2 * 20 + 10 = 40 + 10 = 50
	res *= b + 10;          // res = res * (b+10) = 2 * 30 = 60

	printf("%d, %d \n", a, b);
	printf("%d \n", res1);
	printf("%d \n", res);
*/
/*
	int a = 10, b = 20;
	int res;
	
	//res = (++a, ++b);
	int res1 = (a++, b++);
	printf("%d, %d \n", a, b);
	//printf("%d \n", res);
	printf("%d \n", res1);
*/
/*
	int a = 10, b = 20;
	int res;

	res = (a > b) ? a : b;
	printf("%d \n", res);
*/

	int a = 10, b = 12, c = 2;
	                          //      8421
	printf("%d \n", a & b);   // 0000 1010 -> a
	                          // 0000 1100 -> b
	                          // 0000 1000 -> &(and)

	printf("%d \n", a ^ b);   // 0000 1010
	                          // 0000 1100 ^(º£Å¸Àû,ex) --> Â¦¼ö¸é : 0, È¦¼ö : 1 --> 6

	printf("%d \n", a | b);   // 0000 1010
							  // 0000 1100 |(or) --> 14(E)
	                          // 0000 1110

	printf("%d \n", ~a);      // 0000 1010 -> 1111 0101 -> -(8+2=10+1=11) = -11

	printf("%d \n", a << c);  // 0000 1010
	                          // 0001 010*      32+8
	                          // 0010 10** -> 0010 1000 --> 40

	printf("%d \n", a >> c);  // 0000 1010
	                          // 0000 0101
	                          // 0000 0010 -> 2
}
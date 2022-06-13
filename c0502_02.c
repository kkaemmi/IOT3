#include <stdio.h>
int main(void)
{ // page 145~
/*
	int rank = 2, m = 0;
	
	switch (rank)
	{
		case 1: m = 300; break;
		case 2: m = 200; break;
		case 3: m = 100; break;
		default: m = 33;
	}
	printf("%d \n", m);
*/
/*
	int rank = 2, m = 0;
	char ch = 'c';

	switch (ch)
	{
		case 'a': m = 300; break;
		case 'b': m = 200; break;
		case 'c': m = 100; break;
		default: m = 33;
	}
	printf("%d \n", m);
*/
/*
	int a = 1;     // 초기값

	while (a < 10) {   // 비교(조건)
		a = a * 2;     // a = 1*2=2, a = 2*2=4, a = 4*2=8, a = 8*2=16 (처리, 값-증감값)
		printf("%d \n", a);
	}
	printf("a : %d \n", a);
*/
/*
	int a = 1;
	int i;
	
	for (i = 0; i < 3; ++i)   // (++i -> i++) (--i -> i--) 
		a = a * 2;   // a = 1*2=2, i=1 -> a = 2*2=4, i=2 -> a = 4*2=8, i=3 -> break
	printf("%d \n", a);
*/
/*
	int a = 1;
	int i;

	for (i = 0; i < 10; i += 3)     // i =0     i = 0+3=3, i = 3+3=6, i=6+3=9, i=9+3=12
		a = a * 2;                  // a=1*2=2, a=2*2=4, a=4*2=8, a=8*2=16
	printf("%d \n", a);
	printf("%d \n", i);
*/
/*
	int i = 0;

	for(i=0;i<10;i++) {
		printf("Be Happy!! %d \n", i);
		if (i == 3) {
			i += 2;
		}
	}
*/
	int a = 1;

	do {
		a = a * 2;
		printf("%d \n", a);
	} while (a < 10);
	printf("a : %d \n", a);

	return 0;
}
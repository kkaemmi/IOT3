#include <stdio.h>
/*
int main(void)
{
   char * pary[5] = { "dog", "elephant", "horse", "tiger", "lion" };
   // [] [] = * [] = ** <-- 접근 권한 같다.
   // pary[0] : 주소를 기억하라.
   for (int i = 0; i < 5; i++)
	  printf("%s \n", pary[i]);
}
*/
/*
int main(void)
{
	int ary1[4] = { 1, 2, 3, 4 };
	int ary2[4] = { 11, 12, 13, 14 };
	int ary3[5] = { 21, 22, 23, 24 };
	int * pary[3] = { ary1, ary2, ary3 }; // * [] = [][]= **
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++)
			printf("%5d", pary[i][j]);
		printf("\n");
	}
	return 0;
}
*/

// 값 : pary[2][2]; --> 주소 : pary[2] + 2 --> 값 : *(pary[2] + 2) <-- pointer의 Read기능
/*
int main(void)
{
   int      a = 10;
   int * pi;
   int**ppi;

   pi = &a;
   ppi = &pi;

   printf("%10d %#X \n", a, &a);
   printf("%#X %#X %d \n", pi, &pi, *pi);
   printf("%#X %#X %#X %10d \n", ppi, &ppi, *ppi, **ppi);
   return 0;
}
*/

//*(&a) = a, &(*a) = a,  *& = &* <-- 소거되어진다.

void swap_ptr(char**ppa, char**ppb);
int main(void)
{
	char* pa = "success";
	char * pb = "failure";

	printf("%s, %s \n", pa, pb);     // pa[&pa] --> (0x100 "success") *
	swap_ptr(&pa, &pb);              // pb[&pb] --> (0x200 "failure") *
	printf("%s, %s \n", pa, pb);

	return 0;
}
void swap_ptr(char** ppa, char** ppb)     // char** ppa = &pa, char** ppb = &pb
{										  //             0x100             0x200
	char* pt;                             // pt(0x100)  (0x200)           (0x100)

	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
}
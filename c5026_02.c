#include <stdio.h>
#define MSG "Be happy"
int main(void)
{
	char *dessert = "apple";
	char *pa = "orange";
	char *pb = "orange";

	printf("오늘 후식은 %s입니다. \n", dessert);
	dessert = "banana";
	printf("내일 후식은 %s입니다 \n", dessert);
	printf("%c \n", dessert[0]);
	printf("%c \n", dessert[1]);
	printf("%c \n", dessert[2]);
	printf("%c \n", dessert[3]);
	printf("%c \n", dessert[4]);
	printf("%c \n", dessert[5]);
	printf("%c \n", dessert[6]);
	printf("%c \n", dessert[7]);
	while (*dessert != 0) {   // 값으로 비교함
		putchar(*dessert);    // 값을 출력함
		dessert++;            // 주소를 늘림
	}
	pb = "old";
	printf("%#X, %#X \n", pa, pb);

	return 0;
}
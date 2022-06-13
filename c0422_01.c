#include <stdio.h>
void main(void)
{
	char a = 127;   printf("%d \n", a);      // OK
	char a4 = 128;  printf("%d \n", a4);
	char a1 = 256;  printf("%d \n", a1);
	char a2 = -128; printf("%d \n", a2);     // OK
	char a3 = -129; printf("%d \n", a3);
	char fruit[6] = "apple";

	unsigned char b = 255;   printf("%u, %d \n", b, b);      // OK
	unsigned char b1 = 256;  printf("%u, %d \n", b1, b1);
	unsigned char b2 = -128; printf("%u, %d \n", b2, b2);
	unsigned char b3 = -255; printf("%u, %d \n", b3, b3);

	printf("%s \n", fruit); printf("%c %c %c \n", fruit[0], fruit[1], fruit[2]);
	fruit[0] = 'x'; printf("%s \n", fruit); printf("%c \n", fruit[0]);
	fruit[1] = 'y'; printf("%s \n", fruit); printf("%c \n", fruit[1]);
	*fruit = "banana"; printf("%s \n", fruit);
}
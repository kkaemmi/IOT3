#include <stdio.h>
int main(void)
{
/*
	char ch;

	while (1) {
		ch = getchar();
		//scanf_s("%c", &ch);
		if (ch == '\n')    // '\n' --> enter key
			break;
		//printf("%c", ch);
		putchar(ch);
	}
*/

	int res;
	char ch;

	while (1) {
		res = scanf_s("%c", &ch);
		if (res == EOF)   // ctrl + z = -1, -1 = EOF
			break;
		printf("%d ", ch);
	}
	printf("ctrl + z -> 2È¸ while¹® ¹þ¾î³² \n");

	return 0;
}
#include <stdio.h>
/*
int main(void)
{
	char small, cap = 'G';

	if ((cap >= 'A') && (cap <= 'Z')) {
		small = cap + 32;     // 97 - 32 = 대문자, 65 + 32 = 소문자
	}
	printf("대문자 : %c %c", cap, '\n');
	printf("소문자 : %c", small);

	return 0;
}
*/
/*
int main(void)
{
	char ch1, ch2;
	char a, b;

	scanf_s("%c%c", &ch1, sizeof(char), &ch2, sizeof(char));
	printf("[%c%c]", ch1, ch2);
	/*
	x = getchar();
	fflush(stdin);
	putchar('\n');
	putchar(x);
	printf("%c\n",x);
	y = getchar();
	fflush(stdin);
	putchar('\n');
	putchar(y);
	printf("%c\n",y);

	return 0;
}
*/
int main(void)
{
	int ch;

	ch = getchar();
	putchar(ch);
	getchar();
	putchar('\n');
	ch = getchar();
	putchar(ch);

	return 0;
}

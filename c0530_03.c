#include <stdio.h>
/*
int main(void)
{
	char str[80] = "apple juice";
	char *ps = "banana";

	puts(str);
	puts(ps);
	printf("==========\n");
	fputs(str, stdout); putchar('\n');
	fputs(ps, stdout); putchar('\n');
	printf("==========\n");
	puts("milk");
	fputs("milk", stdout); putchar('\n');

	return 0;
}
*/
/*
int main(void)
{
	int i = 0;
	char str[20];
	char ch;
	do {
		ch = getchar();     // "korea"
		str[i++] = ch;
	} while (ch != '\n');   // '\n' = enter
	str[--i] = 0;           //'\0';
	printf("%s", str);

	return 0;
}
*/
void my_gets(char * ps) { // char ps[] = 200¹øÁö
	char ch;

	while ((ch = getchar()) != '\n') { // "I LOVE YOU"
		*ps++ = ch;
	}
	*(ps) = 0;
}

int main()
{
	char ps[20];

	my_gets(ps);

	printf("%s \n", ps);

	return 0;
}
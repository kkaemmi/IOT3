#include <stdio.h>
#include <string.h>
int main(void)
/*
{

	char a[80];

	//scanf_s("%[^\n]s", a, sizeof(a));   // [^\n] = Null값 인식
	gets(a);                              // gets = Null값 인식
	printf("%s", a);

	return 0;
}
*/
/*
{
	char str[80];

	printf("문자열 입력 : >>");
	fgets(str, sizeof(str), stdin);
	printf("%s \n", str);

	return 0;
}
*/
/*
{
	int len;
	char name[20];

	printf("이름 입력 : >>");
	fgets(name, sizeof(name), stdin);
	len = strlen(name);
	printf("%s \n", name);
	printf("%d \n", len);

	return 0;
}
*/
/*
{
	char a,b;

	a = getchar();
	b = getchar();
	printf("%c, %c| \n", a, b);

	return 0;
}
*/
/*
{
	char a,b;

	scanf_s("%c%*c", &a, sizeof(a));
	putchar(a);
	putchar('\n');
	b = getchar();
	printf("%c \n", b);

	return 0;
}
*/
{
	char a;
	a = fgetc(stdin);
	putchar(a);

	return 0;
}
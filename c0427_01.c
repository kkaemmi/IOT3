#include <stdio.h>
void main(void)
{
	char pw[7] = "a1b2c3";
	char en_pw[7] = "";
	char de_pw[7] = "";
	const int KEY = 3;

	for (int i = 0; i < sizeof(pw); i++)
		en_pw[i] = (char)(pw[i] + KEY);
	for (int i = 0; i < sizeof(en_pw); i++)
		de_pw[i] = (char)(en_pw[i] + KEY);
	printf("기본 :");
	for (int i = 0; i < sizeof(pw); i++)
		printf("%c", pw[i]);
	printf("\n암호화 :");
	for (int i = 0; i < sizeof(en_pw); i++)
		printf("%c", en_pw[i]);
	printf("\n복호화 :");
	for (int i = 0; i < sizeof(de_pw); i++)
		printf("%c", de_pw[i]);
}
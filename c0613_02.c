#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma pack(1)

typedef struct profile
{
	char name[20];    // 20byte
	int age;          // 4byte
	double height;    // 8byte
	char* intro;      // 4byte --> 합 : 20 + 16 = 36 byte --> ?
}profile;
int main(void)
{
	profile yuni;
	strcpy_s(yuni.name, sizeof(yuni.name), "서하윤");
	yuni.age = 17;
	yuni.height = 164.5;
	yuni.intro = (char*)malloc(80);
	printf("자기 소개 : >>");
	gets(yuni.intro);
	printf("%s,%d,%.2lf,%s \n", yuni.name, yuni.age, yuni.height, yuni.intro);

	return;
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
int main(void)
{
   char temp[20];
   char*str[3];
   for (int i = 0; i < 3; i++) {
	  printf("문자열입력: ");
	  gets(temp);
	  str[i] = (char*)malloc(sizeof(temp));

	  strcpy_s(str[i], sizeof(temp), temp);
	  printf("%d\n", strlen(temp));
	  printf("%s\n", str[i]);
   }

   return 0;
*/

/*
int main(int argc, char**argv)  //프롬프트에서 인자가 몇 개인가를 셈함(5개)
{
   for (int i = 0; i < argc; i++) {
	  printf("%s\n", argv[i]);
   }
}

*/

typedef struct student
{
	int num;
	double grade;
} std;

int main(void)
{
	std s1;
	s1.num = 2;
	s1.grade = 2.7;
	printf("%d, %.2lf\n", s1.num, s1.grade);

	return 0;
}
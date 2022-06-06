#include <stdio.h>
void main(void)
{
	int n1 = 0, n2 = 0, n3 = 0;
	int condition1 = 0, condition2 = 0;

	char * n1Msg = "첫번째 정수";
	char * n2Msg = "두번째 정수";
	char * format = "";

	printf("%s", n1Msg); scanf_s("%d", &n1);
	printf("%s", n2Msg); scanf_s("%d", &n2);

	condition1 = n1 > n2;
	condition2 = n1 == n2;

	format = condition2 ? "%s" : "더 큰값 : %d";
	      // ----------   ----   --------------
	      //    1항        2항        3항
	printf(format, condition1 ? n1 : condition2 ? "두수는 같습니다." : n2);
	      //           1항      2항      3항
	      //                             1항            2항            3항
}
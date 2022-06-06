// do{ }while(); --> 메뉴 구성 활용하면 좋다. 한번은 실행이 이루어진다.
#include <stdio.h>
void main(void)
{
	char * qMsg = "\n당신의 혈액형은?";
	char * choiceMsg = "\n1.A\n2.B\n3.O\n4.AB\n";
	char * aMsg = "꼼꼼하고 세심하다.";     char * bMsg = "추진력이 좋다.";
	char * oMsg = "사교성이 좋다.";         char * abMsg = "착하다.";
	char * errMsg = "다시 시도해 주세요?";
	char * resultMsg = "";
	int choice = 0;
	do {
		printf("%s%s\n", qMsg, choiceMsg);   scanf_s("%d", &choice);
		switch (choice) {
			case 1: resultMsg = aMsg; break;
			case 2: resultMsg = bMsg; break;
			case 3: resultMsg = oMsg; break;
			case 4: resultMsg = abMsg; break;
			default: resultMsg = errMsg;
		}
		if (choice == 0) resultMsg = "종료합니다.";
		puts(resultMsg);
	} while (choice != 0);




}
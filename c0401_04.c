#include <stdio.h>
void main(void)
{
	char * qMsg = "당신의 혈액형은?";
	char * choiceMsg = "1.A \n2.B \n3.O \n4.AB";
	char * aMsg = "꼼꼼하고 세심하다.";
	char * bMsg = "추진력은 좋다.덤벙된다.";
	char * oMsg = "사교성이 좋다.";
	char * abMsg = "착하고 천재성이 있다.";
	char * errorMsg = "다시 시도해 주세요.";
	int condition1 = 0; int condition2 = 0;
	int condition3 = 0; int condition4 = 0;
	int choice;
	printf("%s \n %s \n", qMsg, choiceMsg );
	scanf_s("%d", &choiceMsg);
	condition1 = choice == 1;
	condition2 = choice == 2;
	condition3 = choice == 3;
	condition4 = choice == 4;
	printf("%s \n", condition1 ? aMsg : 
		condition2 ? bMsg : 
	    condition3 ? oMsg : 
		condition4 ? abMsg : errorMsg);
}
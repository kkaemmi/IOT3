#include <stdio.h>
void main(void)
{
	char*qMsg = "당신의 혈액형은? >>";
	char*choiceMsg = "1.A\n2.B\n3.O\n4.AB\n";
	char*aMsg = "꼼꼼하고 세심하다."; char*bMsg = "추진력이 좋다.";
	char*oMsg = "사교성이 좋다.";     char*abMsg = " 착하다.";
	char*errMsg = "다시 시도해 주세요";
	char*resultMsg = "";
	int choice = 0;

	printf("%s\n%s\n", qMsg, choiceMsg);
	scanf_s("%d", &choice);

	switch (choice) {
	case 1: resultMsg = aMsg; break;  // 현재 나를 감싸고 있는 문장({})을 1차 탈출하라
	case 2: resultMsg = bMsg; break;
	case 3: resultMsg = oMsg; break;
	case 4: resultMsg = abMsg; break;
	default: resultMsg = errMsg;
	}
	puts(resultMsg);
}
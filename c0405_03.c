#include <stdio.h>
void main(void)
{
	char*msg = "Q.다음 중 동물이 아닌 것은?";
	char*choiceMsg = "1.강아지\n2.고양이\n3.코뿔소\n4.어묵";
	char*resultMsg = "";
	int  choice = 0;
	int  answer = 4;
	while (1) {
		printf("%s\n%s\n", msg, choiceMsg);
		scanf_s("%d", &choice, sizeof(choice));

		if (choice == answer)              resultMsg = "정답입니다!";
		else if(choice >=1 && choice < 4)  resultMsg = "오답입니다!";
		else                               resultMsg = "다시 시도해주세요!";

		printf("%s\n", resultMsg);
		if (choice == answer)  break;

	}
	printf("프로그램을 종료합니다.\n");
}
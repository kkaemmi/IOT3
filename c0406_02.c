#include <stdio.h>
void main(void)
{
	char * msg = "\n문의하실 번호를 선택하세요?";
	char * choiceMsg = "1.분실신고\n2.번호이동\n3.신규가입\n4.상담원 연결";
	int choice = 0;
	do {
		printf("%s\n%s\n", msg, choiceMsg);
		scanf_s("%d", &choice);
		switch (choice) {
			case 1:
			case 2:
			case 3:printf("안녕하세요. 고객님\n"); break;
			case 4:printf("상담원을 연결하겠습니다. \n");
		}
	} while (choice != 0);
}
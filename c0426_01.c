#include <stdio.h>
void main(void)
{
	char grade;
	char name[20];
//	char* name;
	int a = 10;

//	printf("학점 입력 : >>"); scanf_s("%c", &grade, sizeof(char));   // A enter(문자)
//	getchar();   // enter(문자)
//	printf("이름 입력 : >>"); scanf_s("%s", name, sizeof(name));

//	printf("%s의 학점은  %c입니다. \n", name, grade);

	int inverse = -a;                            // -10 -> 0000 1010
	int inv = ~a;                                //        1111 0101 --> -10 + 1 = -11
	printf("%d \n", inverse);  // -10            //                1(2의보수)
	printf("%d \n", inv);      // -11            //        1111 0110 -> - (9+1) = -10
}
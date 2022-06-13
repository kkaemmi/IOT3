//[문제]
// 사용자로부터 영단어를 입력 받아서, 그 단어의 길이를 계산하고
// 출력하는 프로그램을 작성하라. (Ex. "Array" --> 5)
//
/*
#include <stdio.h>
int main(void)
{
	char voca[80];
	int lengh = 0;

	printf("영단어를 입력하세요 : >>");
	scanf_s("%[^\n]s", voca, sizeof(voca));
	while (voca[lengh] != 0)
		lengh++;
	printf("영단어 갯수는 %d \n", lengh);

	return 0;
}
*/
//[문제]
// 사용자로부터 영단어를 입력받아서 char형 배열에 저장한다.
// 그 다음 배열에 저장된 영단어를 역순으로 뒤집는다.그리고 출력.
//(이 때 널 문자의 위치를 변경해서는 안 됨)
#include <stdio.h>
int main(void)
{
	char voca[80];
	int temp;
	int lengh = 0;

	printf("영단어를 입력하세요 : >>");
	scanf_s("%[^\n]s", voca, sizeof(voca));   // ABrracy --> ycarrBA
	while (voca[lengh] != 0)                  // 1234567
		lengh++;                              //    4
	for (int i = 0; i < lengh / 2; i++) {     // 0123456
		temp = voca[i];
		voca[i] = voca[(lengh - i) - 1];
		voca[(lengh - i) - 1] = temp;
	}
	printf("역순 영어단어 : %s \n", voca);

	return 0;
}
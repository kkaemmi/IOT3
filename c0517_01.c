//[문제]
// 사용자로부터 영단어를 입력받는다.
// 입력받은 영단어 중에 그 문자에서 아스키코드 값이 가장 큰 문자를
// 찾아서 출력하는 프로그램을 작성하라("LOVE" --> V), A:65~, a:97~
#include <stdio.h>
/*
int main(void)
{
	char voca[50] = "";
	char max = 0;
	int lengh = 0;
	int i;

	printf("영어 단어 입력 : >>");   // voca[0], voca[1], voca[2], voca[3]~~
	scanf_s("%[^\n]s", voca, sizeof(voca));        // I Love You0[enter]
	while (voca[lengh] != 0) {       // lengh = 10
		lengh++;
	}
	for (i = 0; i < lengh; i++) {
		if (max < voca[i])
			max = voca[i];
	}
	printf("입력한 문장 중 아스키 코드 문자가 가장 큰 값은 %c \n", max);

	return 0;
}
*/
//[문제]
// int n1 = 10; int n2 = 20; int *p1 = &n1; int *p2 = &n2;
// p1 --> n1 + 10증가시키고, p2 ---> n2 - 10감소시킨다.
// p1 --> n2를 가르키고, p2 --> n1을 가르키라 (상대를 바꾸어서)
// 그리고 p1,p2를 출력 해보자
int main(void)
{
	int n1 = 10, n2 = 20;
	int temp = 0;
	int* p1 = &n1;
	int* p2 = &n2;
	
	printf("1 -> %d, %d \n", *p1, *p2);   // p1 -> n1, p2 -> n2
	printf("2 -> %d, %d \n", n1, n2);
	*p1 = (*p1) + 10;
	*p2 = (*p2) - 10;
	temp = p1;
	p1 = p2;
	p2 = temp;
	printf("3 -> %d, %d \n", *p1, *p2);   // p1 -> n2, p2 -> n1
	printf("4 -> %d, %d \n", n1, n2);

	return 0;
}
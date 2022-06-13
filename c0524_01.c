//[문제]
// 깉이 10개 배열 선언하고 10개 정수 입력한다. 단, 입력받은 값이 홀수이면
// 배열 앞에서부터 채우고, 짝수이면 뒤에부터 채워나간다.
// EX. 1 2 3 4 5 6 7 8 9 10 입력 --> 1 3 5 7 9 10 8 6 4 2 순으로 출력
//     0 1 2 3 4 5 6 7 8 9 <-- index 
/*
#include <stdio.h>
int main(void)
{
	int ar[10];
	int front = 0;
	int back = 9;
	int i; int num;

	for (i = 0; i < 10; i++) {
		printf("%d 정수 입력 : >>", i+1);
		scanf_s("%d", &num);
		if (num % 2 == 1) {
			ar[front++] = num;
		}
		else {
			ar[back--] = num;
		}
	}
	printf("\n");
	for (i = 0; i < 10; i++) {
		printf("%5d", ar[i]);
	}

	return 0;
}
*/
//[문제]
// 우리는 인자로 전달받은 영단어가 회문인지 아닌지를 판단해서 그 결과를
// 출력하는 함수를 정의하고, 이에 적절한 main함수를 구현하자
// 대소문자까지 일치해야 한다.
// 회문 : Palindrome: 앞으로 읽으나 뒤로 읽으나 차이가 없는 단어
// : level, noon, bob
#include <stdio.h>
void Palindrome(char* str, int len);
int StrLen(char* str);
int main(void)
{
	char string[10];
	int len;

	printf("회문 문자열 입력 : >>");
	scanf_s("%s", string, sizeof(string));
	len = StrLen(string);
	Palindrome(string, len);

	return 0;
}
void Palindrome(char* str, int len)   // char* str = string, int len = len
{
	int i;

	for (i = 0; i < len / 2; i++) {   // i = 0, 4  i = 1, 3  i = 2, 2
		if (str[i] != str[len-i-1]) {
			printf("회문이 아닙니다.\n");
			return;
		}
	}
	printf("회문입니다.\n");
}
int StrLen(char* str)   // char* str = "level"
{
	int len = 0;
	while (str[len] != 0)
		len++;
	return len;
}
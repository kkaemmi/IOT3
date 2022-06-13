/*
#include <stdio.h>
void print_ary(int pa[5]);   // int pa[5] = ary;
int main(void)
{
	int ary[5] = { 1,2,3,4,5 };
	print_ary(ary);
}
void print_ary(int pa[5])
{
	for (int i = 0; i < 5; i++) {
		printf("%5d", pa[i]);
	}
}
*/
// char --> %c, %d --> 거의 아스키 코드 접근하기위해서 --> char, char*, char[]
// 0, '\0'  -> null
// SpaceBar -> 32
// ESC      -> 27
// '0'      -> 48
// 'A'      -> 65 + 32 -> 소문자
// 'a'      -> 97 - 32 -> 대문자
// \n       -> \r + \n <-- windows
// \n       (10)       <-- 임베디드 (커서를 다음 줄로 옮겨라)
// \r       (13)       <-- 임베디드 (커서를 그 줄 처음으로 이동하라)
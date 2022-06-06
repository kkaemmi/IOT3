#include <stdio.h>
void main(void)
{
	char pw[7] = "a1b2c2";
	char en_pw[7] = "";   // en_pw : 암호화 배열변수
	char de_pw[7] = "";   // de_pw : 복호화 배열변수
	const int KEY = 3;    // const --> KEY = 3 (KEY는 반드시 이것만 기억해라)

	for (int i = 0; i < sizeof(pw); i++) {   // i -> 0,1,2,3,4,5,6
		en_pw[i] = (char)(pw[i] + KEY);
	}
	// 복호화 작업
	printf("기본 : ");
	for (int i = 0; i < sizeof(pw); i++) {
		printf("%c", pw[i]);
	}
	printf("\n암호화 : ");
	for (int i = 0; i < sizeof(en_pw); i++) {
		printf("%c", en_pw[i]);
	}
	// 복호화 작업 출력



}
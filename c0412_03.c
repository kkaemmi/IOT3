/*
배열선언 : 자료형 배열명[길이(요소)] = {값1,값2,...};
           자료형 배열명[요소] = {초기값,};
                                  초기값 : 정수 : 0, 실수 : 0.0, 문자 : " "
배열 크기 : sizeof(배열명(주소))
배열 길이(갯수) : sizeof(배열명) / sizeof(자료형 또는 해당변수)
배열사용 : 1.배열명[index] = 값
           2.*(배열명+index) = 값
		   3.배열명[index] + 값
		   4.*(배열명+index) + 값
index : 0에서부터 시작

        배열도 0에서 출발함
		배열명[0],  *(배열명 + 0)
	    &배열명[0], 배열명 + 0 
*/
/*
문자열 정리

char배열명[길이] = "문자열";
                   널문자('\0' = 0 = ") --> 문자열 끝을 알려줌
				   널이 있어야 정상적인 값을 읽어올 수 있음
				   널은 길이(요소)에 포함되지 않음
				   문자열 값을 저장하는 크기에는 널의 한바이트를 고려하여 추가해야 함
입력 : 크기를 잘 고려해야 함
문자열 입력 : scanf_s("%s",주소변수,sizeof(저장공간));
const cahr* 포인터명;        --> *포인터명 = 값을 수정(변경)할 수 없음
const cahr* const 포인터명;  --> 포인터명으로 주소를 수정(변경)할 수 없음
*/
/*
#include <stdio.h>
void main(void)
{
	char fruit[10] = "";  // null
	printf("과일이름 : >>");
	scanf_s("%s", fruit, sizeof(fruit));
	printf("%s는 맛있어!", fruit);
}
*/
#include <stdio.h>
void main(void)
{
	char*apple = "Apple";
	char*orange = "Orange";
 // --------------------------------- 
	const char* const fruit = apple;
	//*fruit = "Banana";    // <-- const char*의 영향
	//fruit = orange;       // <-- const fruit의 영향
	printf("%s \n", fruit);
 // --------------------------------- 
}
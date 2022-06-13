#include <stdio.h>
void main(void)
{
	char fruit[20] = "strawberry";
//	char * fruit = "strawberry";

	printf("%s \n", fruit);
	fruit[0] = 'q';                       // 포인터로 문자열 선언된 것은 -> 이렇게 하면 안됨
	                                      // 배열로 선언된 문자열은 -> 요소 수정이 가능하다.
//	*fruit = "banana";                    // 성립이 불가하다.

	strcpy_s(fruit, sizeof(fruit), "banana");
	
	printf("%s %s \n", fruit, "jam");
}
#include <stdio.h>
int main(void)
{
/*
	char str[80];

	printf("문자열 입력 : >>");
	gets(str);
	puts("입력된 문자열 :");   // 출력 후 줄바꿈이 실행되어짐
	puts(str);                 // 출력 후 줄바꿈이 실행되어짐
*/
/*
	char str[5];

	str[0] = 'o';
	str[1] = 'k';
	str[2] = '0';
	printf("%s \n", str);
*/
/*
	포인터 <--> 배열
	1차원포인터                 2차원포인터                 3차원포인터
	1차원배열과 레벨이같다.     2차원배열과 레벨이같다.     3차원배열과 레벨이같다.
	* <--> []                   ** <--> [][]                *** <--> [][][]
	                             * <--> []                   ** <--> [][]
															  * <--> []
								*[] <- (2차원포인터)
								[]* <- (2차원배열)

																[decoder]     [RAM]
1. 포인터선언 --> 1) int * (변수명);             int a = 100; --> a[&a] --> (100)4byte
                    (변수명) = &a;               int * p = &a; --> p[&p] --> (&a) : *
				  2) int * (변수명) = &a;
2. 값 - 읽기   :   *포인터변수, *p
3. 값 - 저장   :   *포인터변수 = 값 또는 *p
                   *p = 200; --> a값은 200으로 바뀐다.
4. 포인터 - 주소↑↓   :   *를 붙이지 않는다.
                           변수명, p   <-- 자기가 기억하고 있는 주소저장함
						   p++;
						   ++p;
						   p--;
						   --p'
*/



	return 0;
}
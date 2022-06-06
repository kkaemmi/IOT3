#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main(void)
{
	char str1[4] = "cat";
	char str2[80];
	char nation[6] = "korea";
// 문자열 복사
	strcpy_s(str2, sizeof(str2), str1);
	printf("%s,%s\n", str1,str2);
	strcpy_s(str2, sizeof(str2),"I Love You");
	printf("%s\n", str2);
// 문자열 비교
	printf("%d\n", !strcmp(str1, "cat"));
	printf("%d\n", !strcmp(nation, "korea"));

	if (!strcmp(nation, "korea")) {
		printf("두 문자열을 같은 값입니다.");
	}
// 문자열 크기
	printf("%d,%d\n", strlen(nation), strlen("korea"));   // 실제크기
	printf("%c,%c,%c\n", nation[0], nation[1], nation[2]);
// 포인터 사용목적 : 다른 변수에 저장된 데이터를 주소로 접근하여 가지고와서 사용하고 반납하기위해 사용함 
/*
   1. 포인터 선언(정의)
      자료형 * 변수명;  <-- 초기값을 제시하지 않은 경우
	  (포인터)변수명 = &다른변수명;

	  자료형 * 변수명 = &다른변수명;

   2. 포인터 읽기(read)
      
	  *포인터변수  <-- 단독으로 사용, 출력할 때
	  = *포인터변수
	       (좌측)
   3. 포인터 쓰기(저장,write)

      *포인터변수 = 
	   (우측)
	   *포인터변수 = *포인터변수;
	    (우측)        (좌측)

   4. 포인터 활용(*가 빠진 포인터변수 사용 방법)
      int a = 10;
	  int b = 20;
	  int * ptr = &a;
	  int * ptr1 = &b;
	  ptr          <-- 주소를 기억하고 있는 것임
	  ptr = ptr1;  <-- 주소를 전달함
	  ptr++;       <-- 주소를 증감시키라함
	  --ptr;       <-- 주소를 감소시키라함
	  목적 : 주소를 변경, 증가, 감소, 주소 계산, 주소를 처리할 목적으로 사용함
*/
}
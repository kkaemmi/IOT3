#include <stdio.h>
// 헤더 파일 --> #include <stdio.h>      <-- c compiler(VS)에서 제공된다.
//           --> #include "헤더파일명.h" <-- 내가 필요해서 만든 헤더 파일

// 연산자의 우서순위(최단산 - 쉬관리 - 삼대)
// =========================================================================
// 최 : 최상위 --> ( )
// 단 : 단항연산자 --> !거짓 : 1(참), !참 : 0(거짓), &(변수)
//                 --> ~ : 비트반전, 1100 1100
//                 --> -(마이너스), -5
// 산 : 산술연산자 : (* / %) > (+ -)
// =========================================================================
// 쉬 : 쉬프트연산자 : x << a, x >> a (이동)
// 관 : 관계연산자(판단) : <  <=  >  >=  ==  !=
// 리 : 논리연산자 : &&(nad), ||(or), !(not)
//    (관계연산) && (관계연산) --> 결과 : 1,0  <-- &(비트단위연산)
//      A영역    &&    B영역
//        T              T     --> T (참)
//        T              F         F (거짓)
//        F              T         F
//        F              F         F

//    (관계연산) || (관계연산) --> 결과 : 1,0  <-- |(비트단위연산)
//      A영역    ||    B영역
//        T              T     --> T
//        T              F         T
//        F              T         T
//        F              F         F

// !(수식,관계연산,..) --> !T --> F / !F --> T  <-- ~(비트단위연산)
// =========================================================================
// 삼 : 삼항연산자 --> (   ) ? (   ) : (   );
//                      1항     2항     3항
//                     조건?    만족   불만족
//                결과를 되받는다.
// 대 : 대입연산자 --> =(저장한다)
// =========================================================================
#include <stdio.h>
void main(void)
{
	int result = 5 > 10;
	printf("%d, \n", result);       // 0
	printf("%d \n", 10 == 11);      // 0
	printf("%d \n", !(10 == 11));   // !0 --> 1
// --------------------------------------------------------------------------
	printf("%d \n", 10 == 10 && 10 < 3);     // 1 && 0 --> 0
	printf("%d \n", 10 == 10 || 10 < 3);     // 1 || v --> 1
// --------------------------------------------------------------------------
	printf("%d \n", 14 | 10);       // 0000 1110
	                                // 0000 1010  (|)
	                                // ---------- 
	                                // 0000 1110  --> 14

	printf("%d \n", 14 & 10);       // 0000 1110
	                                // 0000 1010  (&)
	                                // ---------- 
	                                // 0000 1010  --> 10

	printf("%d \n", 14 ^ 10);       // 0000 1110
	                                // 0000 1010  (^)
	                                // ---------- 
	                                // 0000 0100   --> 4

	printf("%d \n", ~ 14);          // 0000 1110  (~)
		                            // 1111 0001   --> -(8+4+2) +1 = -15

}
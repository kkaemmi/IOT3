#include <stdio.h>
// ��� ���� --> #include <stdio.h>      <-- c compiler(VS)���� �����ȴ�.
//           --> #include "������ϸ�.h" <-- ���� �ʿ��ؼ� ���� ��� ����

// �������� �켭����(�ִܻ� - ������ - ���)
// =========================================================================
// �� : �ֻ��� --> ( )
// �� : ���׿����� --> !���� : 1(��), !�� : 0(����), &(����)
//                 --> ~ : ��Ʈ����, 1100 1100
//                 --> -(���̳ʽ�), -5
// �� : ��������� : (* / %) > (+ -)
// =========================================================================
// �� : ����Ʈ������ : x << a, x >> a (�̵�)
// �� : ���迬����(�Ǵ�) : <  <=  >  >=  ==  !=
// �� : ���������� : &&(nad), ||(or), !(not)
//    (���迬��) && (���迬��) --> ��� : 1,0  <-- &(��Ʈ��������)
//      A����    &&    B����
//        T              T     --> T (��)
//        T              F         F (����)
//        F              T         F
//        F              F         F

//    (���迬��) || (���迬��) --> ��� : 1,0  <-- |(��Ʈ��������)
//      A����    ||    B����
//        T              T     --> T
//        T              F         T
//        F              T         T
//        F              F         F

// !(����,���迬��,..) --> !T --> F / !F --> T  <-- ~(��Ʈ��������)
// =========================================================================
// �� : ���׿����� --> (   ) ? (   ) : (   );
//                      1��     2��     3��
//                     ����?    ����   �Ҹ���
//                ����� �ǹ޴´�.
// �� : ���Կ����� --> =(�����Ѵ�)
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
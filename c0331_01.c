// 입력시키는 함수 --> scanf_s()
// 입력 --> 상태: 커서가 깜밖이는 상태일 때 --> 입력을 시킨다.
//      --> 깜밖이는 상태를 만드는 것
// scanf_s() --> scanf_s("서식문자", 변수, 변수의크기)
//                        %c, %d, %f, %lf, %ld, %s
// & 사용하는 경우 --> 1. &변수 --> 주소 <-- scanf()
//                     2. & : 비트연산
//                     3. && : 논리연산
//                     4. & <-- 포인터 사용시 주소를 표현한다.
# include <stdio.h>
void main(void)
{
	int n1 = 0, n2 = 0, value = 0, result = 0; int rest = 0;
	// printf("첫번째 정수 : >>"); scanf_s("%d", &n1, sizeof(n1));
	// printf("두번째 정수 : >>"); scanf_s("%d", &n2, sizeof(n2));
	printf("5 3 정수 입력 :");  scanf_s("%d %d", &n1, &n2, sizeof(n1), sizeof(n2));
	value = n1 / n2;
	rest = n1 % n2;

	result = n1 + n2; printf("%d + %d = %d \n", n1, n2, result);
	result = n1 - n2; printf("%d - %d = %d \n", n1, n2, result);
	result = n1 * n2; printf("%d * %d = %d \n", n1, n2, result);
	result = n1 / n2; printf("%d / %d = %d \n", n1, n2, result);
	result = n1 % n2; printf("%d %% %d = %d \n", n1, n2, result);

	printf("몫 : %d \n", value);
	printf("나머지 : %d \n", rest);
}
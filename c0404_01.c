#include <stdio.h>
void main(void)
{
	int n1 = 0, n2 = 0;
	char*n1Msg = "첫번째 정수:>>";
	char*n2Msg = "두번째 정수:>>";
	printf("%s",n1Msg); scanf_s("%d",&n1);
	printf("%s",n2Msg); scanf_s("%d",&n2);

	if (n1 > n2) printf("큰 값은 %d\n", n1);
	else if (n1 != n2) printf("큰 값은 %d\n", n2);
	else printf(" 두 수가 같습니다.\n");
	printf("\n---------------\n");
	(n1 > n2) ? printf("큰 값은 %d\n", n1) :
		(n1 != n2) ? printf("큰 값은 %d\n", n2) :
		              printf("두 수가 같습니다.\n");
}
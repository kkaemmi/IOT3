#include <stdio.h>
void main(void)
{
	char fruit[20] = "strawberry";
//	char * fruit = "strawberry";

	printf("%s \n", fruit);
	fruit[0] = 'q';                       // �����ͷ� ���ڿ� ����� ���� -> �̷��� �ϸ� �ȵ�
	                                      // �迭�� ����� ���ڿ��� -> ��� ������ �����ϴ�.
//	*fruit = "banana";                    // ������ �Ұ��ϴ�.

	strcpy_s(fruit, sizeof(fruit), "banana");
	
	printf("%s %s \n", fruit, "jam");
}
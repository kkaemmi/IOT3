#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	printf("Be Happy!");
	system("pause");
	printf("Goot\bd\tchance\n");
//  \b = back space 1�� ���� �Ͱ� ����
//  \a = �ѹ� '��-' �Ҹ� ���� ��
	printf("Cow\rW\a\n");
/*
	0x0A = LF
	0x0D = CR = \r
	\n = \r + \n
	= 0x0D + 0x0A
*/
}

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	printf("Be Happy!");
	system("pause");
	printf("Goot\bd\tchance\n");
//  \b = back space 1번 누른 것과 같음
//  \a = 한번 '삐-' 소리 내는 것
	printf("Cow\rW\a\n");
/*
	0x0A = LF
	0x0D = CR = \r
	\n = \r + \n
	= 0x0D + 0x0A
*/
}

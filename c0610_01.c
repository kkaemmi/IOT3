#include <stdio.h>
#include "func.h"

int main(void)
{
	int sel;

	printf("���ϴ� ���� ���� : >>");
	scanf_s("%d", &sel);
	switch (sel)
	{
	case 1: func(sum); break;
	case 2: func(mul); break;
	case 3: func(max); break;
	}

	return 0;
}
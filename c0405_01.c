#include <stdio.h>
void main(void)
{                                  // 'a' : 97, '0' : 48, 'ESC'key : 27
	for (int i = 0; i < 6; i++) {  // �ݺ��� -> i  i+65 : 'A'(=�ƽ�Ű�ڵ尪)
		printf("%c", i + 65);      //           1   65 :'A'
	}                              //           2   66 :'B'
	                               //           3   67 :'C'
	                               //           4   68 :'D'
	                               //           5   69 :'E'
	                               //           6   70 :'F'
	// A ~ F :���,B�� �����ϰ� ���
	printf("\n----------\n");
	for (int i = 0; i < 6; i++) {
	   if (i != 1)
		   printf("%c", i + 65);
	}
	printf("\n----------\n");
	int temp = 0;
	for (int i = 0; i < 5; i++) {
		temp = i;
		if (i > 0)
			temp++;
		printf("%c", temp + 65);
	}
	printf("\n----------\n");
	int x = 0;
	for (int i = 0; i < 5; i++) {
		printf("%c", (i > 0) ? ((i + 1) + 65) : 65);
	}
}
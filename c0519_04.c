/*
#include <stdio.h>
void print_ary(int pa[5]);   // int pa[5] = ary;
int main(void)
{
	int ary[5] = { 1,2,3,4,5 };
	print_ary(ary);
}
void print_ary(int pa[5])
{
	for (int i = 0; i < 5; i++) {
		printf("%5d", pa[i]);
	}
}
*/
// char --> %c, %d --> ���� �ƽ�Ű �ڵ� �����ϱ����ؼ� --> char, char*, char[]
// 0, '\0'  -> null
// SpaceBar -> 32
// ESC      -> 27
// '0'      -> 48
// 'A'      -> 65 + 32 -> �ҹ���
// 'a'      -> 97 - 32 -> �빮��
// \n       -> \r + \n <-- windows
// \n       (10)       <-- �Ӻ���� (Ŀ���� ���� �ٷ� �Űܶ�)
// \r       (13)       <-- �Ӻ���� (Ŀ���� �� �� ó������ �̵��϶�)
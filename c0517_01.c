//[����]
// ����ڷκ��� ���ܾ �Է¹޴´�.
// �Է¹��� ���ܾ� �߿� �� ���ڿ��� �ƽ�Ű�ڵ� ���� ���� ū ���ڸ�
// ã�Ƽ� ����ϴ� ���α׷��� �ۼ��϶�("LOVE" --> V), A:65~, a:97~
#include <stdio.h>
/*
int main(void)
{
	char voca[50] = "";
	char max = 0;
	int lengh = 0;
	int i;

	printf("���� �ܾ� �Է� : >>");   // voca[0], voca[1], voca[2], voca[3]~~
	scanf_s("%[^\n]s", voca, sizeof(voca));        // I Love You0[enter]
	while (voca[lengh] != 0) {       // lengh = 10
		lengh++;
	}
	for (i = 0; i < lengh; i++) {
		if (max < voca[i])
			max = voca[i];
	}
	printf("�Է��� ���� �� �ƽ�Ű �ڵ� ���ڰ� ���� ū ���� %c \n", max);

	return 0;
}
*/
//[����]
// int n1 = 10; int n2 = 20; int *p1 = &n1; int *p2 = &n2;
// p1 --> n1 + 10������Ű��, p2 ---> n2 - 10���ҽ�Ų��.
// p1 --> n2�� ����Ű��, p2 --> n1�� ����Ű�� (��븦 �ٲپ)
// �׸��� p1,p2�� ��� �غ���
int main(void)
{
	int n1 = 10, n2 = 20;
	int temp = 0;
	int* p1 = &n1;
	int* p2 = &n2;
	
	printf("1 -> %d, %d \n", *p1, *p2);   // p1 -> n1, p2 -> n2
	printf("2 -> %d, %d \n", n1, n2);
	*p1 = (*p1) + 10;
	*p2 = (*p2) - 10;
	temp = p1;
	p1 = p2;
	p2 = temp;
	printf("3 -> %d, %d \n", *p1, *p2);   // p1 -> n2, p2 -> n1
	printf("4 -> %d, %d \n", n1, n2);

	return 0;
}
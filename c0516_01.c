//[����]
// ����ڷκ��� ���ܾ �Է� �޾Ƽ�, �� �ܾ��� ���̸� ����ϰ�
// ����ϴ� ���α׷��� �ۼ��϶�. (Ex. "Array" --> 5)
//
/*
#include <stdio.h>
int main(void)
{
	char voca[80];
	int lengh = 0;

	printf("���ܾ �Է��ϼ��� : >>");
	scanf_s("%[^\n]s", voca, sizeof(voca));
	while (voca[lengh] != 0)
		lengh++;
	printf("���ܾ� ������ %d \n", lengh);

	return 0;
}
*/
//[����]
// ����ڷκ��� ���ܾ �Է¹޾Ƽ� char�� �迭�� �����Ѵ�.
// �� ���� �迭�� ����� ���ܾ �������� �����´�.�׸��� ���.
//(�� �� �� ������ ��ġ�� �����ؼ��� �� ��)
#include <stdio.h>
int main(void)
{
	char voca[80];
	int temp;
	int lengh = 0;

	printf("���ܾ �Է��ϼ��� : >>");
	scanf_s("%[^\n]s", voca, sizeof(voca));   // ABrracy --> ycarrBA
	while (voca[lengh] != 0)                  // 1234567
		lengh++;                              //    4
	for (int i = 0; i < lengh / 2; i++) {     // 0123456
		temp = voca[i];
		voca[i] = voca[(lengh - i) - 1];
		voca[(lengh - i) - 1] = temp;
	}
	printf("���� ����ܾ� : %s \n", voca);

	return 0;
}
//[����]
// ���� 10�� �迭 �����ϰ� 10�� ���� �Է��Ѵ�. ��, �Է¹��� ���� Ȧ���̸�
// �迭 �տ������� ä���, ¦���̸� �ڿ����� ä��������.
// EX. 1 2 3 4 5 6 7 8 9 10 �Է� --> 1 3 5 7 9 10 8 6 4 2 ������ ���
//     0 1 2 3 4 5 6 7 8 9 <-- index 
/*
#include <stdio.h>
int main(void)
{
	int ar[10];
	int front = 0;
	int back = 9;
	int i; int num;

	for (i = 0; i < 10; i++) {
		printf("%d ���� �Է� : >>", i+1);
		scanf_s("%d", &num);
		if (num % 2 == 1) {
			ar[front++] = num;
		}
		else {
			ar[back--] = num;
		}
	}
	printf("\n");
	for (i = 0; i < 10; i++) {
		printf("%5d", ar[i]);
	}

	return 0;
}
*/
//[����]
// �츮�� ���ڷ� ���޹��� ���ܾ ȸ������ �ƴ����� �Ǵ��ؼ� �� �����
// ����ϴ� �Լ��� �����ϰ�, �̿� ������ main�Լ��� ��������
// ��ҹ��ڱ��� ��ġ�ؾ� �Ѵ�.
// ȸ�� : Palindrome: ������ ������ �ڷ� ������ ���̰� ���� �ܾ�
// : level, noon, bob
#include <stdio.h>
void Palindrome(char* str, int len);
int StrLen(char* str);
int main(void)
{
	char string[10];
	int len;

	printf("ȸ�� ���ڿ� �Է� : >>");
	scanf_s("%s", string, sizeof(string));
	len = StrLen(string);
	Palindrome(string, len);

	return 0;
}
void Palindrome(char* str, int len)   // char* str = string, int len = len
{
	int i;

	for (i = 0; i < len / 2; i++) {   // i = 0, 4  i = 1, 3  i = 2, 2
		if (str[i] != str[len-i-1]) {
			printf("ȸ���� �ƴմϴ�.\n");
			return;
		}
	}
	printf("ȸ���Դϴ�.\n");
}
int StrLen(char* str)   // char* str = "level"
{
	int len = 0;
	while (str[len] != 0)
		len++;
	return len;
}
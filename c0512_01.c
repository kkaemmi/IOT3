// [����]
// ���̰� 5�� int�� �迭�� �����ϰ�, ����ڷκ��� �� 5���� ������ �Է¹���!
// -�ִ밪, �ּҰ�, ���հ� ����϶�
/*
#include <stdio.h>
int main(void)
{
	int ar[5];
	int max, min;
	int sum = 0;

	for (int i = 0; i < sizeof(ar) / sizeof(int); i++) {
		printf("���� �Է� : >>");
		scanf_s("%d", (ar + i));
		sum += ar[i];
	}

	max = ar[0];
	min = ar[0];

	for (int i = 1; i < sizeof(ar) / sizeof(int); i++) {
		if (max < ar[i]) max = ar[i];
		if (min > ar[i]) min = ar[i];
	}

	printf("�ִ밪 : %d, �ּҰ� : %d, ���հ� : %d", max, min, sum);

	return 0;
}
*/
// [����]
// char�� 1���� �迭�� ����� ���ÿ� "Good Time"���� ������ �ʱ�ȭ���,
// �׸��� �� �ھ� ��½��Ѷ�
#include <stdio.h>
int main(void)
{
	char str[] = "Good Time";   // {'G','o','o','d','','T','i','m','e'};

	printf("%d \n",sizeof(str));
	printf("%d \n",strlen(str));
	//for (int i = 0; i <= strlen(str); i++)
	for (int i = 0; i < strlen(str); i++)
		printf("%c", str[i]);
	printf("\n");

	return 0;
}
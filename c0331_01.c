// �Է½�Ű�� �Լ� --> scanf_s()
// �Է� --> ����: Ŀ���� �����̴� ������ �� --> �Է��� ��Ų��.
//      --> �����̴� ���¸� ����� ��
// scanf_s() --> scanf_s("���Ĺ���", ����, ������ũ��)
//                        %c, %d, %f, %lf, %ld, %s
// & ����ϴ� ��� --> 1. &���� --> �ּ� <-- scanf()
//                     2. & : ��Ʈ����
//                     3. && : ������
//                     4. & <-- ������ ���� �ּҸ� ǥ���Ѵ�.
# include <stdio.h>
void main(void)
{
	int n1 = 0, n2 = 0, value = 0, result = 0; int rest = 0;
	// printf("ù��° ���� : >>"); scanf_s("%d", &n1, sizeof(n1));
	// printf("�ι�° ���� : >>"); scanf_s("%d", &n2, sizeof(n2));
	printf("5 3 ���� �Է� :");  scanf_s("%d %d", &n1, &n2, sizeof(n1), sizeof(n2));
	value = n1 / n2;
	rest = n1 % n2;

	result = n1 + n2; printf("%d + %d = %d \n", n1, n2, result);
	result = n1 - n2; printf("%d - %d = %d \n", n1, n2, result);
	result = n1 * n2; printf("%d * %d = %d \n", n1, n2, result);
	result = n1 / n2; printf("%d / %d = %d \n", n1, n2, result);
	result = n1 % n2; printf("%d %% %d = %d \n", n1, n2, result);

	printf("�� : %d \n", value);
	printf("������ : %d \n", rest);
}
#include <stdio.h>
void main(void)
{ // �ݺ��� : for(�ʱⰪ; �����ǽ�; ������)
  // {ó������      1         2(��)
  //                    3ó��
  //                                    4
  //                          5(��)
  //                    6ó��           7
  //                          8(��)
  //                    9ó��
  // }
	int i;
	for (i = 0; i < 10; i++) {
		printf("%d.ȫ�浿\n", 10 - i);
    }
	printf("1----------\n");
	for (i = 10; i > 0; i--) {
		printf("%d.ȫ�浿\n",i);
	}
	printf("2----------\n");
	for (i = 0; i < 10; i++) {
		printf("%2d", i + 1);
	}
	printf("\n3----------\n");
	// i : 1~50 --> ¦���� ���
	for (int i = 1; i <= 50; i++) {
		if (i % 2 == 0)
			printf("%3d", i);
	}
	printf("\n4----------\n");
	for (int i = 0; i < 25; i++) {
		printf("%3d", (i + 1) * 2);
	}
	printf("\n5----------\n");
//  1 ~ 100 -> �� ���ϱ�
	int total = 0;
	for (i = 0; i < 100; i++) {
		total += (i + 1);
		}
	printf("1~100��:%d\n", total);
	printf("\n6----------\n");
//  1 ~ n ������ �� ���ϱ�
	int num = 0;
	int total2 = 0;

	printf("\n���ڸ� �Է��ϼ���:");
	scanf_s("%d", &num);
	for (i = 0; i <= num; i++) {
		total2 += i;
	}
	printf("%d", total2);
	printf("\n7----------\n");
	char*msg = "1~n������ ��\nnum=";
	int end = 0, total1 = 0;
	printf("%s", msg);
	scanf_s("%d", &end);
	for (i = 0; i < end; i++) {
		total1 += (i + 1);
	}
	printf("1 ~ %d������ �� : %d \n",end, total1);
}
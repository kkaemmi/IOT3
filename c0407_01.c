// �Լ� --> (���ϰ�)   �Լ���(�Ű�����...)
//         void/�ڷ���         void/~~~
// 1.����(����) 2.����(����) 3.����(����������)

// �迭 --> int std[10];
//          �ڷ���  �迭��[���=index]
//         (char,short,long,int,float,double,char*)
//         (���� ������,����ü,����������,�Լ�������)
//          �迭�� = �ּ�(�Լ���,char*) = str
//          index -> 0,1,2,3,4 ~~,9
//          �ּҸ� ǥ���ϴ� ��� : &std[2], (std + 2)
// �迭 --> 1���� �迭 --> [ ],2���� �迭 --> [ ] [ ]
//                         ȣ��=��=column     �� = �� = row
/*
#include <stdio.h>
void main(void)
{
	int ar[10] = { 10,20,30,40 }; // �ʱⰪ ����
	// int ar[ ] = {10,20,30,40};  <-- ar[4]������ ������
	for (int i = 0; i < 10; i++) {
		printf("%d ", ar[i]);
	}
	printf("\n");
	for (int i = 0; i < 2; i++)
		//scanf_s("%d", &ar[i]);
		scanf_s("%d", (ar+i));
	ar[5] = ar[0] + ar[1];
	ar[6] = ar[0] - ar[1];
	ar[7] = ar[0] * ar[1];
	ar[8] = ar[0] / ar[1];  // ����/���� --> ��(����)  <-- python : //
	ar[9] = ar[0] % ar[1];  // ����/���� --> ������(����)
	for (int i = 0; i < 10; i++) {
		printf("%d ", ar[i]);
	}
	printf("\n");
}
*/

#include <stdio.h>
void main(void)
{
	int arData[] = { 3,5,1,9,7 };
	int length = sizeof(arData) / sizeof(int);  // (int*5��) / (int) = 5�����
	for (int i = 0; i < length; i++)            // 0,1,2,3,4
		arData[i] = 5 - i;                      // 5,4,3,2,1
	for (int i = 0; i < length; i++)
		printf("%d\t", arData[i]);
	printf("\n----------\n");
	printf("\n %p,%p\n", arData, &arData[0]);
	printf("\n %#X,%#X\n", arData, &arData[0]);
	printf("%d\n", sizeof(arData));
	printf("\n----------\n");
	printf("%d,%d,%d \n", arData[0], arData[1], arData[2]);
	printf("%#X,%#X,%#X \n", (arData + 0), (arData + 1), (arData + 2));
	printf("%d,%d,%d \n", *(arData + 0), *(arData + 1), *(arData + 2));
}
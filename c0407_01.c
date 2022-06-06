// 함수 --> (리턴값)   함수명(매개변수...)
//         void/자료형         void/~~~
// 1.정의(선언) 2.구현(설계) 3.실행(데이터전달)

// 배열 --> int std[10];
//          자료형  배열명[요소=index]
//         (char,short,long,int,float,double,char*)
//         (각종 포인터,구조체,구조포인터,함수포인터)
//          배열명 = 주소(함수명,char*) = str
//          index -> 0,1,2,3,4 ~~,9
//          주소를 표기하는 방법 : &std[2], (std + 2)
// 배열 --> 1차원 배열 --> [ ],2차원 배열 --> [ ] [ ]
//                         호실=열=column     층 = 행 = row
/*
#include <stdio.h>
void main(void)
{
	int ar[10] = { 10,20,30,40 }; // 초기값 설정
	// int ar[ ] = {10,20,30,40};  <-- ar[4]까지만 생성됨
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
	ar[8] = ar[0] / ar[1];  // 정수/정수 --> 몫(정수)  <-- python : //
	ar[9] = ar[0] % ar[1];  // 정수/정수 --> 나머지(정수)
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
	int length = sizeof(arData) / sizeof(int);  // (int*5개) / (int) = 5개요소
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
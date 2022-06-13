#include <stdio.h>
/*
int  main(void)
{
	int score[3][4];  int  total; double avg;  
	for (int i = 0; i < 3; i++)              //층 접근
	{
		printf("4과목 점수 입력 : >>");  
		for (int j = 0; j < 4; j++)          //호실 접근
			scanf_s("%d", score[i] + j);  // 주소 
	}
	for (int i = 0; i < 3; i++)               //층 접근
	{
		total = 0;
		for (int j = 0; j < 4; j++)
			total += score[i][j];              //값
		avg = total / 4.0;
		printf("총점 : %d, 평균 : %.2lf \n", total, avg);
	}
	return 0;
}
*/
/*
int  main(void)
{
	int  num[][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)
			printf("%5d", num[i][j]);
		printf("\n");
	}
	printf("%#X, %#X\n", num[1], &num[1][0]);
	printf("%d \n", sizeof(num) / sizeof(num[0]) );
	//                      12 * 4 = 48 / 4*4 = 48/16 = 3
	return 0;
}
*/
/*
int  main(void)
{
	char animal[5][20];   int  count;
	count = sizeof(animal) / sizeof(animal[0]);   //층이 몇 개있어?
//                                                                     5 * 20 =100 / 20 = 5
	printf("%d \n", count);
	for (int i = 0; i < count; i++)
		scanf_s("%s", animal[i], sizeof(animal[i]));

	for (int i = 0; i < count; i++)
		printf("%s \n", animal[i]);
	return  0;
}

*/

int  main(void)
{
	char animal[5][10] = { "dog", "tiger", "rabbit", "horse", "cat" };

	for (int i = 0; i < 5; i++)
		printf("%s \n", animal[i] );
	return  0;
}










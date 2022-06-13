// [문제1] 10000초를 입력받아 몇 시간, 몇 분, 몇 초를 출력하는 프로그램으로 작성하자
#include <stdio.h>
int main(void)
{
/*
	int hour, hour_remainder = 0; int minute = 0; int second = 0;
	int data;
	printf("초를 입력하세요 : >>"); 
	scanf_s("%d", &data);   // 10000
	
	hour = data / (60 * 60);
	hour_remainder = data % (60 * 60);
	minute = hour_remainder / 60;
	second = hour_remainder % 60;

	printf("%d초는 %d시간이고, %d분이고, %d초이다. \n", data, hour,minute,second);

	return 0;
*/
 // [문제2] -3을 입력하면 -> 3을 출력하고, 5를 입력하면 -> -5를 출력하는 프로그램을 작성해보자
	int num;

	printf("+정수 또는 -정수를 입력하세요 : >>"); 
	scanf_s("%d", &num);

	num = ~num + 1;   // + --> -
				  // - --> +

	printf("입력한 반대 값은 %d이다. \n", num);
	
	return 0;
}
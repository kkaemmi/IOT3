// [����1] 10000�ʸ� �Է¹޾� �� �ð�, �� ��, �� �ʸ� ����ϴ� ���α׷����� �ۼ�����
#include <stdio.h>
int main(void)
{
/*
	int hour, hour_remainder = 0; int minute = 0; int second = 0;
	int data;
	printf("�ʸ� �Է��ϼ��� : >>"); 
	scanf_s("%d", &data);   // 10000
	
	hour = data / (60 * 60);
	hour_remainder = data % (60 * 60);
	minute = hour_remainder / 60;
	second = hour_remainder % 60;

	printf("%d�ʴ� %d�ð��̰�, %d���̰�, %d���̴�. \n", data, hour,minute,second);

	return 0;
*/
 // [����2] -3�� �Է��ϸ� -> 3�� ����ϰ�, 5�� �Է��ϸ� -> -5�� ����ϴ� ���α׷��� �ۼ��غ���
	int num;

	printf("+���� �Ǵ� -������ �Է��ϼ��� : >>"); 
	scanf_s("%d", &num);

	num = ~num + 1;   // + --> -
				  // - --> +

	printf("�Է��� �ݴ� ���� %d�̴�. \n", num);
	
	return 0;
}
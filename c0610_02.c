#include <stdio.h>
#include <stdlib.h>
/*
int main(void)
{
	int* pi;
	int sum = 0;
	int i;

	pi = (int*)malloc(5 * sizeof(int));
	if (pi == 0) { printf("메모리 부족함"); exit(1); }
	printf("나이 입력 : >>");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", pi + i);
		sum += pi[i];
	}
	printf("%d, %.2f \n", sum, sum / 5.0);
	free(pi);

	return 0;
}
*/
/*
int main(void)
{
	int* pi;
	int size = 5;
	int count = 0;
	int num;
	int i;

	pi = (int*)calloc(size, sizeof(int));   // size * byte = 5 * 4 = 20,  (ex, 0x1000)
	while (1)
	{
		printf("정수 입력 : >>");
		scanf_s("%d", &num);
		if (num <= 0) break;
		if (size == count)
		{
			size += 5;
			pi = (int*)realloc(pi, size* sizeof(int));
		}
		pi[count++] = num;     // pi[0]: pi[1]: pi[2]: pi[3]: pi[4]: pi[5]: pi[6]:
	}                          //   10     20     30     40     50     60     70     80
	for (i = 0; i < count; i++)
	{
		printf("%5d", pi[i]);
	}
	free(pi);

	return 0;
}
*/
int main(void)
{
	char temp[80];   // char* str[3] = {'\o',}; // str[0] -> (주소), str[1] -> (주소), str[2] -> (주소)
	char* str[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("문자열 입력 : >>"); gets(temp);      // I Love You --> 11 + 1(\0) <-- str[0]
		str[i] = (char*)malloc(strlen(temp) + 1);    // You Love Me --> 12 + 1(\0) <-- str[1]
		strcpy_s(temp, sizeof(temp), str[i]);
		printf("%d \n", strlen(str[i]));
	}
	for (i = 0; i < 3; i++)
	{
		printf("%s \n", str[i]);
	}
	for (i = 0; i < 3; i++)
	{
		free(str[i]);
	}

	return 0;
}